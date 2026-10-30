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

// Function: sub_004151C0
// Address: 0x4151c0 - 0x415288
void sub_004151C0_0x4151c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004151C0_0x4151c0");
#endif

    switch (ctx->pc) {
        case 0x4151e4u: goto label_4151e4;
        case 0x415208u: goto label_415208;
        case 0x41523cu: goto label_41523c;
        case 0x415248u: goto label_415248;
        case 0x415254u: goto label_415254;
        default: break;
    }

    ctx->pc = 0x4151c0u;

    // 0x4151c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4151c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4151c4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4151c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4151c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4151c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4151cc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4151ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4151d0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4151d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4151d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4151d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4151d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4151d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4151dc: 0xc1049f0  jal         func_4127C0
    ctx->pc = 0x4151DCu;
    SET_GPR_U32(ctx, 31, 0x4151E4u);
    ctx->pc = 0x4151E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4151DCu;
    // 0x4151e0: 0x3c13006f  lui         $s3, 0x6F (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4127C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4127C0u, 0x4151DCu, 0x4151E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4151E4u;
label_4151e4:
    // 0x4151e4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4151e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4151e8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4151e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4151ec: 0x24425df8  addiu       $v0, $v0, 0x5DF8
    ctx->pc = 0x4151ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24056));
    // 0x4151f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4151f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4151f4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4151f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4151f8: 0x26230070  addiu       $v1, $s1, 0x70
    ctx->pc = 0x4151f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x4151fc: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x4151fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x415200: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x415200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x415204: 0x0  nop
    ctx->pc = 0x415204u;
    // NOP
label_415208:
    // 0x415208: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x415208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x41520c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x41520cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x415210: 0x0  nop
    ctx->pc = 0x415210u;
    // NOP
    // 0x415214: 0x0  nop
    ctx->pc = 0x415214u;
    // NOP
    // 0x415218: 0x1445fffb  bne         $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x415218u;
    {
        const bool branch_taken_0x415218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x41521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415218u;
        // 0x41521c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415218) {
            ctx->pc = 0x415208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_415208;
        }
    }
    ctx->pc = 0x415220u;
    // 0x415220: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x415220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x415224: 0x26240160  addiu       $a0, $s1, 0x160
    ctx->pc = 0x415224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x415228: 0x24424b98  addiu       $v0, $v0, 0x4B98
    ctx->pc = 0x415228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19352));
    // 0x41522c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41522cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415230: 0xae220160  sw          $v0, 0x160($s1)
    ctx->pc = 0x415230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
    // 0x415234: 0xc0e1284  jal         func_384A10
    ctx->pc = 0x415234u;
    SET_GPR_U32(ctx, 31, 0x41523Cu);
    ctx->pc = 0x415238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415234u;
    // 0x415238: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384A10u, 0x415234u, 0x41523Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41523Cu;
label_41523c:
    // 0x41523c: 0x26320070  addiu       $s2, $s1, 0x70
    ctx->pc = 0x41523cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x415240: 0xae2001e0  sw          $zero, 0x1E0($s1)
    ctx->pc = 0x415240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 0));
    // 0x415244: 0x0  nop
    ctx->pc = 0x415244u;
    // NOP
label_415248:
    // 0x415248: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x415248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41524c: 0xc13d75c  jal         func_4F5D70
    ctx->pc = 0x41524Cu;
    SET_GPR_U32(ctx, 31, 0x415254u);
    ctx->pc = 0x415250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41524Cu;
    // 0x415250: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5D70u, 0x41524Cu, 0x415254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415254u;
label_415254:
    // 0x415254: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x415254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x415258: 0x8e63bd30  lw          $v1, -0x42D0($s3)
    ctx->pc = 0x415258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950192)));
    // 0x41525c: 0x2e04003c  sltiu       $a0, $s0, 0x3C
    ctx->pc = 0x41525cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x415260: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x415260u;
    {
        const bool branch_taken_0x415260 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x415264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415260u;
        // 0x415264: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415260) {
            ctx->pc = 0x415248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_415248;
        }
    }
    ctx->pc = 0x415268u;
    // 0x415268: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x415268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41526c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x41526cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x415270: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x415270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x415274: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x415274u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x415278: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x415278u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41527c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41527cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x415280: 0x3e00008  jr          $ra
    ctx->pc = 0x415280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415280u;
        // 0x415284: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415288u;
}
