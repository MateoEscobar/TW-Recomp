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

// Function: sub_00442CE0
// Address: 0x442ce0 - 0x442d70
void sub_00442CE0_0x442ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00442CE0_0x442ce0");
#endif

    switch (ctx->pc) {
        case 0x442cf8u: goto label_442cf8;
        case 0x442d08u: goto label_442d08;
        case 0x442d4cu: goto label_442d4c;
        default: break;
    }

    ctx->pc = 0x442ce0u;

    // 0x442ce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x442ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x442ce4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x442ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x442ce8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x442ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x442cec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x442cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442cf0: 0xc1109c2  jal         func_442708
    ctx->pc = 0x442CF0u;
    SET_GPR_U32(ctx, 31, 0x442CF8u);
    ctx->pc = 0x442CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x442CF0u;
    // 0x442cf4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442708u, 0x442CF0u, 0x442CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x442CF8u;
label_442cf8:
    // 0x442cf8: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x442CF8u;
    {
        const bool branch_taken_0x442cf8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x442CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442CF8u;
        // 0x442cfc: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442cf8) {
            ctx->pc = 0x442D5Cu;
            goto label_442d5c;
        }
    }
    ctx->pc = 0x442D00u;
    // 0x442d00: 0xc110a02  jal         func_442808
    ctx->pc = 0x442D00u;
    SET_GPR_U32(ctx, 31, 0x442D08u);
    ctx->pc = 0x442808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442808u, 0x442D00u, 0x442D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x442D08u;
label_442d08:
    // 0x442d08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x442D08u;
    {
        const bool branch_taken_0x442d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x442D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442D08u;
        // 0x442d0c: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442d08) {
            ctx->pc = 0x442D1Cu;
            goto label_442d1c;
        }
    }
    ctx->pc = 0x442D10u;
    // 0x442d10: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x442d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x442d14: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x442D14u;
    {
        const bool branch_taken_0x442d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x442D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442D14u;
        // 0x442d18: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x442d14) {
            ctx->pc = 0x442D5Cu;
            goto label_442d5c;
        }
    }
    ctx->pc = 0x442D1Cu;
label_442d1c:
    // 0x442d1c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x442d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x442d20: 0x260738c0  addiu       $a3, $s0, 0x38C0
    ctx->pc = 0x442d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 14528));
    // 0x442d24: 0xae1138c0  sw          $s1, 0x38C0($s0)
    ctx->pc = 0x442d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14528), GPR_U32(ctx, 17));
    // 0x442d28: 0x24843ac0  addiu       $a0, $a0, 0x3AC0
    ctx->pc = 0x442d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15040));
    // 0x442d2c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x442d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x442d30: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x442d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x442d34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x442d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442d38: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x442d38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x442d3c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x442d3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442d40: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x442d40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x442d44: 0xc11024e  jal         func_440938
    ctx->pc = 0x442D44u;
    SET_GPR_U32(ctx, 31, 0x442D4Cu);
    ctx->pc = 0x442D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x442D44u;
    // 0x442d48: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x440938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440938u, 0x442D44u, 0x442D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x442D4Cu;
label_442d4c:
    // 0x442d4c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x442D4Cu;
    {
        const bool branch_taken_0x442d4c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x442d4c) {
            ctx->pc = 0x442D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x442D4Cu;
            // 0x442d50: 0x8e0238c0  lw          $v0, 0x38C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14528)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x442D5Cu;
            goto label_442d5c;
        }
    }
    ctx->pc = 0x442D54u;
    // 0x442d54: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x442d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x442d58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x442d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_442d5c:
    // 0x442d5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x442d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x442d60: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x442d60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x442d64: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x442d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x442d68: 0x3e00008  jr          $ra
    ctx->pc = 0x442D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x442D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442D68u;
        // 0x442d6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x442D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x442D70u;
}
