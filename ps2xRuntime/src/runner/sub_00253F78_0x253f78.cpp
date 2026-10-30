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

// Function: sub_00253F78
// Address: 0x253f78 - 0x254060
void sub_00253F78_0x253f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253F78_0x253f78");
#endif

    switch (ctx->pc) {
        case 0x253fa8u: goto label_253fa8;
        case 0x253ff8u: goto label_253ff8;
        case 0x254020u: goto label_254020;
        default: break;
    }

    ctx->pc = 0x253f78u;

    // 0x253f78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x253f7c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x253f7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253f80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x253f84: 0x8d2700d4  lw          $a3, 0xD4($t1)
    ctx->pc = 0x253f84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 212)));
    // 0x253f88: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x253f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x253f8c: 0x460000c  bltz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x253F8Cu;
    {
        const bool branch_taken_0x253f8c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x253F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F8Cu;
        // 0x253f90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f8c) {
            ctx->pc = 0x253FC0u;
            goto label_253fc0;
        }
    }
    ctx->pc = 0x253F94u;
    // 0x253f94: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x253f94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x253f98: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x253F98u;
    {
        const bool branch_taken_0x253f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x253F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F98u;
        // 0x253f9c: 0x24e40010  addiu       $a0, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f98) {
            ctx->pc = 0x253FC0u;
            goto label_253fc0;
        }
    }
    ctx->pc = 0x253FA0u;
    // 0x253fa0: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x253fa0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253fa4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x253fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_253fa8:
    // 0x253fa8: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x253fa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x253fac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x253FACu;
    {
        const bool branch_taken_0x253fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FACu;
        // 0x253fb0: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253fac) {
            ctx->pc = 0x253FC0u;
            goto label_253fc0;
        }
    }
    ctx->pc = 0x253FB4u;
    // 0x253fb4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x253fb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253fb8: 0x5465fffb  bnel        $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x253FB8u;
    {
        const bool branch_taken_0x253fb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x253fb8) {
            ctx->pc = 0x253FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253FB8u;
            // 0x253fbc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253fa8;
        }
    }
    ctx->pc = 0x253FC0u;
label_253fc0:
    // 0x253fc0: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x253fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x253fc4: 0x14c4000e  bne         $a2, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x253FC4u;
    {
        const bool branch_taken_0x253fc4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x253FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FC4u;
        // 0x253fc8: 0x86102a  slt         $v0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x253fc4) {
            ctx->pc = 0x254000u;
            goto label_254000;
        }
    }
    ctx->pc = 0x253FCCu;
    // 0x253fcc: 0x18c00004  blez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x253FCCu;
    {
        const bool branch_taken_0x253fcc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x253FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FCCu;
        // 0x253fd0: 0xe61021  addu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253fcc) {
            ctx->pc = 0x253FE0u;
            goto label_253fe0;
        }
    }
    ctx->pc = 0x253FD4u;
    // 0x253fd4: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x253fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x253fd8: 0xa0400010  sb          $zero, 0x10($v0)
    ctx->pc = 0x253fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x253fdc: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x253fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
label_253fe0:
    // 0x253fe0: 0x90e3000c  lbu         $v1, 0xC($a3)
    ctx->pc = 0x253fe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x253fe4: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x253fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253fe8: 0x8d2200d4  lw          $v0, 0xD4($t1)
    ctx->pc = 0x253fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 212)));
    // 0x253fec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x253fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x253ff0: 0xc094da2  jal         func_253688
    ctx->pc = 0x253FF0u;
    SET_GPR_U32(ctx, 31, 0x253FF8u);
    ctx->pc = 0x253FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253FF0u;
    // 0x253ff4: 0x90450010  lbu         $a1, 0x10($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253688u, 0x253FF0u, 0x253FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253FF8u;
label_253ff8:
    // 0x253ff8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x253FF8u;
    {
        const bool branch_taken_0x253ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FF8u;
        // 0x253ffc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253ff8) {
            ctx->pc = 0x254058u;
            goto label_254058;
        }
    }
    ctx->pc = 0x254000u;
label_254000:
    // 0x254000: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x254000u;
    {
        const bool branch_taken_0x254000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254000u;
        // 0x254004: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254000) {
            ctx->pc = 0x254058u;
            goto label_254058;
        }
    }
    ctx->pc = 0x254008u;
    // 0x254008: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x254008u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25400c: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x25400cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x254010: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x254010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x254014: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x254014u;
    {
        const bool branch_taken_0x254014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254014u;
        // 0x254018: 0x24e50010  addiu       $a1, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254014) {
            ctx->pc = 0x254040u;
            goto label_254040;
        }
    }
    ctx->pc = 0x25401Cu;
    // 0x25401c: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x25401cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_254020:
    // 0x254020: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x254020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x254024: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x254024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x254028: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x254028u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x25402c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x25402cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x254030: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x254030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x254034: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x254034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x254038: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x254038u;
    {
        const bool branch_taken_0x254038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254038u;
        // 0x25403c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254038) {
            ctx->pc = 0x254020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254020;
        }
    }
    ctx->pc = 0x254040u;
label_254040:
    // 0x254040: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x254040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x254044: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x254044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x254048: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x254048u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x25404c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25404cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x254050: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x254050u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x254054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_254058:
    // 0x254058: 0x3e00008  jr          $ra
    ctx->pc = 0x254058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254058u;
        // 0x25405c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254060u;
}
