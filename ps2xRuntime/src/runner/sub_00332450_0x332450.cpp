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

// Function: sub_00332450
// Address: 0x332450 - 0x332500
void sub_00332450_0x332450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332450_0x332450");
#endif

    switch (ctx->pc) {
        case 0x33247cu: goto label_33247c;
        case 0x3324a0u: goto label_3324a0;
        case 0x3324c0u: goto label_3324c0;
        case 0x3324dcu: goto label_3324dc;
        default: break;
    }

    ctx->pc = 0x332450u;

    // 0x332450: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x332450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x332454: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x332454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x332458: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x332458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33245c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33245cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332460: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x332460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x332464: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x332464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332468: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x332468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x33246c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x33246cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x332470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x332474: 0xc0cc8f6  jal         func_3323D8
    ctx->pc = 0x332474u;
    SET_GPR_U32(ctx, 31, 0x33247Cu);
    ctx->pc = 0x332478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332474u;
    // 0x332478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3323D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3323D8u, 0x332474u, 0x33247Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33247Cu;
label_33247c:
    // 0x33247c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33247cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332480: 0x2a02000f  slti        $v0, $s0, 0xF
    ctx->pc = 0x332480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x332484: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x332484u;
    {
        const bool branch_taken_0x332484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x332488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332484u;
        // 0x332488: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332484) {
            ctx->pc = 0x3324A4u;
            goto label_3324a4;
        }
    }
    ctx->pc = 0x33248Cu;
    // 0x33248c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x33248cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x332490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x332490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332494: 0x24a564a8  addiu       $a1, $a1, 0x64A8
    ctx->pc = 0x332494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25768));
    // 0x332498: 0xc0cb28a  jal         func_32CA28
    ctx->pc = 0x332498u;
    SET_GPR_U32(ctx, 31, 0x3324A0u);
    ctx->pc = 0x33249Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332498u;
    // 0x33249c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CA28u, 0x332498u, 0x3324A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3324A0u;
label_3324a0:
    // 0x3324a0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3324a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3324a4:
    // 0x3324a4: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3324A4u;
    {
        const bool branch_taken_0x3324a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3324A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3324A4u;
        // 0x3324a8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3324a4) {
            ctx->pc = 0x3324C0u;
            goto label_3324c0;
        }
    }
    ctx->pc = 0x3324ACu;
    // 0x3324ac: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3324ACu;
    {
        const bool branch_taken_0x3324ac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3324B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3324ACu;
        // 0x3324b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3324ac) {
            ctx->pc = 0x3324C0u;
            goto label_3324c0;
        }
    }
    ctx->pc = 0x3324B4u;
    // 0x3324b4: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x3324b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x3324b8: 0xc0cb28a  jal         func_32CA28
    ctx->pc = 0x3324B8u;
    SET_GPR_U32(ctx, 31, 0x3324C0u);
    ctx->pc = 0x3324BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3324B8u;
    // 0x3324bc: 0x24a564c8  addiu       $a1, $a1, 0x64C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CA28u, 0x3324B8u, 0x3324C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3324C0u;
label_3324c0:
    // 0x3324c0: 0x6010007  bgez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3324C0u;
    {
        const bool branch_taken_0x3324c0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3324C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3324C0u;
        // 0x3324c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3324c0) {
            ctx->pc = 0x3324E0u;
            goto label_3324e0;
        }
    }
    ctx->pc = 0x3324C8u;
    // 0x3324c8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x3324c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x3324cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3324ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3324d0: 0x24a564f0  addiu       $a1, $a1, 0x64F0
    ctx->pc = 0x3324d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
    // 0x3324d4: 0xc0cb28a  jal         func_32CA28
    ctx->pc = 0x3324D4u;
    SET_GPR_U32(ctx, 31, 0x3324DCu);
    ctx->pc = 0x3324D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3324D4u;
    // 0x3324d8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CA28u, 0x3324D4u, 0x3324DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3324DCu;
label_3324dc:
    // 0x3324dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3324dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3324e0:
    // 0x3324e0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3324e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3324e4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3324e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3324e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3324e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3324ec: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3324ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3324f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3324f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3324f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3324F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3324F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3324F4u;
        // 0x3324f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3324F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3324FCu;
    // 0x3324fc: 0x0  nop
    ctx->pc = 0x3324fcu;
    // NOP
    ctx->pc = 0x332500u;
}
