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

// Function: sub_004A7038
// Address: 0x4a7038 - 0x4a70a8
void sub_004A7038_0x4a7038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A7038_0x4a7038");
#endif

    switch (ctx->pc) {
        case 0x4a7088u: goto label_4a7088;
        case 0x4a7094u: goto label_4a7094;
        default: break;
    }

    ctx->pc = 0x4a7038u;

    // 0x4a7038: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a7038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a703c: 0x8f8587e0  lw          $a1, -0x7820($gp)
    ctx->pc = 0x4a703cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936544)));
    // 0x4a7040: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x4a7040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x4a7044: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x4a7044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x4a7048: 0x823024  and         $a2, $a0, $v0
    ctx->pc = 0x4a7048u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a704c: 0x8f8387e4  lw          $v1, -0x781C($gp)
    ctx->pc = 0x4a704cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936548)));
    // 0x4a7050: 0xa61023  subu        $v0, $a1, $a2
    ctx->pc = 0x4a7050u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4a7054: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a7054u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a7058: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a7058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a705c: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x4a705cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4a7060: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x4A7060u;
    {
        const bool branch_taken_0x4a7060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7060u;
        // 0x4a7064: 0xaf8287e0  sw          $v0, -0x7820($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7060) {
            ctx->pc = 0x4A7098u;
            goto label_4a7098;
        }
    }
    ctx->pc = 0x4A7068u;
    // 0x4a7068: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4a7068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4a706c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a706cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a7070: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4a7070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4a7074: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4a7074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4a7078: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4a7078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a707c: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x4a707cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    // 0x4a7080: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4A7080u;
    SET_GPR_U32(ctx, 31, 0x4A7088u);
    ctx->pc = 0x4A7084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7080u;
    // 0x4a7084: 0xaf8287e0  sw          $v0, -0x7820($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936544), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A7080u, 0x4A7088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7088u;
label_4a7088:
    // 0x4a7088: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a7088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a708c: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4A708Cu;
    SET_GPR_U32(ctx, 31, 0x4A7094u);
    ctx->pc = 0x4A7090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A708Cu;
    // 0x4a7090: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A708Cu, 0x4A7094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7094u;
label_4a7094:
    // 0x4a7094: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a7094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7098:
    // 0x4a7098: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a7098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a709c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A709Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A70A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A709Cu;
        // 0x4a70a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A709Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A70A4u;
    // 0x4a70a4: 0x0  nop
    ctx->pc = 0x4a70a4u;
    // NOP
    ctx->pc = 0x4a70a8u;
}
