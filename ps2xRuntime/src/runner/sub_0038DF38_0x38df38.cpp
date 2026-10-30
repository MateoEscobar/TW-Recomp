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

// Function: sub_0038DF38
// Address: 0x38df38 - 0x38dfa0
void sub_0038DF38_0x38df38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DF38_0x38df38");
#endif

    switch (ctx->pc) {
        case 0x38df58u: goto label_38df58;
        case 0x38df78u: goto label_38df78;
        default: break;
    }

    ctx->pc = 0x38df38u;

    // 0x38df38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38df38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38df3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x38df3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x38df40: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x38df40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x38df44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38df44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38df48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38df48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x38df4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38df4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38df50: 0xc0e4088  jal         func_390220
    ctx->pc = 0x38DF50u;
    SET_GPR_U32(ctx, 31, 0x38DF58u);
    ctx->pc = 0x38DF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DF50u;
    // 0x38df54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390220u, 0x38DF50u, 0x38DF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DF58u;
label_38df58:
    // 0x38df58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x38df58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38df5c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x38DF5Cu;
    {
        const bool branch_taken_0x38df5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF5Cu;
        // 0x38df60: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38df5c) {
            ctx->pc = 0x38DF8Cu;
            goto label_38df8c;
        }
    }
    ctx->pc = 0x38DF64u;
    // 0x38df64: 0xc60f000c  lwc1        $f15, 0xC($s0)
    ctx->pc = 0x38df64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x38df68: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x38df68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x38df6c: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x38df6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x38df70: 0xc05eb2a  jal         func_17ACA8
    ctx->pc = 0x38DF70u;
    SET_GPR_U32(ctx, 31, 0x38DF78u);
    ctx->pc = 0x38DF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DF70u;
    // 0x38df74: 0xc60e0008  lwc1        $f14, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ACA8u, 0x38DF70u, 0x38DF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DF78u;
label_38df78:
    // 0x38df78: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x38df78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x38df7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38df80: 0xa2221308  sb          $v0, 0x1308($s1)
    ctx->pc = 0x38df80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4872), (uint8_t)GPR_U32(ctx, 2));
    // 0x38df84: 0xae2312ec  sw          $v1, 0x12EC($s1)
    ctx->pc = 0x38df84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4844), GPR_U32(ctx, 3));
    // 0x38df88: 0xae2312e8  sw          $v1, 0x12E8($s1)
    ctx->pc = 0x38df88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4840), GPR_U32(ctx, 3));
label_38df8c:
    // 0x38df8c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x38df8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38df90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38df90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38df94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38df94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38df98: 0x3e00008  jr          $ra
    ctx->pc = 0x38DF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF98u;
        // 0x38df9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DFA0u;
}
