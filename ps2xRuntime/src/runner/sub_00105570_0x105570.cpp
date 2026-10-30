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

// Function: sub_00105570
// Address: 0x105570 - 0x105640
void sub_00105570_0x105570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105570_0x105570");
#endif

    switch (ctx->pc) {
        case 0x1055c0u: goto label_1055c0;
        case 0x1055ccu: goto label_1055cc;
        case 0x1055f8u: goto label_1055f8;
        default: break;
    }

    ctx->pc = 0x105570u;

    // 0x105570: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x105570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x105574: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x105574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x105578: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x105578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x10557c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x10557cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x105580: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x105580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x105584: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x105584u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105588: 0x8c43a8b0  lw          $v1, -0x5750($v0)
    ctx->pc = 0x105588u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50A8B0u));
    // 0x10558c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x10558cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105590: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x105590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x105594: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x105594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x105598: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x105598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x10559c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10559cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1055a0: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1055A0u;
    {
        const bool branch_taken_0x1055a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1055A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1055A0u;
        // 0x1055a4: 0x8c85a8a8  lw          $a1, -0x5758($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1055a0) {
            ctx->pc = 0x10561Cu;
            goto label_10561c;
        }
    }
    ctx->pc = 0x1055A8u;
    // 0x1055a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1055a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1055ac: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1055acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x1055b0: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1055B0u;
    {
        const bool branch_taken_0x1055b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1055B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1055B0u;
        // 0x1055b4: 0xae82a8b0  sw          $v0, -0x5750($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294944944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1055b0) {
            ctx->pc = 0x105604u;
            goto label_105604;
        }
    }
    ctx->pc = 0x1055B8u;
    // 0x1055b8: 0x8cb00004  lw          $s0, 0x4($a1)
    ctx->pc = 0x1055b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1055bc: 0x0  nop
    ctx->pc = 0x1055bcu;
    // NOP
label_1055c0:
    // 0x1055c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1055c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055c4: 0xc041544  jal         func_105510
    ctx->pc = 0x1055C4u;
    SET_GPR_U32(ctx, 31, 0x1055CCu);
    ctx->pc = 0x1055C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1055C4u;
    // 0x1055c8: 0x8cb10008  lw          $s1, 0x8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105510u, 0x1055C4u, 0x1055CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1055CCu;
label_1055cc:
    // 0x1055cc: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1055CCu;
    {
        const bool branch_taken_0x1055cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1055D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1055CCu;
        // 0x1055d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1055cc) {
            ctx->pc = 0x1055FCu;
            goto label_1055fc;
        }
    }
    ctx->pc = 0x1055D4u;
    // 0x1055d4: 0x8e0502b8  lw          $a1, 0x2B8($s0)
    ctx->pc = 0x1055d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
    // 0x1055d8: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1055D8u;
    {
        const bool branch_taken_0x1055d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1055d8) {
            ctx->pc = 0x1055DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1055D8u;
            // 0x1055dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1055FCu;
            goto label_1055fc;
        }
    }
    ctx->pc = 0x1055E0u;
    // 0x1055e0: 0x8ca500d4  lw          $a1, 0xD4($a1)
    ctx->pc = 0x1055e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x1055e4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1055E4u;
    {
        const bool branch_taken_0x1055e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1055E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1055E4u;
        // 0x1055e8: 0x24a600c0  addiu       $a2, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1055e4) {
            ctx->pc = 0x1055F8u;
            goto label_1055f8;
        }
    }
    ctx->pc = 0x1055ECu;
    // 0x1055ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1055ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055f0: 0xc05d4b2  jal         func_1752C8
    ctx->pc = 0x1055F0u;
    SET_GPR_U32(ctx, 31, 0x1055F8u);
    ctx->pc = 0x1055F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1055F0u;
    // 0x1055f4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1752C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1752C8u, 0x1055F0u, 0x1055F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1055F8u;
label_1055f8:
    // 0x1055f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1055f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1055fc:
    // 0x1055fc: 0x54a0fff0  bnel        $a1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1055FCu;
    {
        const bool branch_taken_0x1055fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1055fc) {
            ctx->pc = 0x105600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1055FCu;
            // 0x105600: 0x8cb00004  lw          $s0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1055C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1055c0;
        }
    }
    ctx->pc = 0x105604u;
label_105604:
    // 0x105604: 0x8e42a8ac  lw          $v0, -0x5754($s2)
    ctx->pc = 0x105604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944940)));
    // 0x105608: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105608u;
    {
        const bool branch_taken_0x105608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105608u;
        // 0x10560c: 0xae60a8a8  sw          $zero, -0x5758($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294944936), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105608) {
            ctx->pc = 0x105618u;
            goto label_105618;
        }
    }
    ctx->pc = 0x105610u;
    // 0x105610: 0xae62a8a8  sw          $v0, -0x5758($s3)
    ctx->pc = 0x105610u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294944936), GPR_U32(ctx, 2));
    // 0x105614: 0xae40a8ac  sw          $zero, -0x5754($s2)
    ctx->pc = 0x105614u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294944940), GPR_U32(ctx, 0));
label_105618:
    // 0x105618: 0xae80a8b0  sw          $zero, -0x5750($s4)
    ctx->pc = 0x105618u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294944944), GPR_U32(ctx, 0));
label_10561c:
    // 0x10561c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x10561cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x105620: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x105620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105624: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x105624u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105628: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x105628u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10562c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x10562cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x105630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105634: 0x3e00008  jr          $ra
    ctx->pc = 0x105634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105634u;
        // 0x105638: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10563Cu;
    // 0x10563c: 0x0  nop
    ctx->pc = 0x10563cu;
    // NOP
    ctx->pc = 0x105640u;
}
