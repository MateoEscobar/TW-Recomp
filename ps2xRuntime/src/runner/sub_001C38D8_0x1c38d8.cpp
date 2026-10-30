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

// Function: sub_001C38D8
// Address: 0x1c38d8 - 0x1c3978
void sub_001C38D8_0x1c38d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C38D8_0x1c38d8");
#endif

    switch (ctx->pc) {
        case 0x1c38fcu: goto label_1c38fc;
        case 0x1c3918u: goto label_1c3918;
        case 0x1c3924u: goto label_1c3924;
        case 0x1c393cu: goto label_1c393c;
        case 0x1c3950u: goto label_1c3950;
        default: break;
    }

    ctx->pc = 0x1c38d8u;

    // 0x1c38d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c38d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c38dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c38dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1c38e0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1c38e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1c38e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c38e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c38e8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c38e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1c38ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c38ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c38f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c38f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c38f4: 0xc070e5e  jal         func_1C3978
    ctx->pc = 0x1C38F4u;
    SET_GPR_U32(ctx, 31, 0x1C38FCu);
    ctx->pc = 0x1C38F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C38F4u;
    // 0x1c38f8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3978u, 0x1C38F4u, 0x1C38FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C38FCu;
label_1c38fc:
    // 0x1c38fc: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x1c38fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1c3900: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C3900u;
    {
        const bool branch_taken_0x1c3900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3900u;
        // 0x1c3904: 0x263000d0  addiu       $s0, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3900) {
            ctx->pc = 0x1C3930u;
            goto label_1c3930;
        }
    }
    ctx->pc = 0x1C3908u;
    // 0x1c3908: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3908u;
    {
        const bool branch_taken_0x1c3908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1C390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3908u;
        // 0x1c390c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3908) {
            ctx->pc = 0x1C3930u;
            goto label_1c3930;
        }
    }
    ctx->pc = 0x1C3910u;
    // 0x1c3910: 0x2610ffd0  addiu       $s0, $s0, -0x30
    ctx->pc = 0x1c3910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967248));
    // 0x1c3914: 0x0  nop
    ctx->pc = 0x1c3914u;
    // NOP
label_1c3918:
    // 0x1c3918: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c391c: 0xc06d804  jal         func_1B6010
    ctx->pc = 0x1C391Cu;
    SET_GPR_U32(ctx, 31, 0x1C3924u);
    ctx->pc = 0x1C3920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C391Cu;
    // 0x1c3920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6010u, 0x1C391Cu, 0x1C3924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3924u;
label_1c3924:
    // 0x1c3924: 0x0  nop
    ctx->pc = 0x1c3924u;
    // NOP
    // 0x1c3928: 0x1650fffb  bne         $s2, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C3928u;
    {
        const bool branch_taken_0x1c3928 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3928u;
        // 0x1c392c: 0x2610ffd0  addiu       $s0, $s0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3928) {
            ctx->pc = 0x1C3918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3918;
        }
    }
    ctx->pc = 0x1C3930u;
label_1c3930:
    // 0x1c3930: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1c3930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1c3934: 0xc06d804  jal         func_1B6010
    ctx->pc = 0x1C3934u;
    SET_GPR_U32(ctx, 31, 0x1C393Cu);
    ctx->pc = 0x1C3938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3934u;
    // 0x1c3938: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6010u, 0x1C3934u, 0x1C393Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C393Cu;
label_1c393c:
    // 0x1c393c: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1c393cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1c3940: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3940u;
    {
        const bool branch_taken_0x1c3940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3940u;
        // 0x1c3944: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3940) {
            ctx->pc = 0x1C3954u;
            goto label_1c3954;
        }
    }
    ctx->pc = 0x1C3948u;
    // 0x1c3948: 0xc10b208  jal         func_42C820
    ctx->pc = 0x1C3948u;
    SET_GPR_U32(ctx, 31, 0x1C3950u);
    ctx->pc = 0x1C394Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3948u;
    // 0x1c394c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x1C3948u, 0x1C3950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3950u;
label_1c3950:
    // 0x1c3950: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c3950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c3954:
    // 0x1c3954: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c3954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3958: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c3958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c395c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1c395cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c3960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3964: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3964u;
        // 0x1c3968: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C396Cu;
    // 0x1c396c: 0x0  nop
    ctx->pc = 0x1c396cu;
    // NOP
    // 0x1c3970: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1c3970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3974: 0x0  nop
    ctx->pc = 0x1c3974u;
    // NOP
    ctx->pc = 0x1c3978u;
}
