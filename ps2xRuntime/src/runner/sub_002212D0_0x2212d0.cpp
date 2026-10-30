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

// Function: sub_002212D0
// Address: 0x2212d0 - 0x2213d8
void sub_002212D0_0x2212d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002212D0_0x2212d0");
#endif

    switch (ctx->pc) {
        case 0x2212ecu: goto label_2212ec;
        case 0x221310u: goto label_221310;
        default: break;
    }

    ctx->pc = 0x2212d0u;

    // 0x2212d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2212d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2212d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2212d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2212d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2212d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2212dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2212dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2212e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2212e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2212e4: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2212E4u;
    SET_GPR_U32(ctx, 31, 0x2212ECu);
    ctx->pc = 0x2212E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2212E4u;
    // 0x2212e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2212E4u, 0x2212ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2212ECu;
label_2212ec:
    // 0x2212ec: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x2212ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x2212f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2212F0u;
    {
        const bool branch_taken_0x2212f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2212f0) {
            ctx->pc = 0x221308u;
            goto label_221308;
        }
    }
    ctx->pc = 0x2212F8u;
    // 0x2212f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2212f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2212fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2212fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x221300: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x221300u;
    {
        const bool branch_taken_0x221300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221300u;
        // 0x221304: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221300) {
            ctx->pc = 0x221354u;
            goto label_221354;
        }
    }
    ctx->pc = 0x221308u;
label_221308:
    // 0x221308: 0xc087502  jal         func_21D408
    ctx->pc = 0x221308u;
    SET_GPR_U32(ctx, 31, 0x221310u);
    ctx->pc = 0x22130Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221308u;
    // 0x22130c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x221308u, 0x221310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221310u;
label_221310:
    // 0x221310: 0x8042000b  lb          $v0, 0xB($v0)
    ctx->pc = 0x221310u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x221314: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x221314u;
    {
        const bool branch_taken_0x221314 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x221318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221314u;
        // 0x221318: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221314) {
            ctx->pc = 0x221334u;
            goto label_221334;
        }
    }
    ctx->pc = 0x22131Cu;
    // 0x22131c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x221320: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x221320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x221324: 0x0  nop
    ctx->pc = 0x221324u;
    // NOP
    // 0x221328: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x221328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22132c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22132Cu;
    {
        const bool branch_taken_0x22132c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22132Cu;
        // 0x221330: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22132c) {
            ctx->pc = 0x221358u;
            goto label_221358;
        }
    }
    ctx->pc = 0x221334u;
label_221334:
    // 0x221334: 0x21023  negu        $v0, $v0
    ctx->pc = 0x221334u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x221338: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x221338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22133c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22133cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x221340: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x221340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x221344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x221344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221348: 0x0  nop
    ctx->pc = 0x221348u;
    // NOP
    // 0x22134c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22134cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x221350: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x221350u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_221354:
    // 0x221354: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x221354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_221358:
    // 0x221358: 0x1222000f  beq         $s1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x221358u;
    {
        const bool branch_taken_0x221358 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x22135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221358u;
        // 0x22135c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221358) {
            ctx->pc = 0x221398u;
            goto label_221398;
        }
    }
    ctx->pc = 0x221360u;
    // 0x221360: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x221360u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x221364: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221364u;
    {
        const bool branch_taken_0x221364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221364u;
        // 0x221368: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221364) {
            ctx->pc = 0x22137Cu;
            goto label_22137c;
        }
    }
    ctx->pc = 0x22136Cu;
    // 0x22136c: 0x1222000d  beq         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22136Cu;
    {
        const bool branch_taken_0x22136c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x221370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22136Cu;
        // 0x221370: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22136c) {
            ctx->pc = 0x2213A4u;
            goto label_2213a4;
        }
    }
    ctx->pc = 0x221374u;
    // 0x221374: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x221374u;
    {
        const bool branch_taken_0x221374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221374u;
        // 0x221378: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221374) {
            ctx->pc = 0x2213B0u;
            goto label_2213b0;
        }
    }
    ctx->pc = 0x22137Cu;
label_22137c:
    // 0x22137c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x22137cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x221380: 0x5622000b  bnel        $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x221380u;
    {
        const bool branch_taken_0x221380 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x221380) {
            ctx->pc = 0x221384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221380u;
            // 0x221384: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2213B0u;
            goto label_2213b0;
        }
    }
    ctx->pc = 0x221388u;
    // 0x221388: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x221388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x22138c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x22138cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x221390: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x221390u;
    {
        const bool branch_taken_0x221390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221390u;
        // 0x221394: 0x244201b8  addiu       $v0, $v0, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221390) {
            ctx->pc = 0x2213B8u;
            goto label_2213b8;
        }
    }
    ctx->pc = 0x221398u;
label_221398:
    // 0x221398: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x221398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x22139c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22139Cu;
    {
        const bool branch_taken_0x22139c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2213A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22139Cu;
        // 0x2213a0: 0x244201c0  addiu       $v0, $v0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22139c) {
            ctx->pc = 0x2213B8u;
            goto label_2213b8;
        }
    }
    ctx->pc = 0x2213A4u;
label_2213a4:
    // 0x2213a4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2213a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2213a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2213A8u;
    {
        const bool branch_taken_0x2213a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2213ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2213A8u;
        // 0x2213ac: 0x244201c8  addiu       $v0, $v0, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2213a8) {
            ctx->pc = 0x2213B8u;
            goto label_2213b8;
        }
    }
    ctx->pc = 0x2213B0u;
label_2213b0:
    // 0x2213b0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2213b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2213b4: 0x244201d0  addiu       $v0, $v0, 0x1D0
    ctx->pc = 0x2213b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
label_2213b8:
    // 0x2213b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2213b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2213bc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2213bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2213c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2213c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2213c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2213c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2213c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2213c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2213cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2213ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2213d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2213D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2213D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2213D0u;
        // 0x2213d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2213D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2213D8u;
}
