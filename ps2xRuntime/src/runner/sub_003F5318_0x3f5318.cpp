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

// Function: sub_003F5318
// Address: 0x3f5318 - 0x3f53b0
void sub_003F5318_0x3f5318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5318_0x3f5318");
#endif

    switch (ctx->pc) {
        case 0x3f5340u: goto label_3f5340;
        case 0x3f534cu: goto label_3f534c;
        case 0x3f5364u: goto label_3f5364;
        case 0x3f537cu: goto label_3f537c;
        case 0x3f5390u: goto label_3f5390;
        default: break;
    }

    ctx->pc = 0x3f5318u;

    // 0x3f5318: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f5318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3f531c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3f531cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3f5320: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f5320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5324: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3f5324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3f5328: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f5328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3f532c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3f532cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3f5330: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3f5330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3f5334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f5334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f5338: 0xc0e4080  jal         func_390200
    ctx->pc = 0x3F5338u;
    SET_GPR_U32(ctx, 31, 0x3F5340u);
    ctx->pc = 0x3F533Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5338u;
    // 0x3f533c: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x3F5338u, 0x3F5340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5340u;
label_3f5340:
    // 0x3f5340: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f5340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5344: 0xc0e4080  jal         func_390200
    ctx->pc = 0x3F5344u;
    SET_GPR_U32(ctx, 31, 0x3F534Cu);
    ctx->pc = 0x3F5348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5344u;
    // 0x3f5348: 0x26240014  addiu       $a0, $s1, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x3F5344u, 0x3F534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F534Cu;
label_3f534c:
    // 0x3f534c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f534cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5350: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f5350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5354: 0x8e622c7c  lw          $v0, 0x2C7C($s3)
    ctx->pc = 0x3f5354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
    // 0x3f5358: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f5358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f535c: 0xc0e637e  jal         func_398DF8
    ctx->pc = 0x3F535Cu;
    SET_GPR_U32(ctx, 31, 0x3F5364u);
    ctx->pc = 0x3F5360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F535Cu;
    // 0x3f5360: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x3F535Cu, 0x3F5364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5364u;
label_3f5364:
    // 0x3f5364: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F5364u;
    {
        const bool branch_taken_0x3f5364 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5364u;
        // 0x3f5368: 0x8e622c7c  lw          $v0, 0x2C7C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5364) {
            ctx->pc = 0x3F537Cu;
            goto label_3f537c;
        }
    }
    ctx->pc = 0x3F536Cu;
    // 0x3f536c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f536cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5370: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f5370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f5374: 0xc0e637e  jal         func_398DF8
    ctx->pc = 0x3F5374u;
    SET_GPR_U32(ctx, 31, 0x3F537Cu);
    ctx->pc = 0x3F5378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5374u;
    // 0x3f5378: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x3F5374u, 0x3F537Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F537Cu;
label_3f537c:
    // 0x3f537c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f537cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f5380: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5384: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f5384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5388: 0xc0e942a  jal         func_3A50A8
    ctx->pc = 0x3F5388u;
    SET_GPR_U32(ctx, 31, 0x3F5390u);
    ctx->pc = 0x3F538Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5388u;
    // 0x3f538c: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50A8u, 0x3F5388u, 0x3F5390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5390u;
label_3f5390:
    // 0x3f5390: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3f5390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f5394: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3f5394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f5398: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f5398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f539c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3f539cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f53a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f53a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f53a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F53A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F53A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F53A4u;
        // 0x3f53a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F53A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F53ACu;
    // 0x3f53ac: 0x0  nop
    ctx->pc = 0x3f53acu;
    // NOP
    ctx->pc = 0x3f53b0u;
}
