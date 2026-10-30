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

// Function: sub_004A70A8
// Address: 0x4a70a8 - 0x4a7130
void sub_004A70A8_0x4a70a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A70A8_0x4a70a8");
#endif

    switch (ctx->pc) {
        case 0x4a7104u: goto label_4a7104;
        case 0x4a7110u: goto label_4a7110;
        default: break;
    }

    ctx->pc = 0x4a70a8u;

    // 0x4a70a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a70a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a70ac: 0x8f8587e4  lw          $a1, -0x781C($gp)
    ctx->pc = 0x4a70acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936548)));
    // 0x4a70b0: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x4a70b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x4a70b4: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x4a70b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x4a70b8: 0x823024  and         $a2, $a0, $v0
    ctx->pc = 0x4a70b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a70bc: 0x8f8387e0  lw          $v1, -0x7820($gp)
    ctx->pc = 0x4a70bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936544)));
    // 0x4a70c0: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x4a70c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4a70c4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a70c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a70c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a70c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a70cc: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x4a70ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a70d0: 0xaf8287e4  sw          $v0, -0x781C($gp)
    ctx->pc = 0x4a70d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936548), GPR_U32(ctx, 2));
    // 0x4a70d4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A70D4u;
    {
        const bool branch_taken_0x4a70d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A70D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A70D4u;
        // 0x4a70d8: 0x461023  subu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a70d4) {
            ctx->pc = 0x4A70E8u;
            goto label_4a70e8;
        }
    }
    ctx->pc = 0x4A70DCu;
    // 0x4a70dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4A70DCu;
    {
        const bool branch_taken_0x4a70dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A70E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A70DCu;
        // 0x4a70e0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a70dc) {
            ctx->pc = 0x4A7118u;
            goto label_4a7118;
        }
    }
    ctx->pc = 0x4A70E4u;
    // 0x4a70e4: 0x0  nop
    ctx->pc = 0x4a70e4u;
    // NOP
label_4a70e8:
    // 0x4a70e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a70e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a70ec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4a70ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4a70f0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4a70f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4a70f4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4a70f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a70f8: 0xaf8287e4  sw          $v0, -0x781C($gp)
    ctx->pc = 0x4a70f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936548), GPR_U32(ctx, 2));
    // 0x4a70fc: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4A70FCu;
    SET_GPR_U32(ctx, 31, 0x4A7104u);
    ctx->pc = 0x4A7100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A70FCu;
    // 0x4a7100: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A70FCu, 0x4A7104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7104u;
label_4a7104:
    // 0x4a7104: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a7104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7108: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4A7108u;
    SET_GPR_U32(ctx, 31, 0x4A7110u);
    ctx->pc = 0x4A710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7108u;
    // 0x4a710c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A7108u, 0x4A7110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7110u;
label_4a7110:
    // 0x4a7110: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a7110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7114: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a7114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a7118:
    // 0x4a7118: 0x3e00008  jr          $ra
    ctx->pc = 0x4A7118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7118u;
        // 0x4a711c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A7118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A7120u;
    // 0x4a7120: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x4a7120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4a7124: 0x0  nop
    ctx->pc = 0x4a7124u;
    // NOP
    // 0x4a7128: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4a7128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4a712c: 0x0  nop
    ctx->pc = 0x4a712cu;
    // NOP
    ctx->pc = 0x4a7130u;
}
