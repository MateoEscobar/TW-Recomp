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

// Function: sub_004ED538
// Address: 0x4ed538 - 0x4ed718
void sub_004ED538_0x4ed538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED538_0x4ed538");
#endif

    switch (ctx->pc) {
        case 0x4ed538u: goto label_4ed538;
        case 0x4ed53cu: goto label_4ed53c;
        case 0x4ed540u: goto label_4ed540;
        case 0x4ed544u: goto label_4ed544;
        case 0x4ed548u: goto label_4ed548;
        case 0x4ed54cu: goto label_4ed54c;
        case 0x4ed550u: goto label_4ed550;
        case 0x4ed554u: goto label_4ed554;
        case 0x4ed558u: goto label_4ed558;
        case 0x4ed55cu: goto label_4ed55c;
        case 0x4ed560u: goto label_4ed560;
        case 0x4ed564u: goto label_4ed564;
        case 0x4ed568u: goto label_4ed568;
        case 0x4ed56cu: goto label_4ed56c;
        case 0x4ed570u: goto label_4ed570;
        case 0x4ed574u: goto label_4ed574;
        case 0x4ed578u: goto label_4ed578;
        case 0x4ed57cu: goto label_4ed57c;
        case 0x4ed580u: goto label_4ed580;
        case 0x4ed584u: goto label_4ed584;
        case 0x4ed588u: goto label_4ed588;
        case 0x4ed58cu: goto label_4ed58c;
        case 0x4ed590u: goto label_4ed590;
        case 0x4ed594u: goto label_4ed594;
        case 0x4ed598u: goto label_4ed598;
        case 0x4ed59cu: goto label_4ed59c;
        case 0x4ed5a0u: goto label_4ed5a0;
        case 0x4ed5a4u: goto label_4ed5a4;
        case 0x4ed5a8u: goto label_4ed5a8;
        case 0x4ed5acu: goto label_4ed5ac;
        case 0x4ed5b0u: goto label_4ed5b0;
        case 0x4ed5b4u: goto label_4ed5b4;
        case 0x4ed5b8u: goto label_4ed5b8;
        case 0x4ed5bcu: goto label_4ed5bc;
        case 0x4ed5c0u: goto label_4ed5c0;
        case 0x4ed5c4u: goto label_4ed5c4;
        case 0x4ed5c8u: goto label_4ed5c8;
        case 0x4ed5ccu: goto label_4ed5cc;
        case 0x4ed5d0u: goto label_4ed5d0;
        case 0x4ed5d4u: goto label_4ed5d4;
        case 0x4ed5d8u: goto label_4ed5d8;
        case 0x4ed5dcu: goto label_4ed5dc;
        case 0x4ed5e0u: goto label_4ed5e0;
        case 0x4ed5e4u: goto label_4ed5e4;
        case 0x4ed5e8u: goto label_4ed5e8;
        case 0x4ed5ecu: goto label_4ed5ec;
        case 0x4ed5f0u: goto label_4ed5f0;
        case 0x4ed5f4u: goto label_4ed5f4;
        case 0x4ed5f8u: goto label_4ed5f8;
        case 0x4ed5fcu: goto label_4ed5fc;
        case 0x4ed600u: goto label_4ed600;
        case 0x4ed604u: goto label_4ed604;
        case 0x4ed608u: goto label_4ed608;
        case 0x4ed60cu: goto label_4ed60c;
        case 0x4ed610u: goto label_4ed610;
        case 0x4ed614u: goto label_4ed614;
        case 0x4ed618u: goto label_4ed618;
        case 0x4ed61cu: goto label_4ed61c;
        case 0x4ed620u: goto label_4ed620;
        case 0x4ed624u: goto label_4ed624;
        case 0x4ed628u: goto label_4ed628;
        case 0x4ed62cu: goto label_4ed62c;
        case 0x4ed630u: goto label_4ed630;
        case 0x4ed634u: goto label_4ed634;
        case 0x4ed638u: goto label_4ed638;
        case 0x4ed63cu: goto label_4ed63c;
        case 0x4ed640u: goto label_4ed640;
        case 0x4ed644u: goto label_4ed644;
        case 0x4ed648u: goto label_4ed648;
        case 0x4ed64cu: goto label_4ed64c;
        case 0x4ed650u: goto label_4ed650;
        case 0x4ed654u: goto label_4ed654;
        case 0x4ed658u: goto label_4ed658;
        case 0x4ed65cu: goto label_4ed65c;
        case 0x4ed660u: goto label_4ed660;
        case 0x4ed664u: goto label_4ed664;
        case 0x4ed668u: goto label_4ed668;
        case 0x4ed66cu: goto label_4ed66c;
        case 0x4ed670u: goto label_4ed670;
        case 0x4ed674u: goto label_4ed674;
        case 0x4ed678u: goto label_4ed678;
        case 0x4ed67cu: goto label_4ed67c;
        case 0x4ed680u: goto label_4ed680;
        case 0x4ed684u: goto label_4ed684;
        case 0x4ed688u: goto label_4ed688;
        case 0x4ed68cu: goto label_4ed68c;
        case 0x4ed690u: goto label_4ed690;
        case 0x4ed694u: goto label_4ed694;
        case 0x4ed698u: goto label_4ed698;
        case 0x4ed69cu: goto label_4ed69c;
        case 0x4ed6a0u: goto label_4ed6a0;
        case 0x4ed6a4u: goto label_4ed6a4;
        case 0x4ed6a8u: goto label_4ed6a8;
        case 0x4ed6acu: goto label_4ed6ac;
        case 0x4ed6b0u: goto label_4ed6b0;
        case 0x4ed6b4u: goto label_4ed6b4;
        case 0x4ed6b8u: goto label_4ed6b8;
        case 0x4ed6bcu: goto label_4ed6bc;
        case 0x4ed6c0u: goto label_4ed6c0;
        case 0x4ed6c4u: goto label_4ed6c4;
        case 0x4ed6c8u: goto label_4ed6c8;
        case 0x4ed6ccu: goto label_4ed6cc;
        case 0x4ed6d0u: goto label_4ed6d0;
        case 0x4ed6d4u: goto label_4ed6d4;
        case 0x4ed6d8u: goto label_4ed6d8;
        case 0x4ed6dcu: goto label_4ed6dc;
        case 0x4ed6e0u: goto label_4ed6e0;
        case 0x4ed6e4u: goto label_4ed6e4;
        case 0x4ed6e8u: goto label_4ed6e8;
        case 0x4ed6ecu: goto label_4ed6ec;
        case 0x4ed6f0u: goto label_4ed6f0;
        case 0x4ed6f4u: goto label_4ed6f4;
        case 0x4ed6f8u: goto label_4ed6f8;
        case 0x4ed6fcu: goto label_4ed6fc;
        case 0x4ed700u: goto label_4ed700;
        case 0x4ed704u: goto label_4ed704;
        case 0x4ed708u: goto label_4ed708;
        case 0x4ed70cu: goto label_4ed70c;
        case 0x4ed710u: goto label_4ed710;
        case 0x4ed714u: goto label_4ed714;
        default: break;
    }

    ctx->pc = 0x4ed538u;

label_4ed538:
    // 0x4ed538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ed538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4ed53c:
    // 0x4ed53c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4ed53cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ed540:
    // 0x4ed540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ed540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ed544:
    // 0x4ed544: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4ed548:
    if (ctx->pc == 0x4ED548u) {
        ctx->pc = 0x4ED548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED544u;
        // 0x4ed548: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ED54Cu;
        goto label_4ed54c;
    }
    ctx->pc = 0x4ED544u;
    {
        const bool branch_taken_0x4ed544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ED548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED544u;
        // 0x4ed548: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed544) {
            ctx->pc = 0x4ED570u;
            goto label_4ed570;
        }
    }
    ctx->pc = 0x4ED54Cu;
label_4ed54c:
    // 0x4ed54c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4ed54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4ed550:
    // 0x4ed550: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4ed550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ed554:
    // 0x4ed554: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4ed554u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4ed558:
    // 0x4ed558: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4ed558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4ed55c:
    // 0x4ed55c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ed55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ed560:
    // 0x4ed560: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ed560u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ed564:
    // 0x4ed564: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ed564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ed568:
    // 0x4ed568: 0x60f809  jalr        $v1
label_4ed56c:
    if (ctx->pc == 0x4ED56Cu) {
        ctx->pc = 0x4ED56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED568u;
        // 0x4ed56c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ED570u;
        goto label_4ed570;
    }
    ctx->pc = 0x4ED568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4ED570u);
        ctx->pc = 0x4ED56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED568u;
        // 0x4ed56c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED568u, 0x4ED570u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4ED570u;
label_4ed570:
    // 0x4ed570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ed570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ed574:
    // 0x4ed574: 0x3e00008  jr          $ra
label_4ed578:
    if (ctx->pc == 0x4ED578u) {
        ctx->pc = 0x4ED578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED574u;
        // 0x4ed578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ED57Cu;
        goto label_4ed57c;
    }
    ctx->pc = 0x4ED574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED574u;
        // 0x4ed578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ED57Cu;
label_4ed57c:
    // 0x4ed57c: 0x0  nop
    ctx->pc = 0x4ed57cu;
    // NOP
label_4ed580:
    // 0x4ed580: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4ed580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ed584:
    // 0x4ed584: 0x0  nop
    ctx->pc = 0x4ed584u;
    // NOP
label_4ed588:
    // 0x4ed588: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4ed588u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4ed58c:
    // 0x4ed58c: 0x0  nop
    ctx->pc = 0x4ed58cu;
    // NOP
label_4ed590:
    // 0x4ed590: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x4ed590u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_4ed594:
    // 0x4ed594: 0x0  nop
    ctx->pc = 0x4ed594u;
    // NOP
label_4ed598:
    // 0x4ed598: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ed598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4ed59c:
    // 0x4ed59c: 0x0  nop
    ctx->pc = 0x4ed59cu;
    // NOP
label_4ed5a0:
    // 0x4ed5a0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x4ed5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_4ed5a4:
    // 0x4ed5a4: 0x0  nop
    ctx->pc = 0x4ed5a4u;
    // NOP
label_4ed5a8:
    // 0x4ed5a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4ed5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4ed5ac:
    // 0x4ed5ac: 0x0  nop
    ctx->pc = 0x4ed5acu;
    // NOP
label_4ed5b0:
    // 0x4ed5b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ed5b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4ed5b4:
    // 0x4ed5b4: 0x0  nop
    ctx->pc = 0x4ed5b4u;
    // NOP
label_4ed5b8:
    // 0x4ed5b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ed5b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4ed5bc:
    // 0x4ed5bc: 0x0  nop
    ctx->pc = 0x4ed5bcu;
    // NOP
label_4ed5c0:
    // 0x4ed5c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4ed5c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4ed5c4:
    // 0x4ed5c4: 0x0  nop
    ctx->pc = 0x4ed5c4u;
    // NOP
label_4ed5c8:
    // 0x4ed5c8: 0xac8503ac  sw          $a1, 0x3AC($a0)
    ctx->pc = 0x4ed5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 940), GPR_U32(ctx, 5));
label_4ed5cc:
    // 0x4ed5cc: 0x0  nop
    ctx->pc = 0x4ed5ccu;
    // NOP
label_4ed5d0:
    // 0x4ed5d0: 0xac820178  sw          $v0, 0x178($a0)
    ctx->pc = 0x4ed5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 376), GPR_U32(ctx, 2));
label_4ed5d4:
    // 0x4ed5d4: 0x0  nop
    ctx->pc = 0x4ed5d4u;
    // NOP
label_4ed5d8:
    // 0x4ed5d8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ed5d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4ed5dc:
    // 0x4ed5dc: 0x0  nop
    ctx->pc = 0x4ed5dcu;
    // NOP
label_4ed5e0:
    // 0x4ed5e0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ed5e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4ed5e4:
    // 0x4ed5e4: 0x0  nop
    ctx->pc = 0x4ed5e4u;
    // NOP
label_4ed5e8:
    // 0x4ed5e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ed5e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4ed5ec:
    // 0x4ed5ec: 0x0  nop
    ctx->pc = 0x4ed5ecu;
    // NOP
label_4ed5f0:
    // 0x4ed5f0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ed5f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4ed5f4:
    // 0x4ed5f4: 0x0  nop
    ctx->pc = 0x4ed5f4u;
    // NOP
label_4ed5f8:
    // 0x4ed5f8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ed5f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4ed5fc:
    // 0x4ed5fc: 0x0  nop
    ctx->pc = 0x4ed5fcu;
    // NOP
label_4ed600:
    // 0x4ed600: 0xac82017c  sw          $v0, 0x17C($a0)
    ctx->pc = 0x4ed600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 380), GPR_U32(ctx, 2));
label_4ed604:
    // 0x4ed604: 0x0  nop
    ctx->pc = 0x4ed604u;
    // NOP
label_4ed608:
    // 0x4ed608: 0xac820180  sw          $v0, 0x180($a0)
    ctx->pc = 0x4ed608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 384), GPR_U32(ctx, 2));
label_4ed60c:
    // 0x4ed60c: 0x0  nop
    ctx->pc = 0x4ed60cu;
    // NOP
label_4ed610:
    // 0x4ed610: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ed610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4ed614:
    // 0x4ed614: 0x0  nop
    ctx->pc = 0x4ed614u;
    // NOP
label_4ed618:
    // 0x4ed618: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ed618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4ed61c:
    // 0x4ed61c: 0x0  nop
    ctx->pc = 0x4ed61cu;
    // NOP
label_4ed620:
    // 0x4ed620: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4ed620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4ed624:
    // 0x4ed624: 0x0  nop
    ctx->pc = 0x4ed624u;
    // NOP
label_4ed628:
    // 0x4ed628: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4ed628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4ed62c:
    // 0x4ed62c: 0x0  nop
    ctx->pc = 0x4ed62cu;
    // NOP
label_4ed630:
    // 0x4ed630: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4ed630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4ed634:
    // 0x4ed634: 0x0  nop
    ctx->pc = 0x4ed634u;
    // NOP
label_4ed638:
    // 0x4ed638: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ed638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4ed63c:
    // 0x4ed63c: 0x0  nop
    ctx->pc = 0x4ed63cu;
    // NOP
label_4ed640:
    // 0x4ed640: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ed640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4ed644:
    // 0x4ed644: 0x0  nop
    ctx->pc = 0x4ed644u;
    // NOP
label_4ed648:
    // 0x4ed648: 0x7c8205f0  sq          $v0, 0x5F0($a0)
    ctx->pc = 0x4ed648u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1520), GPR_VEC(ctx, 2));
label_4ed64c:
    // 0x4ed64c: 0x0  nop
    ctx->pc = 0x4ed64cu;
    // NOP
label_4ed650:
    // 0x4ed650: 0x7c820600  sq          $v0, 0x600($a0)
    ctx->pc = 0x4ed650u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1536), GPR_VEC(ctx, 2));
label_4ed654:
    // 0x4ed654: 0x0  nop
    ctx->pc = 0x4ed654u;
    // NOP
label_4ed658:
    // 0x4ed658: 0x7c820620  sq          $v0, 0x620($a0)
    ctx->pc = 0x4ed658u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1568), GPR_VEC(ctx, 2));
label_4ed65c:
    // 0x4ed65c: 0x0  nop
    ctx->pc = 0x4ed65cu;
    // NOP
label_4ed660:
    // 0x4ed660: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4ed660u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_4ed664:
    // 0x4ed664: 0x0  nop
    ctx->pc = 0x4ed664u;
    // NOP
label_4ed668:
    // 0x4ed668: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x4ed668u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_4ed66c:
    // 0x4ed66c: 0x0  nop
    ctx->pc = 0x4ed66cu;
    // NOP
label_4ed670:
    // 0x4ed670: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4ed670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4ed674:
    // 0x4ed674: 0x0  nop
    ctx->pc = 0x4ed674u;
    // NOP
label_4ed678:
    // 0x4ed678: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ed678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4ed67c:
    // 0x4ed67c: 0x0  nop
    ctx->pc = 0x4ed67cu;
    // NOP
label_4ed680:
    // 0x4ed680: 0x7c8202b0  sq          $v0, 0x2B0($a0)
    ctx->pc = 0x4ed680u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 688), GPR_VEC(ctx, 2));
label_4ed684:
    // 0x4ed684: 0x0  nop
    ctx->pc = 0x4ed684u;
    // NOP
label_4ed688:
    // 0x4ed688: 0x7c820310  sq          $v0, 0x310($a0)
    ctx->pc = 0x4ed688u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 784), GPR_VEC(ctx, 2));
label_4ed68c:
    // 0x4ed68c: 0x0  nop
    ctx->pc = 0x4ed68cu;
    // NOP
label_4ed690:
    // 0x4ed690: 0x7c820320  sq          $v0, 0x320($a0)
    ctx->pc = 0x4ed690u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 800), GPR_VEC(ctx, 2));
label_4ed694:
    // 0x4ed694: 0x0  nop
    ctx->pc = 0x4ed694u;
    // NOP
label_4ed698:
    // 0x4ed698: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x4ed698u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
label_4ed69c:
    // 0x4ed69c: 0x0  nop
    ctx->pc = 0x4ed69cu;
    // NOP
label_4ed6a0:
    // 0x4ed6a0: 0xac800250  sw          $zero, 0x250($a0)
    ctx->pc = 0x4ed6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 0));
label_4ed6a4:
    // 0x4ed6a4: 0x0  nop
    ctx->pc = 0x4ed6a4u;
    // NOP
label_4ed6a8:
    // 0x4ed6a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ed6a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4ed6ac:
    // 0x4ed6ac: 0x0  nop
    ctx->pc = 0x4ed6acu;
    // NOP
label_4ed6b0:
    // 0x4ed6b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4ed6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4ed6b4:
    // 0x4ed6b4: 0x0  nop
    ctx->pc = 0x4ed6b4u;
    // NOP
label_4ed6b8:
    // 0x4ed6b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4ed6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4ed6bc:
    // 0x4ed6bc: 0x0  nop
    ctx->pc = 0x4ed6bcu;
    // NOP
label_4ed6c0:
    // 0x4ed6c0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ed6c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4ed6c4:
    // 0x4ed6c4: 0x0  nop
    ctx->pc = 0x4ed6c4u;
    // NOP
label_4ed6c8:
    // 0x4ed6c8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ed6c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4ed6cc:
    // 0x4ed6cc: 0x0  nop
    ctx->pc = 0x4ed6ccu;
    // NOP
label_4ed6d0:
    // 0x4ed6d0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ed6d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4ed6d4:
    // 0x4ed6d4: 0x0  nop
    ctx->pc = 0x4ed6d4u;
    // NOP
label_4ed6d8:
    // 0x4ed6d8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ed6d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4ed6dc:
    // 0x4ed6dc: 0x0  nop
    ctx->pc = 0x4ed6dcu;
    // NOP
label_4ed6e0:
    // 0x4ed6e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4ed6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4ed6e4:
    // 0x4ed6e4: 0x0  nop
    ctx->pc = 0x4ed6e4u;
    // NOP
label_4ed6e8:
    // 0x4ed6e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4ed6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4ed6ec:
    // 0x4ed6ec: 0x0  nop
    ctx->pc = 0x4ed6ecu;
    // NOP
label_4ed6f0:
    // 0x4ed6f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4ed6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4ed6f4:
    // 0x4ed6f4: 0x0  nop
    ctx->pc = 0x4ed6f4u;
    // NOP
label_4ed6f8:
    // 0x4ed6f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4ed6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4ed6fc:
    // 0x4ed6fc: 0x0  nop
    ctx->pc = 0x4ed6fcu;
    // NOP
label_4ed700:
    // 0x4ed700: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4ed700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ed704:
    // 0x4ed704: 0x0  nop
    ctx->pc = 0x4ed704u;
    // NOP
label_4ed708:
    // 0x4ed708: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4ed708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4ed70c:
    // 0x4ed70c: 0x0  nop
    ctx->pc = 0x4ed70cu;
    // NOP
label_4ed710:
    // 0x4ed710: 0xac800298  sw          $zero, 0x298($a0)
    ctx->pc = 0x4ed710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 664), GPR_U32(ctx, 0));
label_4ed714:
    // 0x4ed714: 0x0  nop
    ctx->pc = 0x4ed714u;
    // NOP
    ctx->pc = 0x4ed718u;
}
