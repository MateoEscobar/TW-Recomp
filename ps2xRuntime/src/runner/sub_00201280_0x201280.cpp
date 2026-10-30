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

// Function: sub_00201280
// Address: 0x201280 - 0x201308
void sub_00201280_0x201280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201280_0x201280");
#endif

    switch (ctx->pc) {
        case 0x201280u: goto label_201280;
        case 0x201284u: goto label_201284;
        case 0x201288u: goto label_201288;
        case 0x20128cu: goto label_20128c;
        case 0x201290u: goto label_201290;
        case 0x201294u: goto label_201294;
        case 0x201298u: goto label_201298;
        case 0x20129cu: goto label_20129c;
        case 0x2012a0u: goto label_2012a0;
        case 0x2012a4u: goto label_2012a4;
        case 0x2012a8u: goto label_2012a8;
        case 0x2012acu: goto label_2012ac;
        case 0x2012b0u: goto label_2012b0;
        case 0x2012b4u: goto label_2012b4;
        case 0x2012b8u: goto label_2012b8;
        case 0x2012bcu: goto label_2012bc;
        case 0x2012c0u: goto label_2012c0;
        case 0x2012c4u: goto label_2012c4;
        case 0x2012c8u: goto label_2012c8;
        case 0x2012ccu: goto label_2012cc;
        case 0x2012d0u: goto label_2012d0;
        case 0x2012d4u: goto label_2012d4;
        case 0x2012d8u: goto label_2012d8;
        case 0x2012dcu: goto label_2012dc;
        case 0x2012e0u: goto label_2012e0;
        case 0x2012e4u: goto label_2012e4;
        case 0x2012e8u: goto label_2012e8;
        case 0x2012ecu: goto label_2012ec;
        case 0x2012f0u: goto label_2012f0;
        case 0x2012f4u: goto label_2012f4;
        case 0x2012f8u: goto label_2012f8;
        case 0x2012fcu: goto label_2012fc;
        case 0x201300u: goto label_201300;
        case 0x201304u: goto label_201304;
        default: break;
    }

    ctx->pc = 0x201280u;

label_201280:
    // 0x201280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x201280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_201284:
    // 0x201284: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x201284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_201288:
    // 0x201288: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x201288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20128c:
    // 0x20128c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20128cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_201290:
    // 0x201290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_201294:
    // 0x201294: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x201294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_201298:
    // 0x201298: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_20129c:
    if (ctx->pc == 0x20129Cu) {
        ctx->pc = 0x20129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201298u;
        // 0x20129c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2012A0u;
        goto label_2012a0;
    }
    ctx->pc = 0x201298u;
    {
        const bool branch_taken_0x201298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201298u;
        // 0x20129c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201298) {
            ctx->pc = 0x2012ECu;
            goto label_2012ec;
        }
    }
    ctx->pc = 0x2012A0u;
label_2012a0:
    // 0x2012a0: 0xc06a3aa  jal         func_1A8EA8
label_2012a4:
    if (ctx->pc == 0x2012A4u) {
        ctx->pc = 0x2012A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012A0u;
        // 0x2012a4: 0x8e0500b0  lw          $a1, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2012A8u;
        goto label_2012a8;
    }
    ctx->pc = 0x2012A0u;
    SET_GPR_U32(ctx, 31, 0x2012A8u);
    ctx->pc = 0x2012A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2012A0u;
    // 0x2012a4: 0x8e0500b0  lw          $a1, 0xB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x2012A0u, 0x2012A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2012A8u;
label_2012a8:
    // 0x2012a8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2012ac:
    if (ctx->pc == 0x2012ACu) {
        ctx->pc = 0x2012ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012A8u;
        // 0x2012ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2012B0u;
        goto label_2012b0;
    }
    ctx->pc = 0x2012A8u;
    {
        const bool branch_taken_0x2012a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2012ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012A8u;
        // 0x2012ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2012a8) {
            ctx->pc = 0x2012F0u;
            goto label_2012f0;
        }
    }
    ctx->pc = 0x2012B0u;
label_2012b0:
    // 0x2012b0: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x2012b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_2012b4:
    // 0x2012b4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2012b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2012b8:
    // 0x2012b8: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x2012b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_2012bc:
    // 0x2012bc: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2012bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_2012c0:
    // 0x2012c0: 0x40f809  jalr        $v0
label_2012c4:
    if (ctx->pc == 0x2012C4u) {
        ctx->pc = 0x2012C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012C0u;
        // 0x2012c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2012C8u;
        goto label_2012c8;
    }
    ctx->pc = 0x2012C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2012C8u);
        ctx->pc = 0x2012C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012C0u;
        // 0x2012c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2012C0u, 0x2012C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2012C8u;
label_2012c8:
    // 0x2012c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2012cc:
    if (ctx->pc == 0x2012CCu) {
        ctx->pc = 0x2012CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012C8u;
        // 0x2012cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2012D0u;
        goto label_2012d0;
    }
    ctx->pc = 0x2012C8u;
    {
        const bool branch_taken_0x2012c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2012CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012C8u;
        // 0x2012cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2012c8) {
            ctx->pc = 0x2012F0u;
            goto label_2012f0;
        }
    }
    ctx->pc = 0x2012D0u;
label_2012d0:
    // 0x2012d0: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x2012d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_2012d4:
    // 0x2012d4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2012d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2012d8:
    // 0x2012d8: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x2012d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_2012dc:
    // 0x2012dc: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2012dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_2012e0:
    // 0x2012e0: 0x40f809  jalr        $v0
label_2012e4:
    if (ctx->pc == 0x2012E4u) {
        ctx->pc = 0x2012E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012E0u;
        // 0x2012e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2012E8u;
        goto label_2012e8;
    }
    ctx->pc = 0x2012E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2012E8u);
        ctx->pc = 0x2012E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012E0u;
        // 0x2012e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2012E0u, 0x2012E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2012E8u;
label_2012e8:
    // 0x2012e8: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x2012e8u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2012ec:
    // 0x2012ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2012ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2012f0:
    // 0x2012f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2012f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2012f4:
    // 0x2012f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2012f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2012f8:
    // 0x2012f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2012f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2012fc:
    // 0x2012fc: 0x3e00008  jr          $ra
label_201300:
    if (ctx->pc == 0x201300u) {
        ctx->pc = 0x201300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012FCu;
        // 0x201300: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201304u;
        goto label_201304;
    }
    ctx->pc = 0x2012FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012FCu;
        // 0x201300: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2012FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201304u;
label_201304:
    // 0x201304: 0x0  nop
    ctx->pc = 0x201304u;
    // NOP
    ctx->pc = 0x201308u;
}
