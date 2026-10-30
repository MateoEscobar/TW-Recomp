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

// Function: sub_004BF868
// Address: 0x4bf868 - 0x4bf940
void sub_004BF868_0x4bf868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BF868_0x4bf868");
#endif

    switch (ctx->pc) {
        case 0x4bf8a8u: goto label_4bf8a8;
        case 0x4bf8b4u: goto label_4bf8b4;
        default: break;
    }

    ctx->pc = 0x4bf868u;

    // 0x4bf868: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4bf868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4bf86c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4bf86cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf870: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BF870u;
    {
        const bool branch_taken_0x4bf870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF870u;
        // 0x4bf874: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf870) {
            ctx->pc = 0x4BF890u;
            goto label_4bf890;
        }
    }
    ctx->pc = 0x4BF878u;
    // 0x4bf878: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BF878u;
    {
        const bool branch_taken_0x4bf878 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf878) {
            ctx->pc = 0x4BF87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BF878u;
            // 0x4bf87c: 0x2402012a  addiu       $v0, $zero, 0x12A (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BF898u;
            goto label_4bf898;
        }
    }
    ctx->pc = 0x4BF880u;
    // 0x4bf880: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4bf880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bf884: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4bf884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4bf888: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4BF888u;
    {
        const bool branch_taken_0x4bf888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF888u;
        // 0x4bf88c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf888) {
            ctx->pc = 0x4BF8B8u;
            goto label_4bf8b8;
        }
    }
    ctx->pc = 0x4BF890u;
label_4bf890:
    // 0x4bf890: 0x2402012a  addiu       $v0, $zero, 0x12A
    ctx->pc = 0x4bf890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
    // 0x4bf894: 0x0  nop
    ctx->pc = 0x4bf894u;
    // NOP
label_4bf898:
    // 0x4bf898: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4bf898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4bf89c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4bf89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4bf8a0: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4BF8A0u;
    SET_GPR_U32(ctx, 31, 0x4BF8A8u);
    ctx->pc = 0x4BF8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF8A0u;
    // 0x4bf8a4: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4BF8A0u, 0x4BF8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF8A8u;
label_4bf8a8:
    // 0x4bf8a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4bf8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf8ac: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4BF8ACu;
    SET_GPR_U32(ctx, 31, 0x4BF8B4u);
    ctx->pc = 0x4BF8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF8ACu;
    // 0x4bf8b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4BF8ACu, 0x4BF8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF8B4u;
label_4bf8b4:
    // 0x4bf8b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4bf8b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bf8b8:
    // 0x4bf8b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bf8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bf8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4BF8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF8BCu;
        // 0x4bf8c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BF8C4u;
    // 0x4bf8c4: 0x0  nop
    ctx->pc = 0x4bf8c4u;
    // NOP
    // 0x4bf8c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4bf8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4bf8cc: 0x0  nop
    ctx->pc = 0x4bf8ccu;
    // NOP
    // 0x4bf8d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4bf8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4bf8d4: 0x0  nop
    ctx->pc = 0x4bf8d4u;
    // NOP
    // 0x4bf8d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4bf8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4bf8dc: 0x0  nop
    ctx->pc = 0x4bf8dcu;
    // NOP
    // 0x4bf8e0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4bf8e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4bf8e4: 0x0  nop
    ctx->pc = 0x4bf8e4u;
    // NOP
    // 0x4bf8e8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4bf8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x4bf8ec: 0x0  nop
    ctx->pc = 0x4bf8ecu;
    // NOP
    // 0x4bf8f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4bf8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4bf8f4: 0x0  nop
    ctx->pc = 0x4bf8f4u;
    // NOP
    // 0x4bf8f8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4bf8f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4bf8fc: 0x0  nop
    ctx->pc = 0x4bf8fcu;
    // NOP
    // 0x4bf900: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4bf900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x4bf904: 0x0  nop
    ctx->pc = 0x4bf904u;
    // NOP
    // 0x4bf908: 0xaf83c008  sw          $v1, -0x3FF8($gp)
    ctx->pc = 0x4bf908u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950920), GPR_U32(ctx, 3));
    // 0x4bf90c: 0x0  nop
    ctx->pc = 0x4bf90cu;
    // NOP
    // 0x4bf910: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x4bf910u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x4bf914: 0x0  nop
    ctx->pc = 0x4bf914u;
    // NOP
    // 0x4bf918: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4bf918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4bf91c: 0x0  nop
    ctx->pc = 0x4bf91cu;
    // NOP
    // 0x4bf920: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x4bf920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x4bf924: 0x0  nop
    ctx->pc = 0x4bf924u;
    // NOP
    // 0x4bf928: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x4bf928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x4bf92c: 0x0  nop
    ctx->pc = 0x4bf92cu;
    // NOP
    // 0x4bf930: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x4bf930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x4bf934: 0x0  nop
    ctx->pc = 0x4bf934u;
    // NOP
    // 0x4bf938: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4bf938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4bf93c: 0x0  nop
    ctx->pc = 0x4bf93cu;
    // NOP
    ctx->pc = 0x4bf940u;
}
