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

// Function: sub_00120038
// Address: 0x120038 - 0x1200e0
void sub_00120038_0x120038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120038_0x120038");
#endif

    switch (ctx->pc) {
        case 0x120038u: goto label_120038;
        case 0x12003cu: goto label_12003c;
        case 0x120040u: goto label_120040;
        case 0x120044u: goto label_120044;
        case 0x120048u: goto label_120048;
        case 0x12004cu: goto label_12004c;
        case 0x120050u: goto label_120050;
        case 0x120054u: goto label_120054;
        case 0x120058u: goto label_120058;
        case 0x12005cu: goto label_12005c;
        case 0x120060u: goto label_120060;
        case 0x120064u: goto label_120064;
        case 0x120068u: goto label_120068;
        case 0x12006cu: goto label_12006c;
        case 0x120070u: goto label_120070;
        case 0x120074u: goto label_120074;
        case 0x120078u: goto label_120078;
        case 0x12007cu: goto label_12007c;
        case 0x120080u: goto label_120080;
        case 0x120084u: goto label_120084;
        case 0x120088u: goto label_120088;
        case 0x12008cu: goto label_12008c;
        case 0x120090u: goto label_120090;
        case 0x120094u: goto label_120094;
        case 0x120098u: goto label_120098;
        case 0x12009cu: goto label_12009c;
        case 0x1200a0u: goto label_1200a0;
        case 0x1200a4u: goto label_1200a4;
        case 0x1200a8u: goto label_1200a8;
        case 0x1200acu: goto label_1200ac;
        case 0x1200b0u: goto label_1200b0;
        case 0x1200b4u: goto label_1200b4;
        case 0x1200b8u: goto label_1200b8;
        case 0x1200bcu: goto label_1200bc;
        case 0x1200c0u: goto label_1200c0;
        case 0x1200c4u: goto label_1200c4;
        case 0x1200c8u: goto label_1200c8;
        case 0x1200ccu: goto label_1200cc;
        case 0x1200d0u: goto label_1200d0;
        case 0x1200d4u: goto label_1200d4;
        case 0x1200d8u: goto label_1200d8;
        case 0x1200dcu: goto label_1200dc;
        default: break;
    }

    ctx->pc = 0x120038u;

label_120038:
    // 0x120038: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x120038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_12003c:
    // 0x12003c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x12003cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_120040:
    // 0x120040: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x120040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_120044:
    // 0x120044: 0x8c62b16c  lw          $v0, -0x4E94($v1)
    ctx->pc = 0x120044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947180)));
label_120048:
    // 0x120048: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x120048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_12004c:
    // 0x12004c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_120050:
    if (ctx->pc == 0x120050u) {
        ctx->pc = 0x120050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12004Cu;
        // 0x120050: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120054u;
        goto label_120054;
    }
    ctx->pc = 0x12004Cu;
    {
        const bool branch_taken_0x12004c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12004Cu;
        // 0x120050: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12004c) {
            ctx->pc = 0x1200C8u;
            goto label_1200c8;
        }
    }
    ctx->pc = 0x120054u;
label_120054:
    // 0x120054: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x120054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_120058:
    // 0x120058: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x120058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_12005c:
    // 0x12005c: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x12005cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_120060:
    // 0x120060: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x120060u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_120064:
    // 0x120064: 0x24060350  addiu       $a2, $zero, 0x350
    ctx->pc = 0x120064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 848));
label_120068:
    // 0x120068: 0x24a58708  addiu       $a1, $a1, -0x78F8
    ctx->pc = 0x120068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936328));
label_12006c:
    // 0x12006c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x12006cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_120070:
    // 0x120070: 0x25088550  addiu       $t0, $t0, -0x7AB0
    ctx->pc = 0x120070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935888));
label_120074:
    // 0x120074: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x120074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_120078:
    // 0x120078: 0x240904b6  addiu       $t1, $zero, 0x4B6
    ctx->pc = 0x120078u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1206));
label_12007c:
    // 0x12007c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x12007cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_120080:
    // 0x120080: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x120080u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120084:
    // 0x120084: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x120084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_120088:
    // 0x120088: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x120088u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12008c:
    // 0x12008c: 0x40f809  jalr        $v0
label_120090:
    if (ctx->pc == 0x120090u) {
        ctx->pc = 0x120090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12008Cu;
        // 0x120090: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120094u;
        goto label_120094;
    }
    ctx->pc = 0x12008Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x120094u);
        ctx->pc = 0x120090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12008Cu;
        // 0x120090: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12008Cu, 0x120094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x120094u;
label_120094:
    // 0x120094: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x120094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120098:
    // 0x120098: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
label_12009c:
    if (ctx->pc == 0x12009Cu) {
        ctx->pc = 0x12009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120098u;
        // 0x12009c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1200A0u;
        goto label_1200a0;
    }
    ctx->pc = 0x120098u;
    {
        const bool branch_taken_0x120098 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x120098) {
            ctx->pc = 0x12009Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120098u;
            // 0x12009c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1200B0u;
            goto label_1200b0;
        }
    }
    ctx->pc = 0x1200A0u;
label_1200a0:
    // 0x1200a0: 0xc050898  jal         func_142260
label_1200a4:
    if (ctx->pc == 0x1200A4u) {
        ctx->pc = 0x1200A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200A0u;
        // 0x1200a4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1200A8u;
        goto label_1200a8;
    }
    ctx->pc = 0x1200A0u;
    SET_GPR_U32(ctx, 31, 0x1200A8u);
    ctx->pc = 0x1200A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1200A0u;
    // 0x1200a4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142260u, 0x1200A0u, 0x1200A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1200A8u;
label_1200a8:
    // 0x1200a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1200a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1200ac:
    // 0x1200ac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1200acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1200b0:
    // 0x1200b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1200b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1200b4:
    // 0x1200b4: 0xae06b16c  sw          $a2, -0x4E94($s0)
    ctx->pc = 0x1200b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294947180), GPR_U32(ctx, 6));
label_1200b8:
    // 0x1200b8: 0x84440270  lh          $a0, 0x270($v0)
    ctx->pc = 0x1200b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 624)));
label_1200bc:
    // 0x1200bc: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x1200bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_1200c0:
    // 0x1200c0: 0x60f809  jalr        $v1
label_1200c4:
    if (ctx->pc == 0x1200C4u) {
        ctx->pc = 0x1200C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200C0u;
        // 0x1200c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1200C8u;
        goto label_1200c8;
    }
    ctx->pc = 0x1200C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1200C8u);
        ctx->pc = 0x1200C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200C0u;
        // 0x1200c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1200C0u, 0x1200C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1200C8u;
label_1200c8:
    // 0x1200c8: 0x8e02b16c  lw          $v0, -0x4E94($s0)
    ctx->pc = 0x1200c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947180)));
label_1200cc:
    // 0x1200cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1200ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1200d0:
    // 0x1200d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1200d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1200d4:
    // 0x1200d4: 0x3e00008  jr          $ra
label_1200d8:
    if (ctx->pc == 0x1200D8u) {
        ctx->pc = 0x1200D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200D4u;
        // 0x1200d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1200DCu;
        goto label_1200dc;
    }
    ctx->pc = 0x1200D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1200D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200D4u;
        // 0x1200d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1200D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1200DCu;
label_1200dc:
    // 0x1200dc: 0x0  nop
    ctx->pc = 0x1200dcu;
    // NOP
    ctx->pc = 0x1200e0u;
}
