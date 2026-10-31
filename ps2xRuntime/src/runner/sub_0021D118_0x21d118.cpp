#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021D118
// Address: 0x21d118 - 0x21d1a0
void sub_0021D118_0x21d118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D118_0x21d118");
#endif

    switch (ctx->pc) {
        case 0x21d134u: goto label_21d134;
        case 0x21d168u: goto label_21d168;
        case 0x21d178u: goto label_21d178;
        default: break;
    }

    ctx->pc = 0x21d118u;

    // 0x21d118: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21d118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21d11c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21d11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x21d120: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21d120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21d124: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21d124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21d12c: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x21D12Cu;
    SET_GPR_U32(ctx, 31, 0x21D134u);
    ctx->pc = 0x21D130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D12Cu;
    // 0x21d130: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x21D12Cu, 0x21D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D134u;
label_21d134:
    // 0x21d134: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x21d134u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x21d138: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x21d138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x21d13c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x21d13cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x21d140: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21d140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21d144: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21d144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d148: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d14c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x21d14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d150: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21d150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21d154: 0x0  nop
    ctx->pc = 0x21d154u;
    // NOP
    // 0x21d158: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x21D158u;
    {
        const bool branch_taken_0x21d158 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D158u;
        // 0x21d15c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d158) {
            ctx->pc = 0x21D170u;
            goto label_21d170;
        }
    }
    ctx->pc = 0x21D160u;
    // 0x21d160: 0xc0950c4  jal         func_254310
    ctx->pc = 0x21D160u;
    SET_GPR_U32(ctx, 31, 0x21D168u);
    ctx->pc = 0x21D164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D160u;
    // 0x21d164: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254310u, 0x21D160u, 0x21D168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D168u;
label_21d168:
    // 0x21d168: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21D168u;
    {
        const bool branch_taken_0x21d168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D168u;
        // 0x21d16c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d168) {
            ctx->pc = 0x21D18Cu;
            goto label_21d18c;
        }
    }
    ctx->pc = 0x21D170u;
label_21d170:
    // 0x21d170: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x21D170u;
    SET_GPR_U32(ctx, 31, 0x21D178u);
    ctx->pc = 0x21D174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D170u;
    // 0x21d174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x21D170u, 0x21D178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D178u;
label_21d178:
    // 0x21d178: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x21d178u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x21d17c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21d17cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d180: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d184: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x21d184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d188: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21d188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21d18c:
    // 0x21d18c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21d18cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d194: 0x3e00008  jr          $ra
    ctx->pc = 0x21D194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D194u;
        // 0x21d198: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D19Cu;
    // 0x21d19c: 0x0  nop
    ctx->pc = 0x21d19cu;
    // NOP
    ctx->pc = 0x21d1a0u;
}
