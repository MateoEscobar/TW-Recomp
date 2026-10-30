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

// Function: sub_002073E8
// Address: 0x2073e8 - 0x207480
void sub_002073E8_0x2073e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002073E8_0x2073e8");
#endif

    switch (ctx->pc) {
        case 0x2073e8u: goto label_2073e8;
        case 0x2073ecu: goto label_2073ec;
        case 0x2073f0u: goto label_2073f0;
        case 0x2073f4u: goto label_2073f4;
        case 0x2073f8u: goto label_2073f8;
        case 0x2073fcu: goto label_2073fc;
        case 0x207400u: goto label_207400;
        case 0x207404u: goto label_207404;
        case 0x207408u: goto label_207408;
        case 0x20740cu: goto label_20740c;
        case 0x207410u: goto label_207410;
        case 0x207414u: goto label_207414;
        case 0x207418u: goto label_207418;
        case 0x20741cu: goto label_20741c;
        case 0x207420u: goto label_207420;
        case 0x207424u: goto label_207424;
        case 0x207428u: goto label_207428;
        case 0x20742cu: goto label_20742c;
        case 0x207430u: goto label_207430;
        case 0x207434u: goto label_207434;
        case 0x207438u: goto label_207438;
        case 0x20743cu: goto label_20743c;
        case 0x207440u: goto label_207440;
        case 0x207444u: goto label_207444;
        case 0x207448u: goto label_207448;
        case 0x20744cu: goto label_20744c;
        case 0x207450u: goto label_207450;
        case 0x207454u: goto label_207454;
        case 0x207458u: goto label_207458;
        case 0x20745cu: goto label_20745c;
        case 0x207460u: goto label_207460;
        case 0x207464u: goto label_207464;
        case 0x207468u: goto label_207468;
        case 0x20746cu: goto label_20746c;
        case 0x207470u: goto label_207470;
        case 0x207474u: goto label_207474;
        case 0x207478u: goto label_207478;
        case 0x20747cu: goto label_20747c;
        default: break;
    }

    ctx->pc = 0x2073e8u;

label_2073e8:
    // 0x2073e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2073e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2073ec:
    // 0x2073ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2073ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2073f0:
    // 0x2073f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2073f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2073f4:
    // 0x2073f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2073f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2073f8:
    // 0x2073f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2073f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2073fc:
    // 0x2073fc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2073fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_207400:
    // 0x207400: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_207404:
    if (ctx->pc == 0x207404u) {
        ctx->pc = 0x207404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207400u;
        // 0x207404: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207408u;
        goto label_207408;
    }
    ctx->pc = 0x207400u;
    {
        const bool branch_taken_0x207400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207400u;
        // 0x207404: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207400) {
            ctx->pc = 0x20746Cu;
            goto label_20746c;
        }
    }
    ctx->pc = 0x207408u;
label_207408:
    // 0x207408: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x207408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_20740c:
    // 0x20740c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20740cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_207410:
    // 0x207410: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x207410u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_207414:
    // 0x207414: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x207414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_207418:
    // 0x207418: 0x60f809  jalr        $v1
label_20741c:
    if (ctx->pc == 0x20741Cu) {
        ctx->pc = 0x20741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207418u;
        // 0x20741c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207420u;
        goto label_207420;
    }
    ctx->pc = 0x207418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x207420u);
        ctx->pc = 0x20741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207418u;
        // 0x20741c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207418u, 0x207420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207420u;
label_207420:
    // 0x207420: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x207420u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_207424:
    // 0x207424: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x207424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_207428:
    // 0x207428: 0x26108ab0  addiu       $s0, $s0, -0x7550
    ctx->pc = 0x207428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294937264));
label_20742c:
    // 0x20742c: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x20742cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_207430:
    // 0x207430: 0xc139fe8  jal         func_4E7FA0
label_207434:
    if (ctx->pc == 0x207434u) {
        ctx->pc = 0x207434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207430u;
        // 0x207434: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207438u;
        goto label_207438;
    }
    ctx->pc = 0x207430u;
    SET_GPR_U32(ctx, 31, 0x207438u);
    ctx->pc = 0x207434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207430u;
    // 0x207434: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7FA0u, 0x207430u, 0x207438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207438u;
label_207438:
    // 0x207438: 0x8e25008c  lw          $a1, 0x8C($s1)
    ctx->pc = 0x207438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_20743c:
    // 0x20743c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20743cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_207440:
    // 0x207440: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x207440u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_207444:
    // 0x207444: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x207444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_207448:
    // 0x207448: 0x60f809  jalr        $v1
label_20744c:
    if (ctx->pc == 0x20744Cu) {
        ctx->pc = 0x20744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207448u;
        // 0x20744c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207450u;
        goto label_207450;
    }
    ctx->pc = 0x207448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x207450u);
        ctx->pc = 0x20744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207448u;
        // 0x20744c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207448u, 0x207450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207450u;
label_207450:
    // 0x207450: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x207450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_207454:
    // 0x207454: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x207454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_207458:
    // 0x207458: 0xc139fc8  jal         func_4E7F20
label_20745c:
    if (ctx->pc == 0x20745Cu) {
        ctx->pc = 0x20745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207458u;
        // 0x20745c: 0x24060049  addiu       $a2, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207460u;
        goto label_207460;
    }
    ctx->pc = 0x207458u;
    SET_GPR_U32(ctx, 31, 0x207460u);
    ctx->pc = 0x20745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207458u;
    // 0x20745c: 0x24060049  addiu       $a2, $zero, 0x49 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7F20u, 0x207458u, 0x207460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207460u;
label_207460:
    // 0x207460: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x207460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_207464:
    // 0x207464: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x207464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_207468:
    // 0x207468: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x207468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20746c:
    // 0x20746c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20746cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_207470:
    // 0x207470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_207474:
    // 0x207474: 0x3e00008  jr          $ra
label_207478:
    if (ctx->pc == 0x207478u) {
        ctx->pc = 0x207478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207474u;
        // 0x207478: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20747Cu;
        goto label_20747c;
    }
    ctx->pc = 0x207474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207474u;
        // 0x207478: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20747Cu;
label_20747c:
    // 0x20747c: 0x0  nop
    ctx->pc = 0x20747cu;
    // NOP
    ctx->pc = 0x207480u;
}
