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

// Function: sub_004B7078
// Address: 0x4b7078 - 0x4b7110
void sub_004B7078_0x4b7078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7078_0x4b7078");
#endif

    switch (ctx->pc) {
        case 0x4b7078u: goto label_4b7078;
        case 0x4b707cu: goto label_4b707c;
        case 0x4b7080u: goto label_4b7080;
        case 0x4b7084u: goto label_4b7084;
        case 0x4b7088u: goto label_4b7088;
        case 0x4b708cu: goto label_4b708c;
        case 0x4b7090u: goto label_4b7090;
        case 0x4b7094u: goto label_4b7094;
        case 0x4b7098u: goto label_4b7098;
        case 0x4b709cu: goto label_4b709c;
        case 0x4b70a0u: goto label_4b70a0;
        case 0x4b70a4u: goto label_4b70a4;
        case 0x4b70a8u: goto label_4b70a8;
        case 0x4b70acu: goto label_4b70ac;
        case 0x4b70b0u: goto label_4b70b0;
        case 0x4b70b4u: goto label_4b70b4;
        case 0x4b70b8u: goto label_4b70b8;
        case 0x4b70bcu: goto label_4b70bc;
        case 0x4b70c0u: goto label_4b70c0;
        case 0x4b70c4u: goto label_4b70c4;
        case 0x4b70c8u: goto label_4b70c8;
        case 0x4b70ccu: goto label_4b70cc;
        case 0x4b70d0u: goto label_4b70d0;
        case 0x4b70d4u: goto label_4b70d4;
        case 0x4b70d8u: goto label_4b70d8;
        case 0x4b70dcu: goto label_4b70dc;
        case 0x4b70e0u: goto label_4b70e0;
        case 0x4b70e4u: goto label_4b70e4;
        case 0x4b70e8u: goto label_4b70e8;
        case 0x4b70ecu: goto label_4b70ec;
        case 0x4b70f0u: goto label_4b70f0;
        case 0x4b70f4u: goto label_4b70f4;
        case 0x4b70f8u: goto label_4b70f8;
        case 0x4b70fcu: goto label_4b70fc;
        case 0x4b7100u: goto label_4b7100;
        case 0x4b7104u: goto label_4b7104;
        case 0x4b7108u: goto label_4b7108;
        case 0x4b710cu: goto label_4b710c;
        default: break;
    }

    ctx->pc = 0x4b7078u;

label_4b7078:
    // 0x4b7078: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b7078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b707c:
    // 0x4b707c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b707cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_4b7080:
    // 0x4b7080: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b7080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b7084:
    // 0x4b7084: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b7084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b7088:
    // 0x4b7088: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b7088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4b708c:
    // 0x4b708c: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x4b708cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_4b7090:
    // 0x4b7090: 0x4410019  bgez        $v0, . + 4 + (0x19 << 2)
label_4b7094:
    if (ctx->pc == 0x4B7094u) {
        ctx->pc = 0x4B7094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7090u;
        // 0x4b7094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B7098u;
        goto label_4b7098;
    }
    ctx->pc = 0x4B7090u;
    {
        const bool branch_taken_0x4b7090 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B7094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7090u;
        // 0x4b7094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7090) {
            ctx->pc = 0x4B70F8u;
            goto label_4b70f8;
        }
    }
    ctx->pc = 0x4B7098u;
label_4b7098:
    // 0x4b7098: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4b7098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4b709c:
    // 0x4b709c: 0x2402fff3  addiu       $v0, $zero, -0xD
    ctx->pc = 0x4b709cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_4b70a0:
    // 0x4b70a0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x4b70a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4b70a4:
    // 0x4b70a4: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x4b70a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b70a8:
    // 0x4b70a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b70a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4b70ac:
    // 0x4b70ac: 0xae250038  sw          $a1, 0x38($s1)
    ctx->pc = 0x4b70acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
label_4b70b0:
    // 0x4b70b0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x4b70b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_4b70b4:
    // 0x4b70b4: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x4b70b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_4b70b8:
    // 0x4b70b8: 0xfe300040  sd          $s0, 0x40($s1)
    ctx->pc = 0x4b70b8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 16));
label_4b70bc:
    // 0x4b70bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b70bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b70c0:
    // 0x4b70c0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4b70c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4b70c4:
    // 0x4b70c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b70c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b70c8:
    // 0x4b70c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4b70c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b70cc:
    // 0x4b70cc: 0x40f809  jalr        $v0
label_4b70d0:
    if (ctx->pc == 0x4B70D0u) {
        ctx->pc = 0x4B70D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B70CCu;
        // 0x4b70d0: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B70D4u;
        goto label_4b70d4;
    }
    ctx->pc = 0x4B70CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B70D4u);
        ctx->pc = 0x4B70D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B70CCu;
        // 0x4b70d0: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B70CCu, 0x4B70D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B70D4u;
label_4b70d4:
    // 0x4b70d4: 0x54500008  bnel        $v0, $s0, . + 4 + (0x8 << 2)
label_4b70d8:
    if (ctx->pc == 0x4B70D8u) {
        ctx->pc = 0x4B70D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B70D4u;
        // 0x4b70d8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B70DCu;
        goto label_4b70dc;
    }
    ctx->pc = 0x4B70D4u;
    {
        const bool branch_taken_0x4b70d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x4b70d4) {
            ctx->pc = 0x4B70D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B70D4u;
            // 0x4b70d8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B70F8u;
            goto label_4b70f8;
        }
    }
    ctx->pc = 0x4B70DCu;
label_4b70dc:
    // 0x4b70dc: 0xc136270  jal         func_4D89C0
label_4b70e0:
    if (ctx->pc == 0x4B70E0u) {
        ctx->pc = 0x4B70E4u;
        goto label_4b70e4;
    }
    ctx->pc = 0x4B70DCu;
    SET_GPR_U32(ctx, 31, 0x4B70E4u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B70DCu, 0x4B70E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B70E4u;
label_4b70e4:
    // 0x4b70e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4b70e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4b70e8:
    // 0x4b70e8: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x4b70e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_4b70ec:
    // 0x4b70ec: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_4b70f0:
    if (ctx->pc == 0x4B70F0u) {
        ctx->pc = 0x4B70F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B70ECu;
        // 0x4b70f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B70F4u;
        goto label_4b70f4;
    }
    ctx->pc = 0x4B70ECu;
    {
        const bool branch_taken_0x4b70ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x4B70F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B70ECu;
        // 0x4b70f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b70ec) {
            ctx->pc = 0x4B70F8u;
            goto label_4b70f8;
        }
    }
    ctx->pc = 0x4B70F4u;
label_4b70f4:
    // 0x4b70f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b70f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b70f8:
    // 0x4b70f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b70f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b70fc:
    // 0x4b70fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b70fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b7100:
    // 0x4b7100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b7100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b7104:
    // 0x4b7104: 0x3e00008  jr          $ra
label_4b7108:
    if (ctx->pc == 0x4B7108u) {
        ctx->pc = 0x4B7108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7104u;
        // 0x4b7108: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B710Cu;
        goto label_4b710c;
    }
    ctx->pc = 0x4B7104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7104u;
        // 0x4b7108: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B7104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B710Cu;
label_4b710c:
    // 0x4b710c: 0x0  nop
    ctx->pc = 0x4b710cu;
    // NOP
    ctx->pc = 0x4b7110u;
}
