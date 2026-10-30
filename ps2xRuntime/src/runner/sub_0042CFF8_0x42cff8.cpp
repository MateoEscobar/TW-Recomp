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

// Function: sub_0042CFF8
// Address: 0x42cff8 - 0x42d078
void sub_0042CFF8_0x42cff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042CFF8_0x42cff8");
#endif

    switch (ctx->pc) {
        case 0x42d01cu: goto label_42d01c;
        case 0x42d030u: goto label_42d030;
        case 0x42d05cu: goto label_42d05c;
        default: break;
    }

    ctx->pc = 0x42cff8u;

    // 0x42cff8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x42cff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x42cffc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x42cffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x42d000: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x42d000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x42d004: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42d004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d008: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x42d008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d00c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x42d00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x42d010: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x42d010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x42d014: 0xc10b3dc  jal         func_42CF70
    ctx->pc = 0x42D014u;
    SET_GPR_U32(ctx, 31, 0x42D01Cu);
    ctx->pc = 0x42D018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42D014u;
    // 0x42d018: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42CF70u, 0x42D014u, 0x42D01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D01Cu;
label_42d01c:
    // 0x42d01c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x42d01cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d020: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x42d020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d024: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42d024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d028: 0xc10b3dc  jal         func_42CF70
    ctx->pc = 0x42D028u;
    SET_GPR_U32(ctx, 31, 0x42D030u);
    ctx->pc = 0x42D02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42D028u;
    // 0x42d02c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42CF70u, 0x42D028u, 0x42D030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D030u;
label_42d030:
    // 0x42d030: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42d030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42d034: 0x2a22001f  slti        $v0, $s1, 0x1F
    ctx->pc = 0x42d034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x42d038: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x42D038u;
    {
        const bool branch_taken_0x42d038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42d038) {
            ctx->pc = 0x42D03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42D038u;
            // 0x42d03c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42D054u;
            goto label_42d054;
        }
    }
    ctx->pc = 0x42D040u;
    // 0x42d040: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x42d040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x42d044: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x42d044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x42d048: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x42d048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x42d04c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x42d04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x42d050: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x42d050u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_42d054:
    // 0x42d054: 0xc10c190  jal         func_430640
    ctx->pc = 0x42D054u;
    SET_GPR_U32(ctx, 31, 0x42D05Cu);
    ctx->pc = 0x42D058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42D054u;
    // 0x42d058: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x42D054u, 0x42D05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D05Cu;
label_42d05c:
    // 0x42d05c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x42d05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x42d060: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x42d060u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42d064: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x42d064u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42d068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42d068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42d06c: 0x3e00008  jr          $ra
    ctx->pc = 0x42D06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D06Cu;
        // 0x42d070: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42D06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42D074u;
    // 0x42d074: 0x0  nop
    ctx->pc = 0x42d074u;
    // NOP
    ctx->pc = 0x42d078u;
}
