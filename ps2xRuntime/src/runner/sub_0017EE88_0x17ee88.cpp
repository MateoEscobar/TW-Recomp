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

// Function: sub_0017EE88
// Address: 0x17ee88 - 0x17ef20
void sub_0017EE88_0x17ee88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EE88_0x17ee88");
#endif

    switch (ctx->pc) {
        case 0x17eeb8u: goto label_17eeb8;
        case 0x17eef0u: goto label_17eef0;
        case 0x17ef00u: goto label_17ef00;
        default: break;
    }

    ctx->pc = 0x17ee88u;

    // 0x17ee88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17ee88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17ee8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17ee8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17ee90: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17ee90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17ee94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17ee94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17ee98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17ee9c: 0x96220014  lhu         $v0, 0x14($s1)
    ctx->pc = 0x17ee9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x17eea0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x17EEA0u;
    {
        const bool branch_taken_0x17eea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EEA0u;
        // 0x17eea4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eea0) {
            ctx->pc = 0x17EF08u;
            goto label_17ef08;
        }
    }
    ctx->pc = 0x17EEA8u;
    // 0x17eea8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x17eea8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x17eeac: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x17eeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17eeb0: 0xc060a30  jal         func_1828C0
    ctx->pc = 0x17EEB0u;
    SET_GPR_U32(ctx, 31, 0x17EEB8u);
    ctx->pc = 0x17EEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EEB0u;
    // 0x17eeb4: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828C0u, 0x17EEB0u, 0x17EEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EEB8u;
label_17eeb8:
    // 0x17eeb8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x17eeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17eebc: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x17eebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    // 0x17eec0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x17eec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x17eec4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x17eec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17eec8: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x17eec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
    // 0x17eecc: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x17eeccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x17eed0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17eed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17eed4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17eed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17eed8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x17eed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17eedc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17eedcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eee0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17eee0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eee4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x17eee4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17eee8: 0xc062bb0  jal         func_18AEC0
    ctx->pc = 0x17EEE8u;
    SET_GPR_U32(ctx, 31, 0x17EEF0u);
    ctx->pc = 0x17EEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EEE8u;
    // 0x17eeec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x17EEE8u, 0x17EEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EEF0u;
label_17eef0:
    // 0x17eef0: 0xa6220014  sh          $v0, 0x14($s1)
    ctx->pc = 0x17eef0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x17eef4: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x17eef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    // 0x17eef8: 0xc0616ac  jal         func_185AB0
    ctx->pc = 0x17EEF8u;
    SET_GPR_U32(ctx, 31, 0x17EF00u);
    ctx->pc = 0x17EEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EEF8u;
    // 0x17eefc: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x17EEF8u, 0x17EF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EF00u;
label_17ef00:
    // 0x17ef00: 0x96220014  lhu         $v0, 0x14($s1)
    ctx->pc = 0x17ef00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x17ef04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17ef04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17ef08:
    // 0x17ef08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17ef08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ef0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17ef0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ef10: 0x3e00008  jr          $ra
    ctx->pc = 0x17EF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF10u;
        // 0x17ef14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EF18u;
    // 0x17ef18: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x17ef18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17ef1c: 0x0  nop
    ctx->pc = 0x17ef1cu;
    // NOP
    ctx->pc = 0x17ef20u;
}
