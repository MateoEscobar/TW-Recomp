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

// Function: sub_004DE358
// Address: 0x4de358 - 0x4de3d8
void sub_004DE358_0x4de358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DE358_0x4de358");
#endif

    switch (ctx->pc) {
        case 0x4de358u: goto label_4de358;
        case 0x4de35cu: goto label_4de35c;
        case 0x4de360u: goto label_4de360;
        case 0x4de364u: goto label_4de364;
        case 0x4de368u: goto label_4de368;
        case 0x4de36cu: goto label_4de36c;
        case 0x4de370u: goto label_4de370;
        case 0x4de374u: goto label_4de374;
        case 0x4de378u: goto label_4de378;
        case 0x4de37cu: goto label_4de37c;
        case 0x4de380u: goto label_4de380;
        case 0x4de384u: goto label_4de384;
        case 0x4de388u: goto label_4de388;
        case 0x4de38cu: goto label_4de38c;
        case 0x4de390u: goto label_4de390;
        case 0x4de394u: goto label_4de394;
        case 0x4de398u: goto label_4de398;
        case 0x4de39cu: goto label_4de39c;
        case 0x4de3a0u: goto label_4de3a0;
        case 0x4de3a4u: goto label_4de3a4;
        case 0x4de3a8u: goto label_4de3a8;
        case 0x4de3acu: goto label_4de3ac;
        case 0x4de3b0u: goto label_4de3b0;
        case 0x4de3b4u: goto label_4de3b4;
        case 0x4de3b8u: goto label_4de3b8;
        case 0x4de3bcu: goto label_4de3bc;
        case 0x4de3c0u: goto label_4de3c0;
        case 0x4de3c4u: goto label_4de3c4;
        case 0x4de3c8u: goto label_4de3c8;
        case 0x4de3ccu: goto label_4de3cc;
        case 0x4de3d0u: goto label_4de3d0;
        case 0x4de3d4u: goto label_4de3d4;
        default: break;
    }

    ctx->pc = 0x4de358u;

label_4de358:
    // 0x4de358: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4de358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4de35c:
    // 0x4de35c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4de35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4de360:
    // 0x4de360: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4de360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4de364:
    // 0x4de364: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4de364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4de368:
    // 0x4de368: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4de368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4de36c:
    // 0x4de36c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4de36cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4de370:
    // 0x4de370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4de370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4de374:
    // 0x4de374: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4de378:
    if (ctx->pc == 0x4DE378u) {
        ctx->pc = 0x4DE378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE374u;
        // 0x4de378: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE37Cu;
        goto label_4de37c;
    }
    ctx->pc = 0x4DE374u;
    {
        const bool branch_taken_0x4de374 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE374u;
        // 0x4de378: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de374) {
            ctx->pc = 0x4DE3BCu;
            goto label_4de3bc;
        }
    }
    ctx->pc = 0x4DE37Cu;
label_4de37c:
    // 0x4de37c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4de37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4de380:
    // 0x4de380: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4de380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4de384:
    // 0x4de384: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4de384u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4de388:
    // 0x4de388: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4de388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4de38c:
    // 0x4de38c: 0x60f809  jalr        $v1
label_4de390:
    if (ctx->pc == 0x4DE390u) {
        ctx->pc = 0x4DE390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE38Cu;
        // 0x4de390: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE394u;
        goto label_4de394;
    }
    ctx->pc = 0x4DE38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DE394u);
        ctx->pc = 0x4DE390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE38Cu;
        // 0x4de390: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE38Cu, 0x4DE394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DE394u;
label_4de394:
    // 0x4de394: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4de394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4de398:
    // 0x4de398: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4de398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4de39c:
    // 0x4de39c: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4de39cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4de3a0:
    // 0x4de3a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4de3a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4de3a4:
    // 0x4de3a4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4de3a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4de3a8:
    // 0x4de3a8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4de3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4de3ac:
    // 0x4de3ac: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4de3acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4de3b0:
    // 0x4de3b0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4de3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4de3b4:
    // 0x4de3b4: 0x60f809  jalr        $v1
label_4de3b8:
    if (ctx->pc == 0x4DE3B8u) {
        ctx->pc = 0x4DE3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE3B4u;
        // 0x4de3b8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE3BCu;
        goto label_4de3bc;
    }
    ctx->pc = 0x4DE3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DE3BCu);
        ctx->pc = 0x4DE3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE3B4u;
        // 0x4de3b8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE3B4u, 0x4DE3BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DE3BCu;
label_4de3bc:
    // 0x4de3bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4de3bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4de3c0:
    // 0x4de3c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4de3c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4de3c4:
    // 0x4de3c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4de3c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4de3c8:
    // 0x4de3c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4de3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4de3cc:
    // 0x4de3cc: 0x3e00008  jr          $ra
label_4de3d0:
    if (ctx->pc == 0x4DE3D0u) {
        ctx->pc = 0x4DE3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE3CCu;
        // 0x4de3d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE3D4u;
        goto label_4de3d4;
    }
    ctx->pc = 0x4DE3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE3CCu;
        // 0x4de3d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DE3D4u;
label_4de3d4:
    // 0x4de3d4: 0x0  nop
    ctx->pc = 0x4de3d4u;
    // NOP
    ctx->pc = 0x4de3d8u;
}
