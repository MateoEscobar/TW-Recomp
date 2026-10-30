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

// Function: sub_001B8278
// Address: 0x1b8278 - 0x1b8320
void sub_001B8278_0x1b8278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8278_0x1b8278");
#endif

    switch (ctx->pc) {
        case 0x1b8278u: goto label_1b8278;
        case 0x1b827cu: goto label_1b827c;
        case 0x1b8280u: goto label_1b8280;
        case 0x1b8284u: goto label_1b8284;
        case 0x1b8288u: goto label_1b8288;
        case 0x1b828cu: goto label_1b828c;
        case 0x1b8290u: goto label_1b8290;
        case 0x1b8294u: goto label_1b8294;
        case 0x1b8298u: goto label_1b8298;
        case 0x1b829cu: goto label_1b829c;
        case 0x1b82a0u: goto label_1b82a0;
        case 0x1b82a4u: goto label_1b82a4;
        case 0x1b82a8u: goto label_1b82a8;
        case 0x1b82acu: goto label_1b82ac;
        case 0x1b82b0u: goto label_1b82b0;
        case 0x1b82b4u: goto label_1b82b4;
        case 0x1b82b8u: goto label_1b82b8;
        case 0x1b82bcu: goto label_1b82bc;
        case 0x1b82c0u: goto label_1b82c0;
        case 0x1b82c4u: goto label_1b82c4;
        case 0x1b82c8u: goto label_1b82c8;
        case 0x1b82ccu: goto label_1b82cc;
        case 0x1b82d0u: goto label_1b82d0;
        case 0x1b82d4u: goto label_1b82d4;
        case 0x1b82d8u: goto label_1b82d8;
        case 0x1b82dcu: goto label_1b82dc;
        case 0x1b82e0u: goto label_1b82e0;
        case 0x1b82e4u: goto label_1b82e4;
        case 0x1b82e8u: goto label_1b82e8;
        case 0x1b82ecu: goto label_1b82ec;
        case 0x1b82f0u: goto label_1b82f0;
        case 0x1b82f4u: goto label_1b82f4;
        case 0x1b82f8u: goto label_1b82f8;
        case 0x1b82fcu: goto label_1b82fc;
        case 0x1b8300u: goto label_1b8300;
        case 0x1b8304u: goto label_1b8304;
        case 0x1b8308u: goto label_1b8308;
        case 0x1b830cu: goto label_1b830c;
        case 0x1b8310u: goto label_1b8310;
        case 0x1b8314u: goto label_1b8314;
        case 0x1b8318u: goto label_1b8318;
        case 0x1b831cu: goto label_1b831c;
        default: break;
    }

    ctx->pc = 0x1b8278u;

label_1b8278:
    // 0x1b8278: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b8278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b827c:
    // 0x1b827c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b827cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b8280:
    // 0x1b8280: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b8280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1b8284:
    // 0x1b8284: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b8284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b8288:
    // 0x1b8288: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b8288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1b828c:
    // 0x1b828c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b828cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1b8290:
    // 0x1b8290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b8294:
    // 0x1b8294: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1b8294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1b8298:
    // 0x1b8298: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1b829c:
    if (ctx->pc == 0x1B829Cu) {
        ctx->pc = 0x1B829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8298u;
        // 0x1b829c: 0x26500040  addiu       $s0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B82A0u;
        goto label_1b82a0;
    }
    ctx->pc = 0x1B8298u;
    {
        const bool branch_taken_0x1b8298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8298u;
        // 0x1b829c: 0x26500040  addiu       $s0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8298) {
            ctx->pc = 0x1B8304u;
            goto label_1b8304;
        }
    }
    ctx->pc = 0x1B82A0u;
label_1b82a0:
    // 0x1b82a0: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1b82a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b82a4:
    // 0x1b82a4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1b82a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b82a8:
    // 0x1b82a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b82a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b82ac:
    // 0x1b82ac: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1b82acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_1b82b0:
    // 0x1b82b0: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1b82b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1b82b4:
    // 0x1b82b4: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1b82b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1b82b8:
    // 0x1b82b8: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1b82b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1b82bc:
    // 0x1b82bc: 0x60f809  jalr        $v1
label_1b82c0:
    if (ctx->pc == 0x1B82C0u) {
        ctx->pc = 0x1B82C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82BCu;
        // 0x1b82c0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B82C4u;
        goto label_1b82c4;
    }
    ctx->pc = 0x1B82BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B82C4u);
        ctx->pc = 0x1B82C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82BCu;
        // 0x1b82c0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B82BCu, 0x1B82C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B82C4u;
label_1b82c4:
    // 0x1b82c4: 0x661fff8  bgez        $s3, . + 4 + (-0x8 << 2)
label_1b82c8:
    if (ctx->pc == 0x1B82C8u) {
        ctx->pc = 0x1B82C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82C4u;
        // 0x1b82c8: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B82CCu;
        goto label_1b82cc;
    }
    ctx->pc = 0x1B82C4u;
    {
        const bool branch_taken_0x1b82c4 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1B82C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82C4u;
        // 0x1b82c8: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b82c4) {
            ctx->pc = 0x1B82A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b82a8;
        }
    }
    ctx->pc = 0x1B82CCu;
label_1b82cc:
    // 0x1b82cc: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x1b82ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
label_1b82d0:
    // 0x1b82d0: 0x8e45046c  lw          $a1, 0x46C($s2)
    ctx->pc = 0x1b82d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1132)));
label_1b82d4:
    // 0x1b82d4: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x1b82d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
label_1b82d8:
    // 0x1b82d8: 0x10b00008  beq         $a1, $s0, . + 4 + (0x8 << 2)
label_1b82dc:
    if (ctx->pc == 0x1B82DCu) {
        ctx->pc = 0x1B82DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82D8u;
        // 0x1b82dc: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B82E0u;
        goto label_1b82e0;
    }
    ctx->pc = 0x1B82D8u;
    {
        const bool branch_taken_0x1b82d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        ctx->pc = 0x1B82DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82D8u;
        // 0x1b82dc: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b82d8) {
            ctx->pc = 0x1B82FCu;
            goto label_1b82fc;
        }
    }
    ctx->pc = 0x1B82E0u;
label_1b82e0:
    // 0x1b82e0: 0xc0616ac  jal         func_185AB0
label_1b82e4:
    if (ctx->pc == 0x1B82E4u) {
        ctx->pc = 0x1B82E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82E0u;
        // 0x1b82e4: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B82E8u;
        goto label_1b82e8;
    }
    ctx->pc = 0x1B82E0u;
    SET_GPR_U32(ctx, 31, 0x1B82E8u);
    ctx->pc = 0x1B82E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B82E0u;
    // 0x1b82e4: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1B82E0u, 0x1B82E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B82E8u;
label_1b82e8:
    // 0x1b82e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b82ec:
    if (ctx->pc == 0x1B82ECu) {
        ctx->pc = 0x1B82ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82E8u;
        // 0x1b82ec: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B82F0u;
        goto label_1b82f0;
    }
    ctx->pc = 0x1B82E8u;
    {
        const bool branch_taken_0x1b82e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B82ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82E8u;
        // 0x1b82ec: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b82e8) {
            ctx->pc = 0x1B82F8u;
            goto label_1b82f8;
        }
    }
    ctx->pc = 0x1B82F0u;
label_1b82f0:
    // 0x1b82f0: 0xc062be2  jal         func_18AF88
label_1b82f4:
    if (ctx->pc == 0x1B82F4u) {
        ctx->pc = 0x1B82F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82F0u;
        // 0x1b82f4: 0x9645046c  lhu         $a1, 0x46C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B82F8u;
        goto label_1b82f8;
    }
    ctx->pc = 0x1B82F0u;
    SET_GPR_U32(ctx, 31, 0x1B82F8u);
    ctx->pc = 0x1B82F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B82F0u;
    // 0x1b82f4: 0x9645046c  lhu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AF88u, 0x1B82F0u, 0x1B82F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B82F8u;
label_1b82f8:
    // 0x1b82f8: 0xae50046c  sw          $s0, 0x46C($s2)
    ctx->pc = 0x1b82f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1132), GPR_U32(ctx, 16));
label_1b82fc:
    // 0x1b82fc: 0xae400478  sw          $zero, 0x478($s2)
    ctx->pc = 0x1b82fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1144), GPR_U32(ctx, 0));
label_1b8300:
    // 0x1b8300: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1b8300u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_1b8304:
    // 0x1b8304: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b8304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b8308:
    // 0x1b8308: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b8308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b830c:
    // 0x1b830c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b830cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b8310:
    // 0x1b8310: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b8310u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b8314:
    // 0x1b8314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b8318:
    // 0x1b8318: 0x3e00008  jr          $ra
label_1b831c:
    if (ctx->pc == 0x1B831Cu) {
        ctx->pc = 0x1B831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8318u;
        // 0x1b831c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8320u;
        goto label_fallthrough_0x1b8318;
    }
    ctx->pc = 0x1B8318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8318u;
        // 0x1b831c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b8318:
    ctx->pc = 0x1B8320u;
}
