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

// Function: sub_002ED4F0
// Address: 0x2ed4f0 - 0x2ed718
void sub_002ED4F0_0x2ed4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED4F0_0x2ed4f0");
#endif

    switch (ctx->pc) {
        case 0x2ed4f0u: goto label_2ed4f0;
        case 0x2ed4f4u: goto label_2ed4f4;
        case 0x2ed4f8u: goto label_2ed4f8;
        case 0x2ed4fcu: goto label_2ed4fc;
        case 0x2ed500u: goto label_2ed500;
        case 0x2ed504u: goto label_2ed504;
        case 0x2ed508u: goto label_2ed508;
        case 0x2ed50cu: goto label_2ed50c;
        case 0x2ed510u: goto label_2ed510;
        case 0x2ed514u: goto label_2ed514;
        case 0x2ed518u: goto label_2ed518;
        case 0x2ed51cu: goto label_2ed51c;
        case 0x2ed520u: goto label_2ed520;
        case 0x2ed524u: goto label_2ed524;
        case 0x2ed528u: goto label_2ed528;
        case 0x2ed52cu: goto label_2ed52c;
        case 0x2ed530u: goto label_2ed530;
        case 0x2ed534u: goto label_2ed534;
        case 0x2ed538u: goto label_2ed538;
        case 0x2ed53cu: goto label_2ed53c;
        case 0x2ed540u: goto label_2ed540;
        case 0x2ed544u: goto label_2ed544;
        case 0x2ed548u: goto label_2ed548;
        case 0x2ed54cu: goto label_2ed54c;
        case 0x2ed550u: goto label_2ed550;
        case 0x2ed554u: goto label_2ed554;
        case 0x2ed558u: goto label_2ed558;
        case 0x2ed55cu: goto label_2ed55c;
        case 0x2ed560u: goto label_2ed560;
        case 0x2ed564u: goto label_2ed564;
        case 0x2ed568u: goto label_2ed568;
        case 0x2ed56cu: goto label_2ed56c;
        case 0x2ed570u: goto label_2ed570;
        case 0x2ed574u: goto label_2ed574;
        case 0x2ed578u: goto label_2ed578;
        case 0x2ed57cu: goto label_2ed57c;
        case 0x2ed580u: goto label_2ed580;
        case 0x2ed584u: goto label_2ed584;
        case 0x2ed588u: goto label_2ed588;
        case 0x2ed58cu: goto label_2ed58c;
        case 0x2ed590u: goto label_2ed590;
        case 0x2ed594u: goto label_2ed594;
        case 0x2ed598u: goto label_2ed598;
        case 0x2ed59cu: goto label_2ed59c;
        case 0x2ed5a0u: goto label_2ed5a0;
        case 0x2ed5a4u: goto label_2ed5a4;
        case 0x2ed5a8u: goto label_2ed5a8;
        case 0x2ed5acu: goto label_2ed5ac;
        case 0x2ed5b0u: goto label_2ed5b0;
        case 0x2ed5b4u: goto label_2ed5b4;
        case 0x2ed5b8u: goto label_2ed5b8;
        case 0x2ed5bcu: goto label_2ed5bc;
        case 0x2ed5c0u: goto label_2ed5c0;
        case 0x2ed5c4u: goto label_2ed5c4;
        case 0x2ed5c8u: goto label_2ed5c8;
        case 0x2ed5ccu: goto label_2ed5cc;
        case 0x2ed5d0u: goto label_2ed5d0;
        case 0x2ed5d4u: goto label_2ed5d4;
        case 0x2ed5d8u: goto label_2ed5d8;
        case 0x2ed5dcu: goto label_2ed5dc;
        case 0x2ed5e0u: goto label_2ed5e0;
        case 0x2ed5e4u: goto label_2ed5e4;
        case 0x2ed5e8u: goto label_2ed5e8;
        case 0x2ed5ecu: goto label_2ed5ec;
        case 0x2ed5f0u: goto label_2ed5f0;
        case 0x2ed5f4u: goto label_2ed5f4;
        case 0x2ed5f8u: goto label_2ed5f8;
        case 0x2ed5fcu: goto label_2ed5fc;
        case 0x2ed600u: goto label_2ed600;
        case 0x2ed604u: goto label_2ed604;
        case 0x2ed608u: goto label_2ed608;
        case 0x2ed60cu: goto label_2ed60c;
        case 0x2ed610u: goto label_2ed610;
        case 0x2ed614u: goto label_2ed614;
        case 0x2ed618u: goto label_2ed618;
        case 0x2ed61cu: goto label_2ed61c;
        case 0x2ed620u: goto label_2ed620;
        case 0x2ed624u: goto label_2ed624;
        case 0x2ed628u: goto label_2ed628;
        case 0x2ed62cu: goto label_2ed62c;
        case 0x2ed630u: goto label_2ed630;
        case 0x2ed634u: goto label_2ed634;
        case 0x2ed638u: goto label_2ed638;
        case 0x2ed63cu: goto label_2ed63c;
        case 0x2ed640u: goto label_2ed640;
        case 0x2ed644u: goto label_2ed644;
        case 0x2ed648u: goto label_2ed648;
        case 0x2ed64cu: goto label_2ed64c;
        case 0x2ed650u: goto label_2ed650;
        case 0x2ed654u: goto label_2ed654;
        case 0x2ed658u: goto label_2ed658;
        case 0x2ed65cu: goto label_2ed65c;
        case 0x2ed660u: goto label_2ed660;
        case 0x2ed664u: goto label_2ed664;
        case 0x2ed668u: goto label_2ed668;
        case 0x2ed66cu: goto label_2ed66c;
        case 0x2ed670u: goto label_2ed670;
        case 0x2ed674u: goto label_2ed674;
        case 0x2ed678u: goto label_2ed678;
        case 0x2ed67cu: goto label_2ed67c;
        case 0x2ed680u: goto label_2ed680;
        case 0x2ed684u: goto label_2ed684;
        case 0x2ed688u: goto label_2ed688;
        case 0x2ed68cu: goto label_2ed68c;
        case 0x2ed690u: goto label_2ed690;
        case 0x2ed694u: goto label_2ed694;
        case 0x2ed698u: goto label_2ed698;
        case 0x2ed69cu: goto label_2ed69c;
        case 0x2ed6a0u: goto label_2ed6a0;
        case 0x2ed6a4u: goto label_2ed6a4;
        case 0x2ed6a8u: goto label_2ed6a8;
        case 0x2ed6acu: goto label_2ed6ac;
        case 0x2ed6b0u: goto label_2ed6b0;
        case 0x2ed6b4u: goto label_2ed6b4;
        case 0x2ed6b8u: goto label_2ed6b8;
        case 0x2ed6bcu: goto label_2ed6bc;
        case 0x2ed6c0u: goto label_2ed6c0;
        case 0x2ed6c4u: goto label_2ed6c4;
        case 0x2ed6c8u: goto label_2ed6c8;
        case 0x2ed6ccu: goto label_2ed6cc;
        case 0x2ed6d0u: goto label_2ed6d0;
        case 0x2ed6d4u: goto label_2ed6d4;
        case 0x2ed6d8u: goto label_2ed6d8;
        case 0x2ed6dcu: goto label_2ed6dc;
        case 0x2ed6e0u: goto label_2ed6e0;
        case 0x2ed6e4u: goto label_2ed6e4;
        case 0x2ed6e8u: goto label_2ed6e8;
        case 0x2ed6ecu: goto label_2ed6ec;
        case 0x2ed6f0u: goto label_2ed6f0;
        case 0x2ed6f4u: goto label_2ed6f4;
        case 0x2ed6f8u: goto label_2ed6f8;
        case 0x2ed6fcu: goto label_2ed6fc;
        case 0x2ed700u: goto label_2ed700;
        case 0x2ed704u: goto label_2ed704;
        case 0x2ed708u: goto label_2ed708;
        case 0x2ed70cu: goto label_2ed70c;
        case 0x2ed710u: goto label_2ed710;
        case 0x2ed714u: goto label_2ed714;
        default: break;
    }

    ctx->pc = 0x2ed4f0u;

label_2ed4f0:
    // 0x2ed4f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2ed4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2ed4f4:
    // 0x2ed4f4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2ed4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2ed4f8:
    // 0x2ed4f8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2ed4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2ed4fc:
    // 0x2ed4fc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2ed4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2ed500:
    // 0x2ed500: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ed500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed504:
    // 0x2ed504: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2ed504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2ed508:
    // 0x2ed508: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ed508u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ed50c:
    // 0x2ed50c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2ed50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2ed510:
    // 0x2ed510: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ed510u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ed514:
    // 0x2ed514: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ed514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2ed518:
    // 0x2ed518: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2ed518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2ed51c:
    // 0x2ed51c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2ed51cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2ed520:
    // 0x2ed520: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2ed520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ed524:
    // 0x2ed524: 0xc0a3fa4  jal         func_28FE90
label_2ed528:
    if (ctx->pc == 0x2ED528u) {
        ctx->pc = 0x2ED528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED524u;
        // 0x2ed528: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED52Cu;
        goto label_2ed52c;
    }
    ctx->pc = 0x2ED524u;
    SET_GPR_U32(ctx, 31, 0x2ED52Cu);
    ctx->pc = 0x2ED528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED524u;
    // 0x2ed528: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x2ED524u, 0x2ED52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED52Cu;
label_2ed52c:
    // 0x2ed52c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ed52cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ed530:
    // 0x2ed530: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ed530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed534:
    // 0x2ed534: 0xc0a7a84  jal         func_29EA10
label_2ed538:
    if (ctx->pc == 0x2ED538u) {
        ctx->pc = 0x2ED538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED534u;
        // 0x2ed538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED53Cu;
        goto label_2ed53c;
    }
    ctx->pc = 0x2ED534u;
    SET_GPR_U32(ctx, 31, 0x2ED53Cu);
    ctx->pc = 0x2ED538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED534u;
    // 0x2ed538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EA10u, 0x2ED534u, 0x2ED53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED53Cu;
label_2ed53c:
    // 0x2ed53c: 0x10520009  beq         $v0, $s2, . + 4 + (0x9 << 2)
label_2ed540:
    if (ctx->pc == 0x2ED540u) {
        ctx->pc = 0x2ED540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED53Cu;
        // 0x2ed540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED544u;
        goto label_2ed544;
    }
    ctx->pc = 0x2ED53Cu;
    {
        const bool branch_taken_0x2ed53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2ED540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED53Cu;
        // 0x2ed540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed53c) {
            ctx->pc = 0x2ED564u;
            goto label_2ed564;
        }
    }
    ctx->pc = 0x2ED544u;
label_2ed544:
    // 0x2ed544: 0xc0a7a84  jal         func_29EA10
label_2ed548:
    if (ctx->pc == 0x2ED548u) {
        ctx->pc = 0x2ED548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED544u;
        // 0x2ed548: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED54Cu;
        goto label_2ed54c;
    }
    ctx->pc = 0x2ED544u;
    SET_GPR_U32(ctx, 31, 0x2ED54Cu);
    ctx->pc = 0x2ED548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED544u;
    // 0x2ed548: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EA10u, 0x2ED544u, 0x2ED54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED54Cu;
label_2ed54c:
    // 0x2ed54c: 0x10520005  beq         $v0, $s2, . + 4 + (0x5 << 2)
label_2ed550:
    if (ctx->pc == 0x2ED550u) {
        ctx->pc = 0x2ED550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED54Cu;
        // 0x2ed550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED554u;
        goto label_2ed554;
    }
    ctx->pc = 0x2ED54Cu;
    {
        const bool branch_taken_0x2ed54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2ED550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED54Cu;
        // 0x2ed550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed54c) {
            ctx->pc = 0x2ED564u;
            goto label_2ed564;
        }
    }
    ctx->pc = 0x2ED554u;
label_2ed554:
    // 0x2ed554: 0xc0a7a84  jal         func_29EA10
label_2ed558:
    if (ctx->pc == 0x2ED558u) {
        ctx->pc = 0x2ED558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED554u;
        // 0x2ed558: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED55Cu;
        goto label_2ed55c;
    }
    ctx->pc = 0x2ED554u;
    SET_GPR_U32(ctx, 31, 0x2ED55Cu);
    ctx->pc = 0x2ED558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED554u;
    // 0x2ed558: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EA10u, 0x2ED554u, 0x2ED55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED55Cu;
label_2ed55c:
    // 0x2ed55c: 0x14520066  bne         $v0, $s2, . + 4 + (0x66 << 2)
label_2ed560:
    if (ctx->pc == 0x2ED560u) {
        ctx->pc = 0x2ED560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED55Cu;
        // 0x2ed560: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED564u;
        goto label_2ed564;
    }
    ctx->pc = 0x2ED55Cu;
    {
        const bool branch_taken_0x2ed55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2ED560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED55Cu;
        // 0x2ed560: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed55c) {
            ctx->pc = 0x2ED6F8u;
            goto label_2ed6f8;
        }
    }
    ctx->pc = 0x2ED564u;
label_2ed564:
    // 0x2ed564: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ed564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ed568:
    // 0x2ed568: 0xc08bfa0  jal         func_22FE80
label_2ed56c:
    if (ctx->pc == 0x2ED56Cu) {
        ctx->pc = 0x2ED56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED568u;
        // 0x2ed56c: 0x26300090  addiu       $s0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED570u;
        goto label_2ed570;
    }
    ctx->pc = 0x2ED568u;
    SET_GPR_U32(ctx, 31, 0x2ED570u);
    ctx->pc = 0x2ED56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED568u;
    // 0x2ed56c: 0x26300090  addiu       $s0, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2ED568u, 0x2ED570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED570u;
label_2ed570:
    // 0x2ed570: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2ed570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2ed574:
    // 0x2ed574: 0x10800047  beqz        $a0, . + 4 + (0x47 << 2)
label_2ed578:
    if (ctx->pc == 0x2ED578u) {
        ctx->pc = 0x2ED578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED574u;
        // 0x2ed578: 0x3c120071  lui         $s2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED57Cu;
        goto label_2ed57c;
    }
    ctx->pc = 0x2ED574u;
    {
        const bool branch_taken_0x2ed574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED574u;
        // 0x2ed578: 0x3c120071  lui         $s2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed574) {
            ctx->pc = 0x2ED694u;
            goto label_2ed694;
        }
    }
    ctx->pc = 0x2ED57Cu;
label_2ed57c:
    // 0x2ed57c: 0xc10587a  jal         func_4161E8
label_2ed580:
    if (ctx->pc == 0x2ED580u) {
        ctx->pc = 0x2ED584u;
        goto label_2ed584;
    }
    ctx->pc = 0x2ED57Cu;
    SET_GPR_U32(ctx, 31, 0x2ED584u);
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2ED57Cu, 0x2ED584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED584u;
label_2ed584:
    // 0x2ed584: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x2ed584u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2ed588:
    // 0x2ed588: 0x26494b00  addiu       $t1, $s2, 0x4B00
    ctx->pc = 0x2ed588u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 19200));
label_2ed58c:
    // 0x2ed58c: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x2ed58cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2ed590:
    // 0x2ed590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ed590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ed594:
    // 0x2ed594: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2ed594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2ed598:
    // 0x2ed598: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ed598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ed59c:
    // 0x2ed59c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2ed59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_2ed5a0:
    // 0x2ed5a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ed5a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed5a4:
    // 0x2ed5a4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2ed5a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2ed5a8:
    // 0x2ed5a8: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2ed5a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_2ed5ac:
    // 0x2ed5ac: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2ed5acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2ed5b0:
    // 0x2ed5b0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2ed5b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2ed5b4:
    // 0x2ed5b4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2ed5b4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2ed5b8:
    // 0x2ed5b8: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x2ed5b8u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
label_2ed5bc:
    // 0x2ed5bc: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x2ed5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
label_2ed5c0:
    // 0x2ed5c0: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2ed5c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_2ed5c4:
    // 0x2ed5c4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2ed5c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2ed5c8:
    // 0x2ed5c8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2ed5c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2ed5cc:
    // 0x2ed5cc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2ed5ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2ed5d0:
    // 0x2ed5d0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2ed5d0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2ed5d4:
    // 0x2ed5d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2ed5d4u;
    // VWAITQ (Q already resolved in this runtime)
label_2ed5d8:
    // 0x2ed5d8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2ed5d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2ed5dc:
    // 0x2ed5dc: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x2ed5dcu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
label_2ed5e0:
    // 0x2ed5e0: 0x7fa70010  sq          $a3, 0x10($sp)
    ctx->pc = 0x2ed5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 7));
label_2ed5e4:
    // 0x2ed5e4: 0x7fa80000  sq          $t0, 0x0($sp)
    ctx->pc = 0x2ed5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 8));
label_2ed5e8:
    // 0x2ed5e8: 0x7fa80010  sq          $t0, 0x10($sp)
    ctx->pc = 0x2ed5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
label_2ed5ec:
    // 0x2ed5ec: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x2ed5ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2ed5f0:
    // 0x2ed5f0: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x2ed5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
label_2ed5f4:
    // 0x2ed5f4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2ed5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2ed5f8:
    // 0x2ed5f8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2ed5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_2ed5fc:
    // 0x2ed5fc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2ed5fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2ed600:
    // 0x2ed600: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2ed600u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2ed604:
    // 0x2ed604: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x2ed604u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_2ed608:
    // 0x2ed608: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2ed608u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2ed60c:
    // 0x2ed60c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2ed60cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2ed610:
    // 0x2ed610: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2ed610u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2ed614:
    // 0x2ed614: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2ed614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2ed618:
    // 0x2ed618: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2ed618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2ed61c:
    // 0x2ed61c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2ed61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2ed620:
    // 0x2ed620: 0xc088878  jal         func_2221E0
label_2ed624:
    if (ctx->pc == 0x2ED624u) {
        ctx->pc = 0x2ED624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED620u;
        // 0x2ed624: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED628u;
        goto label_2ed628;
    }
    ctx->pc = 0x2ED620u;
    SET_GPR_U32(ctx, 31, 0x2ED628u);
    ctx->pc = 0x2ED624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED620u;
    // 0x2ed624: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221E0u, 0x2ED620u, 0x2ED628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED628u;
label_2ed628:
    // 0x2ed628: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ed628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed62c:
    // 0x2ed62c: 0x5443001a  bnel        $v0, $v1, . + 4 + (0x1A << 2)
label_2ed630:
    if (ctx->pc == 0x2ED630u) {
        ctx->pc = 0x2ED630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED62Cu;
        // 0x2ed630: 0x86040002  lh          $a0, 0x2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED634u;
        goto label_2ed634;
    }
    ctx->pc = 0x2ED62Cu;
    {
        const bool branch_taken_0x2ed62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ed62c) {
            ctx->pc = 0x2ED630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED62Cu;
            // 0x2ed630: 0x86040002  lh          $a0, 0x2($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED698u;
            goto label_2ed698;
        }
    }
    ctx->pc = 0x2ED634u;
label_2ed634:
    // 0x2ed634: 0xc0a367c  jal         func_28D9F0
label_2ed638:
    if (ctx->pc == 0x2ED638u) {
        ctx->pc = 0x2ED638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED634u;
        // 0x2ed638: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED63Cu;
        goto label_2ed63c;
    }
    ctx->pc = 0x2ED634u;
    SET_GPR_U32(ctx, 31, 0x2ED63Cu);
    ctx->pc = 0x2ED638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED634u;
    // 0x2ed638: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2ED634u, 0x2ED63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED63Cu;
label_2ed63c:
    // 0x2ed63c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ed63cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ed640:
    // 0x2ed640: 0x5200002d  beql        $s0, $zero, . + 4 + (0x2D << 2)
label_2ed644:
    if (ctx->pc == 0x2ED644u) {
        ctx->pc = 0x2ED644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED640u;
        // 0x2ed644: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED648u;
        goto label_2ed648;
    }
    ctx->pc = 0x2ED640u;
    {
        const bool branch_taken_0x2ed640 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed640) {
            ctx->pc = 0x2ED644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED640u;
            // 0x2ed644: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED6F8u;
            goto label_2ed6f8;
        }
    }
    ctx->pc = 0x2ED648u;
label_2ed648:
    // 0x2ed648: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2ed648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ed64c:
    // 0x2ed64c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ed64cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ed650:
    // 0x2ed650: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ed650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ed654:
    // 0x2ed654: 0x40f809  jalr        $v0
label_2ed658:
    if (ctx->pc == 0x2ED658u) {
        ctx->pc = 0x2ED658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED654u;
        // 0x2ed658: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED65Cu;
        goto label_2ed65c;
    }
    ctx->pc = 0x2ED654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ED65Cu);
        ctx->pc = 0x2ED658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED654u;
        // 0x2ed658: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED654u, 0x2ED65Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ED65Cu;
label_2ed65c:
    // 0x2ed65c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2ed65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ed660:
    // 0x2ed660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ed664:
    // 0x2ed664: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2ed664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2ed668:
    // 0x2ed668: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2ed668u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2ed66c:
    // 0x2ed66c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ed66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ed670:
    // 0x2ed670: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2ed670u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ed674:
    // 0x2ed674: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2ed674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ed678:
    // 0x2ed678: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2ed678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ed67c:
    // 0x2ed67c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ed67cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed680:
    // 0x2ed680: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ed680u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed684:
    // 0x2ed684: 0xc0bee7a  jal         func_2FB9E8
label_2ed688:
    if (ctx->pc == 0x2ED688u) {
        ctx->pc = 0x2ED688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED684u;
        // 0x2ed688: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED68Cu;
        goto label_2ed68c;
    }
    ctx->pc = 0x2ED684u;
    SET_GPR_U32(ctx, 31, 0x2ED68Cu);
    ctx->pc = 0x2ED688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED684u;
    // 0x2ed688: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2ED684u, 0x2ED68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED68Cu;
label_2ed68c:
    // 0x2ed68c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2ed690:
    if (ctx->pc == 0x2ED690u) {
        ctx->pc = 0x2ED690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED68Cu;
        // 0x2ed690: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED694u;
        goto label_2ed694;
    }
    ctx->pc = 0x2ED68Cu;
    {
        const bool branch_taken_0x2ed68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED68Cu;
        // 0x2ed690: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed68c) {
            ctx->pc = 0x2ED6F8u;
            goto label_2ed6f8;
        }
    }
    ctx->pc = 0x2ED694u;
label_2ed694:
    // 0x2ed694: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2ed694u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2ed698:
    // 0x2ed698: 0x26424b00  addiu       $v0, $s2, 0x4B00
    ctx->pc = 0x2ed698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 19200));
label_2ed69c:
    // 0x2ed69c: 0x86850092  lh          $a1, 0x92($s4)
    ctx->pc = 0x2ed69cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2ed6a0:
    // 0x2ed6a0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ed6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2ed6a4:
    // 0x2ed6a4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2ed6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2ed6a8:
    // 0x2ed6a8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ed6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2ed6ac:
    // 0x2ed6ac: 0xc0cdb5a  jal         func_336D68
label_2ed6b0:
    if (ctx->pc == 0x2ED6B0u) {
        ctx->pc = 0x2ED6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6ACu;
        // 0x2ed6b0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED6B4u;
        goto label_2ed6b4;
    }
    ctx->pc = 0x2ED6ACu;
    SET_GPR_U32(ctx, 31, 0x2ED6B4u);
    ctx->pc = 0x2ED6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED6ACu;
    // 0x2ed6b0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D68u, 0x2ED6ACu, 0x2ED6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED6B4u;
label_2ed6b4:
    // 0x2ed6b4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2ed6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ed6b8:
    // 0x2ed6b8: 0xc0a367c  jal         func_28D9F0
label_2ed6bc:
    if (ctx->pc == 0x2ED6BCu) {
        ctx->pc = 0x2ED6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6B8u;
        // 0x2ed6bc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED6C0u;
        goto label_2ed6c0;
    }
    ctx->pc = 0x2ED6B8u;
    SET_GPR_U32(ctx, 31, 0x2ED6C0u);
    ctx->pc = 0x2ED6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED6B8u;
    // 0x2ed6bc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2ED6B8u, 0x2ED6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED6C0u;
label_2ed6c0:
    // 0x2ed6c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2ed6c4:
    if (ctx->pc == 0x2ED6C4u) {
        ctx->pc = 0x2ED6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6C0u;
        // 0x2ed6c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED6C8u;
        goto label_2ed6c8;
    }
    ctx->pc = 0x2ED6C0u;
    {
        const bool branch_taken_0x2ed6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6C0u;
        // 0x2ed6c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed6c0) {
            ctx->pc = 0x2ED6F4u;
            goto label_2ed6f4;
        }
    }
    ctx->pc = 0x2ED6C8u;
label_2ed6c8:
    // 0x2ed6c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ed6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ed6cc:
    // 0x2ed6cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ed6ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ed6d0:
    // 0x2ed6d0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2ed6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2ed6d4:
    // 0x2ed6d4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2ed6d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2ed6d8:
    // 0x2ed6d8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ed6d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ed6dc:
    // 0x2ed6dc: 0x460ca300  add.s       $f12, $f20, $f12
    ctx->pc = 0x2ed6dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
label_2ed6e0:
    // 0x2ed6e0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2ed6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ed6e4:
    // 0x2ed6e4: 0x460da340  add.s       $f13, $f20, $f13
    ctx->pc = 0x2ed6e4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[13]);
label_2ed6e8:
    // 0x2ed6e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ed6e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed6ec:
    // 0x2ed6ec: 0xc0bf3d4  jal         func_2FCF50
label_2ed6f0:
    if (ctx->pc == 0x2ED6F0u) {
        ctx->pc = 0x2ED6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6ECu;
        // 0x2ed6f0: 0x240801f4  addiu       $t0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED6F4u;
        goto label_2ed6f4;
    }
    ctx->pc = 0x2ED6ECu;
    SET_GPR_U32(ctx, 31, 0x2ED6F4u);
    ctx->pc = 0x2ED6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED6ECu;
    // 0x2ed6f0: 0x240801f4  addiu       $t0, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2ED6ECu, 0x2ED6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED6F4u;
label_2ed6f4:
    // 0x2ed6f4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2ed6f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2ed6f8:
    // 0x2ed6f8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2ed6f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2ed6fc:
    // 0x2ed6fc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2ed6fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2ed700:
    // 0x2ed700: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2ed700u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ed704:
    // 0x2ed704: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2ed704u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ed708:
    // 0x2ed708: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2ed708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ed70c:
    // 0x2ed70c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2ed70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ed710:
    // 0x2ed710: 0x3e00008  jr          $ra
label_2ed714:
    if (ctx->pc == 0x2ED714u) {
        ctx->pc = 0x2ED714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED710u;
        // 0x2ed714: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED718u;
        goto label_fallthrough_0x2ed710;
    }
    ctx->pc = 0x2ED710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED710u;
        // 0x2ed714: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ed710:
    ctx->pc = 0x2ED718u;
}
