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

// Function: sub_001599A8
// Address: 0x1599a8 - 0x159a38
void sub_001599A8_0x1599a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001599A8_0x1599a8");
#endif

    switch (ctx->pc) {
        case 0x1599d8u: goto label_1599d8;
        case 0x1599ecu: goto label_1599ec;
        default: break;
    }

    ctx->pc = 0x1599a8u;

    // 0x1599a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1599a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1599ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1599acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1599b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1599b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1599b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1599b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1599b8: 0x14a2001a  bne         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1599B8u;
    {
        const bool branch_taken_0x1599b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1599BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599B8u;
        // 0x1599bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1599b8) {
            ctx->pc = 0x159A24u;
            goto label_159a24;
        }
    }
    ctx->pc = 0x1599C0u;
    // 0x1599c0: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1599C0u;
    {
        const bool branch_taken_0x1599c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1599C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599C0u;
        // 0x1599c4: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1599c0) {
            ctx->pc = 0x159A24u;
            goto label_159a24;
        }
    }
    ctx->pc = 0x1599C8u;
    // 0x1599c8: 0x261056f0  addiu       $s0, $s0, 0x56F0
    ctx->pc = 0x1599c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22256));
    // 0x1599cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1599ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1599d0: 0xc0557b6  jal         func_155ED8
    ctx->pc = 0x1599D0u;
    SET_GPR_U32(ctx, 31, 0x1599D8u);
    ctx->pc = 0x1599D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1599D0u;
    // 0x1599d4: 0x26110020  addiu       $s1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155ED8u, 0x1599D0u, 0x1599D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1599D8u;
label_1599d8:
    // 0x1599d8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1599d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1599dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1599dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1599e0: 0x246384c8  addiu       $v1, $v1, -0x7B38
    ctx->pc = 0x1599e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935752));
    // 0x1599e4: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1599E4u;
    SET_GPR_U32(ctx, 31, 0x1599ECu);
    ctx->pc = 0x1599E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1599E4u;
    // 0x1599e8: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1599E4u, 0x1599ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1599ECu;
label_1599ec:
    // 0x1599ec: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1599ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1599f0: 0x26050060  addiu       $a1, $s0, 0x60
    ctx->pc = 0x1599f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1599f4: 0x24638510  addiu       $v1, $v1, -0x7AF0
    ctx->pc = 0x1599f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935824));
    // 0x1599f8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1599f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1599fc: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x1599fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x159a00: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x159a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
    // 0x159a04: 0x2442ee98  addiu       $v0, $v0, -0x1168
    ctx->pc = 0x159a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962840));
    // 0x159a08: 0x2484eec0  addiu       $a0, $a0, -0x1140
    ctx->pc = 0x159a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962880));
    // 0x159a0c: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x159a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
    // 0x159a10: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x159a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x159a14: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x159a14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x159a18: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x159a18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x159a1c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x159a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x159a20: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x159a20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_159a24:
    // 0x159a24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x159a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159a28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x159a28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159a2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159a30: 0x3e00008  jr          $ra
    ctx->pc = 0x159A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A30u;
        // 0x159a34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159A38u;
}
