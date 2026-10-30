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

// Function: sub_00101A00
// Address: 0x101a00 - 0x101a60
void sub_00101A00_0x101a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101A00_0x101a00");
#endif

    switch (ctx->pc) {
        case 0x101a20u: goto label_101a20;
        case 0x101a34u: goto label_101a34;
        default: break;
    }

    ctx->pc = 0x101a00u;

    // 0x101a00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x101a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x101a04: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x101a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x101a08: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x101a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x101a0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x101a0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101a10: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x101a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x101a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101a18: 0xc0886fc  jal         func_221BF0
    ctx->pc = 0x101A18u;
    SET_GPR_U32(ctx, 31, 0x101A20u);
    ctx->pc = 0x101A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101A18u;
    // 0x101a1c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221BF0u, 0x101A18u, 0x101A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101A20u;
label_101a20:
    // 0x101a20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x101a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101a24: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x101A24u;
    {
        const bool branch_taken_0x101a24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x101A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A24u;
        // 0x101a28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a24) {
            ctx->pc = 0x101A44u;
            goto label_101a44;
        }
    }
    ctx->pc = 0x101A2Cu;
    // 0x101a2c: 0xc04128e  jal         func_104A38
    ctx->pc = 0x101A2Cu;
    SET_GPR_U32(ctx, 31, 0x101A34u);
    ctx->pc = 0x101A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101A2Cu;
    // 0x101a30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A38u, 0x101A2Cu, 0x101A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101A34u;
label_101a34:
    // 0x101a34: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x101a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x101a38: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x101a38u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x101a3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x101A3Cu;
    {
        const bool branch_taken_0x101a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A3Cu;
        // 0x101a40: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a3c) {
            ctx->pc = 0x101A4Cu;
            goto label_101a4c;
        }
    }
    ctx->pc = 0x101A44u;
label_101a44:
    // 0x101a44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x101a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x101a48: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x101a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_101a4c:
    // 0x101a4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x101a4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101a50: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x101a50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101a54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101a58: 0x3e00008  jr          $ra
    ctx->pc = 0x101A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A58u;
        // 0x101a5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101A60u;
}
