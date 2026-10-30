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

// Function: sub_00280708
// Address: 0x280708 - 0x280d20
void sub_00280708_0x280708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280708_0x280708");
#endif

    switch (ctx->pc) {
        case 0x280730u: goto label_280730;
        case 0x280744u: goto label_280744;
        case 0x280750u: goto label_280750;
        case 0x28076cu: goto label_28076c;
        case 0x2807a0u: goto label_2807a0;
        case 0x2807d0u: goto label_2807d0;
        case 0x2807f4u: goto label_2807f4;
        case 0x280808u: goto label_280808;
        case 0x28081cu: goto label_28081c;
        case 0x28082cu: goto label_28082c;
        case 0x280840u: goto label_280840;
        case 0x280890u: goto label_280890;
        case 0x28089cu: goto label_28089c;
        case 0x28097cu: goto label_28097c;
        case 0x280994u: goto label_280994;
        case 0x2809bcu: goto label_2809bc;
        case 0x2809d4u: goto label_2809d4;
        case 0x2809f8u: goto label_2809f8;
        case 0x280a08u: goto label_280a08;
        case 0x280a4cu: goto label_280a4c;
        case 0x280a58u: goto label_280a58;
        case 0x280a6cu: goto label_280a6c;
        case 0x280a80u: goto label_280a80;
        case 0x280ad0u: goto label_280ad0;
        case 0x280ae0u: goto label_280ae0;
        case 0x280aecu: goto label_280aec;
        case 0x280af4u: goto label_280af4;
        case 0x280b08u: goto label_280b08;
        case 0x280b18u: goto label_280b18;
        case 0x280b28u: goto label_280b28;
        case 0x280b38u: goto label_280b38;
        case 0x280b54u: goto label_280b54;
        case 0x280b68u: goto label_280b68;
        case 0x280bacu: goto label_280bac;
        case 0x280bb8u: goto label_280bb8;
        case 0x280bdcu: goto label_280bdc;
        case 0x280becu: goto label_280bec;
        case 0x280bf8u: goto label_280bf8;
        case 0x280c00u: goto label_280c00;
        case 0x280c10u: goto label_280c10;
        case 0x280c28u: goto label_280c28;
        case 0x280c3cu: goto label_280c3c;
        case 0x280c64u: goto label_280c64;
        case 0x280c7cu: goto label_280c7c;
        case 0x280cb8u: goto label_280cb8;
        case 0x280cccu: goto label_280ccc;
        case 0x280cd8u: goto label_280cd8;
        case 0x280ce4u: goto label_280ce4;
        default: break;
    }

    ctx->pc = 0x280708u;

    // 0x280708: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x280708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x28070c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x28070cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x280710: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x280710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280714: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x280714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x280718: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x280718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x28071c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28071cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x280720: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x280720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x280724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x280724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x280728: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x280728u;
    SET_GPR_U32(ctx, 31, 0x280730u);
    ctx->pc = 0x28072Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280728u;
    // 0x28072c: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x280728u, 0x280730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280730u;
label_280730:
    // 0x280730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280734: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x280734u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280738: 0x8e3200d4  lw          $s2, 0xD4($s1)
    ctx->pc = 0x280738u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x28073c: 0xc089998  jal         func_226660
    ctx->pc = 0x28073Cu;
    SET_GPR_U32(ctx, 31, 0x280744u);
    ctx->pc = 0x280740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28073Cu;
    // 0x280740: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x28073Cu, 0x280744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280744u;
label_280744:
    // 0x280744: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x280744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280748: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x280748u;
    SET_GPR_U32(ctx, 31, 0x280750u);
    ctx->pc = 0x28074Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280748u;
    // 0x28074c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x280748u, 0x280750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280750u;
label_280750:
    // 0x280750: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x280750u;
    {
        const bool branch_taken_0x280750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280750) {
            ctx->pc = 0x28078Cu;
            goto label_28078c;
        }
    }
    ctx->pc = 0x280758u;
    // 0x280758: 0x16000020  bnez        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x280758u;
    {
        const bool branch_taken_0x280758 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280758u;
        // 0x28075c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280758) {
            ctx->pc = 0x2807DCu;
            goto label_2807dc;
        }
    }
    ctx->pc = 0x280760u;
    // 0x280760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280764: 0xc089998  jal         func_226660
    ctx->pc = 0x280764u;
    SET_GPR_U32(ctx, 31, 0x28076Cu);
    ctx->pc = 0x280768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280764u;
    // 0x280768: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x280764u, 0x28076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28076Cu;
label_28076c:
    // 0x28076c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x28076Cu;
    {
        const bool branch_taken_0x28076c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28076Cu;
        // 0x280770: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28076c) {
            ctx->pc = 0x2807E4u;
            goto label_2807e4;
        }
    }
    ctx->pc = 0x280774u;
    // 0x280774: 0x864200bc  lh          $v0, 0xBC($s2)
    ctx->pc = 0x280774u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x280778: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x280778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28077c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x28077Cu;
    {
        const bool branch_taken_0x28077c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28077Cu;
        // 0x280780: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28077c) {
            ctx->pc = 0x2807E4u;
            goto label_2807e4;
        }
    }
    ctx->pc = 0x280784u;
    // 0x280784: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x280784u;
    {
        const bool branch_taken_0x280784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280784) {
            ctx->pc = 0x2807E0u;
            goto label_2807e0;
        }
    }
    ctx->pc = 0x28078Cu;
label_28078c:
    // 0x28078c: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28078Cu;
    {
        const bool branch_taken_0x28078c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x280790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28078Cu;
        // 0x280790: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28078c) {
            ctx->pc = 0x2807DCu;
            goto label_2807dc;
        }
    }
    ctx->pc = 0x280794u;
    // 0x280794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280798: 0xc089998  jal         func_226660
    ctx->pc = 0x280798u;
    SET_GPR_U32(ctx, 31, 0x2807A0u);
    ctx->pc = 0x28079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280798u;
    // 0x28079c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x280798u, 0x2807A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2807A0u;
label_2807a0:
    // 0x2807a0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2807A0u;
    {
        const bool branch_taken_0x2807a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2807a0) {
            ctx->pc = 0x2807A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2807A0u;
            // 0x2807a4: 0x864300bc  lh          $v1, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2807BCu;
            goto label_2807bc;
        }
    }
    ctx->pc = 0x2807A8u;
    // 0x2807a8: 0x864200bc  lh          $v0, 0xBC($s2)
    ctx->pc = 0x2807a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x2807ac: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2807acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2807b0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2807B0u;
    {
        const bool branch_taken_0x2807b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2807b0) {
            ctx->pc = 0x2807B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2807B0u;
            // 0x2807b4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2807E0u;
            goto label_2807e0;
        }
    }
    ctx->pc = 0x2807B8u;
    // 0x2807b8: 0x864300bc  lh          $v1, 0xBC($s2)
    ctx->pc = 0x2807b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 188)));
label_2807bc:
    // 0x2807bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2807bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2807c0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2807C0u;
    {
        const bool branch_taken_0x2807c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2807C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2807C0u;
        // 0x2807c4: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2807c0) {
            ctx->pc = 0x2807E4u;
            goto label_2807e4;
        }
    }
    ctx->pc = 0x2807C8u;
    // 0x2807c8: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x2807C8u;
    SET_GPR_U32(ctx, 31, 0x2807D0u);
    ctx->pc = 0x2807CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2807C8u;
    // 0x2807cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x2807C8u, 0x2807D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2807D0u;
label_2807d0:
    // 0x2807d0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2807d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2807d4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2807D4u;
    {
        const bool branch_taken_0x2807d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2807D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2807D4u;
        // 0x2807d8: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2807d4) {
            ctx->pc = 0x2807E4u;
            goto label_2807e4;
        }
    }
    ctx->pc = 0x2807DCu;
label_2807dc:
    // 0x2807dc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2807dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2807e0:
    // 0x2807e0: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x2807e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2807e4:
    // 0x2807e4: 0x12000069  beqz        $s0, . + 4 + (0x69 << 2)
    ctx->pc = 0x2807E4u;
    {
        const bool branch_taken_0x2807e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2807E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2807E4u;
        // 0x2807e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2807e4) {
            ctx->pc = 0x28098Cu;
            goto label_28098c;
        }
    }
    ctx->pc = 0x2807ECu;
    // 0x2807ec: 0xc09edc0  jal         func_27B700
    ctx->pc = 0x2807ECu;
    SET_GPR_U32(ctx, 31, 0x2807F4u);
    ctx->pc = 0x2807F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2807ECu;
    // 0x2807f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B700u, 0x2807ECu, 0x2807F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2807F4u;
label_2807f4:
    // 0x2807f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2807F4u;
    {
        const bool branch_taken_0x2807f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2807F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2807F4u;
        // 0x2807f8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2807f4) {
            ctx->pc = 0x280800u;
            goto label_280800;
        }
    }
    ctx->pc = 0x2807FCu;
    // 0x2807fc: 0xae4200b8  sw          $v0, 0xB8($s2)
    ctx->pc = 0x2807fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 2));
label_280800:
    // 0x280800: 0xc09edca  jal         func_27B728
    ctx->pc = 0x280800u;
    SET_GPR_U32(ctx, 31, 0x280808u);
    ctx->pc = 0x280804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280800u;
    // 0x280804: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B728u, 0x280800u, 0x280808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280808u;
label_280808:
    // 0x280808: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x280808u;
    {
        const bool branch_taken_0x280808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280808u;
        // 0x28080c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280808) {
            ctx->pc = 0x280814u;
            goto label_280814;
        }
    }
    ctx->pc = 0x280810u;
    // 0x280810: 0xae4200b8  sw          $v0, 0xB8($s2)
    ctx->pc = 0x280810u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 2));
label_280814:
    // 0x280814: 0xc09eda0  jal         func_27B680
    ctx->pc = 0x280814u;
    SET_GPR_U32(ctx, 31, 0x28081Cu);
    ctx->pc = 0x280818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280814u;
    // 0x280818: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B680u, 0x280814u, 0x28081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28081Cu;
label_28081c:
    // 0x28081c: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x28081Cu;
    {
        const bool branch_taken_0x28081c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28081Cu;
        // 0x280820: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28081c) {
            ctx->pc = 0x280984u;
            goto label_280984;
        }
    }
    ctx->pc = 0x280824u;
    // 0x280824: 0xc09edaa  jal         func_27B6A8
    ctx->pc = 0x280824u;
    SET_GPR_U32(ctx, 31, 0x28082Cu);
    ctx->pc = 0x280828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280824u;
    // 0x280828: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B6A8u, 0x280824u, 0x28082Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28082Cu;
label_28082c:
    // 0x28082c: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x28082Cu;
    {
        const bool branch_taken_0x28082c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28082Cu;
        // 0x280830: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28082c) {
            ctx->pc = 0x280974u;
            goto label_280974;
        }
    }
    ctx->pc = 0x280834u;
    // 0x280834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280838: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x280838u;
    SET_GPR_U32(ctx, 31, 0x280840u);
    ctx->pc = 0x28083Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280838u;
    // 0x28083c: 0xae4200b8  sw          $v0, 0xB8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x280838u, 0x280840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280840u;
label_280840:
    // 0x280840: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x280840u;
    {
        const bool branch_taken_0x280840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280840u;
        // 0x280844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280840) {
            ctx->pc = 0x28098Cu;
            goto label_28098c;
        }
    }
    ctx->pc = 0x280848u;
    // 0x280848: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x280848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x28084c: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x28084cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x280850: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x280850u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x280854: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x280854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280858: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x280858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28085c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x28085cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x280860: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x280860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280864: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x280864u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280868: 0x0  nop
    ctx->pc = 0x280868u;
    // NOP
    // 0x28086c: 0x45000047  bc1f        . + 4 + (0x47 << 2)
    ctx->pc = 0x28086Cu;
    {
        const bool branch_taken_0x28086c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x280870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28086Cu;
        // 0x280870: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28086c) {
            ctx->pc = 0x28098Cu;
            goto label_28098c;
        }
    }
    ctx->pc = 0x280874u;
    // 0x280874: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x280874u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x280878: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x280878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x28087c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28087cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280880: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x280880u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x280884: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x280884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x280888: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x280888u;
    SET_GPR_U32(ctx, 31, 0x280890u);
    ctx->pc = 0x28088Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280888u;
    // 0x28088c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x280888u, 0x280890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280890u;
label_280890:
    // 0x280890: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x280890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x280894: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x280894u;
    SET_GPR_U32(ctx, 31, 0x28089Cu);
    ctx->pc = 0x280898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280894u;
    // 0x280898: 0xc7ad0000  lwc1        $f13, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x280894u, 0x28089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28089Cu;
label_28089c:
    // 0x28089c: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x28089cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2808a0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2808a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2808a4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2808a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2808a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2808a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2808ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2808acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2808b0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2808b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2808b4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2808b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2808b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2808b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2808bc: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2808bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2808c0: 0x0  nop
    ctx->pc = 0x2808c0u;
    // NOP
    // 0x2808c4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2808C4u;
    {
        const bool branch_taken_0x2808c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2808c4) {
            ctx->pc = 0x2808E0u;
            goto label_2808e0;
        }
    }
    ctx->pc = 0x2808CCu;
    // 0x2808cc: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2808ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2808d0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2808d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2808d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2808d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2808d8: 0x0  nop
    ctx->pc = 0x2808d8u;
    // NOP
    // 0x2808dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2808dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2808e0:
    // 0x2808e0: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x2808e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x2808e4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2808e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2808e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2808e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2808ec: 0x0  nop
    ctx->pc = 0x2808ecu;
    // NOP
    // 0x2808f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2808f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2808f4: 0x0  nop
    ctx->pc = 0x2808f4u;
    // NOP
    // 0x2808f8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2808F8u;
    {
        const bool branch_taken_0x2808f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2808f8) {
            ctx->pc = 0x280914u;
            goto label_280914;
        }
    }
    ctx->pc = 0x280900u;
    // 0x280900: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x280900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x280904: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x280904u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x280908: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x280908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28090c: 0x0  nop
    ctx->pc = 0x28090cu;
    // NOP
    // 0x280910: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x280910u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_280914:
    // 0x280914: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x280914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x280918: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x280918u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x28091c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28091cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280920: 0x46000885  abs.s       $f2, $f1
    ctx->pc = 0x280920u;
    ctx->f[2] = FPU_ABS_S(ctx->f[1]);
    // 0x280924: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x280924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280928: 0x0  nop
    ctx->pc = 0x280928u;
    // NOP
    // 0x28092c: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x28092Cu;
    {
        const bool branch_taken_0x28092c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x280930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28092Cu;
        // 0x280930: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28092c) {
            ctx->pc = 0x280984u;
            goto label_280984;
        }
    }
    ctx->pc = 0x280934u;
    // 0x280934: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x280934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x280938: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x280938u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x28093c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28093cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280940: 0x0  nop
    ctx->pc = 0x280940u;
    // NOP
    // 0x280944: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x280944u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280948: 0x0  nop
    ctx->pc = 0x280948u;
    // NOP
    // 0x28094c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x28094Cu;
    {
        const bool branch_taken_0x28094c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x280950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28094Cu;
        // 0x280950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28094c) {
            ctx->pc = 0x28098Cu;
            goto label_28098c;
        }
    }
    ctx->pc = 0x280954u;
    // 0x280954: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x280954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280958: 0x0  nop
    ctx->pc = 0x280958u;
    // NOP
    // 0x28095c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28095cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280960: 0x0  nop
    ctx->pc = 0x280960u;
    // NOP
    // 0x280964: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x280964u;
    {
        const bool branch_taken_0x280964 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x280968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280964u;
        // 0x280968: 0x24020402  addiu       $v0, $zero, 0x402 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280964) {
            ctx->pc = 0x280984u;
            goto label_280984;
        }
    }
    ctx->pc = 0x28096Cu;
    // 0x28096c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28096Cu;
    {
        const bool branch_taken_0x28096c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28096Cu;
        // 0x280970: 0x24020202  addiu       $v0, $zero, 0x202 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28096c) {
            ctx->pc = 0x280984u;
            goto label_280984;
        }
    }
    ctx->pc = 0x280974u;
label_280974:
    // 0x280974: 0xc09edde  jal         func_27B778
    ctx->pc = 0x280974u;
    SET_GPR_U32(ctx, 31, 0x28097Cu);
    ctx->pc = 0x280978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280974u;
    // 0x280978: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B778u, 0x280974u, 0x28097Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28097Cu;
label_28097c:
    // 0x28097c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28097Cu;
    {
        const bool branch_taken_0x28097c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28097Cu;
        // 0x280980: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28097c) {
            ctx->pc = 0x280988u;
            goto label_280988;
        }
    }
    ctx->pc = 0x280984u;
label_280984:
    // 0x280984: 0xae4200b8  sw          $v0, 0xB8($s2)
    ctx->pc = 0x280984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 2));
label_280988:
    // 0x280988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28098c:
    // 0x28098c: 0xc089998  jal         func_226660
    ctx->pc = 0x28098Cu;
    SET_GPR_U32(ctx, 31, 0x280994u);
    ctx->pc = 0x280990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28098Cu;
    // 0x280990: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x28098Cu, 0x280994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280994u;
label_280994:
    // 0x280994: 0x104000d6  beqz        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x280994u;
    {
        const bool branch_taken_0x280994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280994u;
        // 0x280998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280994) {
            ctx->pc = 0x280CF0u;
            goto label_280cf0;
        }
    }
    ctx->pc = 0x28099Cu;
    // 0x28099c: 0x8e4300b8  lw          $v1, 0xB8($s2)
    ctx->pc = 0x28099cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x2809a0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2809a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2809a4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2809A4u;
    {
        const bool branch_taken_0x2809a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2809A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2809A4u;
        // 0x2809a8: 0x30620780  andi        $v0, $v1, 0x780 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1920);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2809a4) {
            ctx->pc = 0x280A78u;
            goto label_280a78;
        }
    }
    ctx->pc = 0x2809ACu;
    // 0x2809ac: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2809ACu;
    {
        const bool branch_taken_0x2809ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2809ac) {
            ctx->pc = 0x280A78u;
            goto label_280a78;
        }
    }
    ctx->pc = 0x2809B4u;
    // 0x2809b4: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2809B4u;
    SET_GPR_U32(ctx, 31, 0x2809BCu);
    ctx->pc = 0x2809B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2809B4u;
    // 0x2809b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2809B4u, 0x2809BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2809BCu;
label_2809bc:
    // 0x2809bc: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x2809bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x2809c0: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2809C0u;
    {
        const bool branch_taken_0x2809c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2809c0) {
            ctx->pc = 0x280A78u;
            goto label_280a78;
        }
    }
    ctx->pc = 0x2809C8u;
    // 0x2809c8: 0x8e4500b8  lw          $a1, 0xB8($s2)
    ctx->pc = 0x2809c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x2809cc: 0xc09ea8e  jal         func_27AA38
    ctx->pc = 0x2809CCu;
    SET_GPR_U32(ctx, 31, 0x2809D4u);
    ctx->pc = 0x2809D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2809CCu;
    // 0x2809d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AA38u, 0x2809CCu, 0x2809D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2809D4u;
label_2809d4:
    // 0x2809d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2809d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2809d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2809d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2809dc: 0x8c4302b4  lw          $v1, 0x2B4($v0)
    ctx->pc = 0x2809dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5102B4u));
    // 0x2809e0: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2809E0u;
    {
        const bool branch_taken_0x2809e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2809e0) {
            ctx->pc = 0x2809E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2809E0u;
            // 0x2809e4: 0x8e4300b8  lw          $v1, 0xB8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280A1Cu;
            goto label_280a1c;
        }
    }
    ctx->pc = 0x2809E8u;
    // 0x2809e8: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2809E8u;
    {
        const bool branch_taken_0x2809e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2809ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2809E8u;
        // 0x2809ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2809e8) {
            ctx->pc = 0x280A74u;
            goto label_280a74;
        }
    }
    ctx->pc = 0x2809F0u;
    // 0x2809f0: 0xc08a658  jal         func_229960
    ctx->pc = 0x2809F0u;
    SET_GPR_U32(ctx, 31, 0x2809F8u);
    ctx->pc = 0x2809F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2809F0u;
    // 0x2809f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229960u, 0x2809F0u, 0x2809F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2809F8u;
label_2809f8:
    // 0x2809f8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2809f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2809fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2809fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a00: 0xc095142  jal         func_254508
    ctx->pc = 0x280A00u;
    SET_GPR_U32(ctx, 31, 0x280A08u);
    ctx->pc = 0x280A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280A00u;
    // 0x280a04: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x280A00u, 0x280A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280A08u;
label_280a08:
    // 0x280a08: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x280a08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280a0c: 0x0  nop
    ctx->pc = 0x280a0cu;
    // NOP
    // 0x280a10: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x280A10u;
    {
        const bool branch_taken_0x280a10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x280A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A10u;
        // 0x280a14: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a10) {
            ctx->pc = 0x280A74u;
            goto label_280a74;
        }
    }
    ctx->pc = 0x280A18u;
    // 0x280a18: 0x8e4300b8  lw          $v1, 0xB8($s2)
    ctx->pc = 0x280a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_280a1c:
    // 0x280a1c: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x280a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x280a20: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x280A20u;
    {
        const bool branch_taken_0x280a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280a20) {
            ctx->pc = 0x280A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280A20u;
            // 0x280a24: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280A38u;
            goto label_280a38;
        }
    }
    ctx->pc = 0x280A28u;
    // 0x280a28: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x280a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x280a2c: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x280a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x280a30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x280a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280a34: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x280a34u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_280a38:
    // 0x280a38: 0xa64000bc  sh          $zero, 0xBC($s2)
    ctx->pc = 0x280a38u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 188), (uint16_t)GPR_U32(ctx, 0));
    // 0x280a3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a40: 0xae4000b8  sw          $zero, 0xB8($s2)
    ctx->pc = 0x280a40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 0));
    // 0x280a44: 0xc0899a2  jal         func_226688
    ctx->pc = 0x280A44u;
    SET_GPR_U32(ctx, 31, 0x280A4Cu);
    ctx->pc = 0x280A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280A44u;
    // 0x280a48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226688u, 0x280A44u, 0x280A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280A4Cu;
label_280a4c:
    // 0x280a4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a50: 0xc089990  jal         func_226640
    ctx->pc = 0x280A50u;
    SET_GPR_U32(ctx, 31, 0x280A58u);
    ctx->pc = 0x280A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280A50u;
    // 0x280a54: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x280A50u, 0x280A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280A58u;
label_280a58:
    // 0x280a58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x280a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x280a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a64: 0xc099118  jal         func_264460
    ctx->pc = 0x280A64u;
    SET_GPR_U32(ctx, 31, 0x280A6Cu);
    ctx->pc = 0x280A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280A64u;
    // 0x280a68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264460u, 0x280A64u, 0x280A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280A6Cu;
label_280a6c:
    // 0x280a6c: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x280A6Cu;
    {
        const bool branch_taken_0x280a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A6Cu;
        // 0x280a70: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a6c) {
            ctx->pc = 0x280CF4u;
            goto label_280cf4;
        }
    }
    ctx->pc = 0x280A74u;
label_280a74:
    // 0x280a74: 0xae4200b8  sw          $v0, 0xB8($s2)
    ctx->pc = 0x280a74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 2));
label_280a78:
    // 0x280a78: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x280A78u;
    SET_GPR_U32(ctx, 31, 0x280A80u);
    ctx->pc = 0x280A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280A78u;
    // 0x280a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x280A78u, 0x280A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280A80u;
label_280a80:
    // 0x280a80: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x280A80u;
    {
        const bool branch_taken_0x280a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A80u;
        // 0x280a84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a80) {
            ctx->pc = 0x280B70u;
            goto label_280b70;
        }
    }
    ctx->pc = 0x280A88u;
    // 0x280a88: 0x8e450068  lw          $a1, 0x68($s2)
    ctx->pc = 0x280a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x280a8c: 0x8e4400b8  lw          $a0, 0xB8($s2)
    ctx->pc = 0x280a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x280a90: 0x14820096  bne         $a0, $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x280A90u;
    {
        const bool branch_taken_0x280a90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x280A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A90u;
        // 0x280a94: 0x24b30001  addiu       $s3, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a90) {
            ctx->pc = 0x280CECu;
            goto label_280cec;
        }
    }
    ctx->pc = 0x280A98u;
    // 0x280a98: 0x864300bc  lh          $v1, 0xBC($s2)
    ctx->pc = 0x280a98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x280a9c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x280a9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x280aa0: 0x10400093  beqz        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x280AA0u;
    {
        const bool branch_taken_0x280aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280AA0u;
        // 0x280aa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280aa0) {
            ctx->pc = 0x280CF0u;
            goto label_280cf0;
        }
    }
    ctx->pc = 0x280AA8u;
    // 0x280aa8: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280AA8u;
    {
        const bool branch_taken_0x280aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x280aa8) {
            ctx->pc = 0x280AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280AA8u;
            // 0x280aac: 0x822201b0  lb          $v0, 0x1B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280ABCu;
            goto label_280abc;
        }
    }
    ctx->pc = 0x280AB0u;
    // 0x280ab0: 0xa64000bc  sh          $zero, 0xBC($s2)
    ctx->pc = 0x280ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 188), (uint16_t)GPR_U32(ctx, 0));
    // 0x280ab4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x280ab4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280ab8: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x280ab8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_280abc:
    // 0x280abc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x280abcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x280ac0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x280AC0u;
    {
        const bool branch_taken_0x280ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280ac0) {
            ctx->pc = 0x280AECu;
            goto label_280aec;
        }
    }
    ctx->pc = 0x280AC8u;
    // 0x280ac8: 0xc089f22  jal         func_227C88
    ctx->pc = 0x280AC8u;
    SET_GPR_U32(ctx, 31, 0x280AD0u);
    ctx->pc = 0x280ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280AC8u;
    // 0x280acc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C88u, 0x280AC8u, 0x280AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280AD0u;
label_280ad0:
    // 0x280ad0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x280AD0u;
    {
        const bool branch_taken_0x280ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280AD0u;
        // 0x280ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ad0) {
            ctx->pc = 0x280AECu;
            goto label_280aec;
        }
    }
    ctx->pc = 0x280AD8u;
    // 0x280ad8: 0xc09e92c  jal         func_27A4B0
    ctx->pc = 0x280AD8u;
    SET_GPR_U32(ctx, 31, 0x280AE0u);
    ctx->pc = 0x280ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280AD8u;
    // 0x280adc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A4B0u, 0x280AD8u, 0x280AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280AE0u;
label_280ae0:
    // 0x280ae0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x280ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280ae4: 0xc089b34  jal         func_226CD0
    ctx->pc = 0x280AE4u;
    SET_GPR_U32(ctx, 31, 0x280AECu);
    ctx->pc = 0x280AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280AE4u;
    // 0x280ae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226CD0u, 0x280AE4u, 0x280AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280AECu;
label_280aec:
    // 0x280aec: 0xc089b98  jal         func_226E60
    ctx->pc = 0x280AECu;
    SET_GPR_U32(ctx, 31, 0x280AF4u);
    ctx->pc = 0x280AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280AECu;
    // 0x280af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x280AECu, 0x280AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280AF4u;
label_280af4:
    // 0x280af4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x280af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280af8: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x280AF8u;
    {
        const bool branch_taken_0x280af8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x280AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280AF8u;
        // 0x280afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280af8) {
            ctx->pc = 0x280B5Cu;
            goto label_280b5c;
        }
    }
    ctx->pc = 0x280B00u;
    // 0x280b00: 0xc089480  jal         func_225200
    ctx->pc = 0x280B00u;
    SET_GPR_U32(ctx, 31, 0x280B08u);
    ctx->pc = 0x280B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280B00u;
    // 0x280b04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225200u, 0x280B00u, 0x280B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280B08u;
label_280b08:
    // 0x280b08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x280B08u;
    {
        const bool branch_taken_0x280b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B08u;
        // 0x280b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b08) {
            ctx->pc = 0x280B20u;
            goto label_280b20;
        }
    }
    ctx->pc = 0x280B10u;
    // 0x280b10: 0xc089428  jal         func_2250A0
    ctx->pc = 0x280B10u;
    SET_GPR_U32(ctx, 31, 0x280B18u);
    ctx->pc = 0x280B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280B10u;
    // 0x280b14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2250A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2250A0u, 0x280B10u, 0x280B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280B18u;
label_280b18:
    // 0x280b18: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x280B18u;
    {
        const bool branch_taken_0x280b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B18u;
        // 0x280b1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b18) {
            ctx->pc = 0x280B60u;
            goto label_280b60;
        }
    }
    ctx->pc = 0x280B20u;
label_280b20:
    // 0x280b20: 0xc08a170  jal         func_2285C0
    ctx->pc = 0x280B20u;
    SET_GPR_U32(ctx, 31, 0x280B28u);
    ctx->pc = 0x280B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280B20u;
    // 0x280b24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2285C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2285C0u, 0x280B20u, 0x280B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280B28u;
label_280b28:
    // 0x280b28: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x280B28u;
    {
        const bool branch_taken_0x280b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B28u;
        // 0x280b2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b28) {
            ctx->pc = 0x280B60u;
            goto label_280b60;
        }
    }
    ctx->pc = 0x280B30u;
    // 0x280b30: 0xc08a17e  jal         func_2285F8
    ctx->pc = 0x280B30u;
    SET_GPR_U32(ctx, 31, 0x280B38u);
    ctx->pc = 0x280B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280B30u;
    // 0x280b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2285F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2285F8u, 0x280B30u, 0x280B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280B38u;
label_280b38:
    // 0x280b38: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x280B38u;
    {
        const bool branch_taken_0x280b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B38u;
        // 0x280b3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b38) {
            ctx->pc = 0x280B60u;
            goto label_280b60;
        }
    }
    ctx->pc = 0x280B40u;
    // 0x280b40: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x280b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x280b44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x280b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280b48: 0xa44000bc  sh          $zero, 0xBC($v0)
    ctx->pc = 0x280b48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 188), (uint16_t)GPR_U32(ctx, 0));
    // 0x280b4c: 0xc098682  jal         func_261A08
    ctx->pc = 0x280B4Cu;
    SET_GPR_U32(ctx, 31, 0x280B54u);
    ctx->pc = 0x280B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280B4Cu;
    // 0x280b50: 0x8e460074  lw          $a2, 0x74($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261A08u, 0x280B4Cu, 0x280B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280B54u;
label_280b54:
    // 0x280b54: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x280B54u;
    {
        const bool branch_taken_0x280b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B54u;
        // 0x280b58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b54) {
            ctx->pc = 0x280CF0u;
            goto label_280cf0;
        }
    }
    ctx->pc = 0x280B5Cu;
label_280b5c:
    // 0x280b5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_280b60:
    // 0x280b60: 0xc09896a  jal         func_2625A8
    ctx->pc = 0x280B60u;
    SET_GPR_U32(ctx, 31, 0x280B68u);
    ctx->pc = 0x280B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280B60u;
    // 0x280b64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2625A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2625A8u, 0x280B60u, 0x280B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280B68u;
label_280b68:
    // 0x280b68: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x280B68u;
    {
        const bool branch_taken_0x280b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B68u;
        // 0x280b6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b68) {
            ctx->pc = 0x280CF0u;
            goto label_280cf0;
        }
    }
    ctx->pc = 0x280B70u;
label_280b70:
    // 0x280b70: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x280b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x280b74: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x280b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x280b78: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x280B78u;
    {
        const bool branch_taken_0x280b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B78u;
        // 0x280b7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b78) {
            ctx->pc = 0x280CF0u;
            goto label_280cf0;
        }
    }
    ctx->pc = 0x280B80u;
    // 0x280b80: 0x864200bc  lh          $v0, 0xBC($s2)
    ctx->pc = 0x280b80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x280b84: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x280b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x280b88: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x280B88u;
    {
        const bool branch_taken_0x280b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B88u;
        // 0x280b8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b88) {
            ctx->pc = 0x280CF0u;
            goto label_280cf0;
        }
    }
    ctx->pc = 0x280B90u;
    // 0x280b90: 0xde4200b8  ld          $v0, 0xB8($s2)
    ctx->pc = 0x280b90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x280b94: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x280b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
    // 0x280b98: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x280b98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x280b9c: 0x2983c  dsll32      $s3, $v0, 0
    ctx->pc = 0x280b9cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 0));
    // 0x280ba0: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x280ba0u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x280ba4: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x280BA4u;
    SET_GPR_U32(ctx, 31, 0x280BACu);
    ctx->pc = 0x280BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280BA4u;
    // 0x280ba8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x280BA4u, 0x280BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280BACu;
label_280bac:
    // 0x280bac: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x280bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x280bb0: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x280BB0u;
    {
        const bool branch_taken_0x280bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x280BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280BB0u;
        // 0x280bb4: 0x2670000f  addiu       $s0, $s3, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280bb0) {
            ctx->pc = 0x280C20u;
            goto label_280c20;
        }
    }
    ctx->pc = 0x280BB8u;
label_280bb8:
    // 0x280bb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x280bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280bbc: 0x1262000e  beq         $s3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x280BBCu;
    {
        const bool branch_taken_0x280bbc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x280bbc) {
            ctx->pc = 0x280BF8u;
            goto label_280bf8;
        }
    }
    ctx->pc = 0x280BC4u;
    // 0x280bc4: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x280bc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x280bc8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x280bc8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x280bcc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x280BCCu;
    {
        const bool branch_taken_0x280bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280bcc) {
            ctx->pc = 0x280BF8u;
            goto label_280bf8;
        }
    }
    ctx->pc = 0x280BD4u;
    // 0x280bd4: 0xc089f22  jal         func_227C88
    ctx->pc = 0x280BD4u;
    SET_GPR_U32(ctx, 31, 0x280BDCu);
    ctx->pc = 0x280BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280BD4u;
    // 0x280bd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C88u, 0x280BD4u, 0x280BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280BDCu;
label_280bdc:
    // 0x280bdc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x280BDCu;
    {
        const bool branch_taken_0x280bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280BDCu;
        // 0x280be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280bdc) {
            ctx->pc = 0x280BF8u;
            goto label_280bf8;
        }
    }
    ctx->pc = 0x280BE4u;
    // 0x280be4: 0xc09e92c  jal         func_27A4B0
    ctx->pc = 0x280BE4u;
    SET_GPR_U32(ctx, 31, 0x280BECu);
    ctx->pc = 0x280BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280BE4u;
    // 0x280be8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A4B0u, 0x280BE4u, 0x280BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280BECu;
label_280bec:
    // 0x280bec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x280becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280bf0: 0xc089b34  jal         func_226CD0
    ctx->pc = 0x280BF0u;
    SET_GPR_U32(ctx, 31, 0x280BF8u);
    ctx->pc = 0x280BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280BF0u;
    // 0x280bf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226CD0u, 0x280BF0u, 0x280BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280BF8u;
label_280bf8:
    // 0x280bf8: 0xc089b98  jal         func_226E60
    ctx->pc = 0x280BF8u;
    SET_GPR_U32(ctx, 31, 0x280C00u);
    ctx->pc = 0x280BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280BF8u;
    // 0x280bfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x280BF8u, 0x280C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280C00u;
label_280c00:
    // 0x280c00: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x280C00u;
    {
        const bool branch_taken_0x280c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C00u;
        // 0x280c04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c00) {
            ctx->pc = 0x280CD8u;
            goto label_280cd8;
        }
    }
    ctx->pc = 0x280C08u;
    // 0x280c08: 0xc089480  jal         func_225200
    ctx->pc = 0x280C08u;
    SET_GPR_U32(ctx, 31, 0x280C10u);
    ctx->pc = 0x280C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280C08u;
    // 0x280c0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225200u, 0x280C08u, 0x280C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280C10u;
label_280c10:
    // 0x280c10: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x280C10u;
    {
        const bool branch_taken_0x280c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C10u;
        // 0x280c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c10) {
            ctx->pc = 0x280CF0u;
            goto label_280cf0;
        }
    }
    ctx->pc = 0x280C18u;
    // 0x280c18: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x280C18u;
    {
        const bool branch_taken_0x280c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C18u;
        // 0x280c1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c18) {
            ctx->pc = 0x280CDCu;
            goto label_280cdc;
        }
    }
    ctx->pc = 0x280C20u;
label_280c20:
    // 0x280c20: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x280C20u;
    SET_GPR_U32(ctx, 31, 0x280C28u);
    ctx->pc = 0x280C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280C20u;
    // 0x280c24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x280C20u, 0x280C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280C28u;
label_280c28:
    // 0x280c28: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x280c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x280c2c: 0x1043ffe2  beq         $v0, $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x280C2Cu;
    {
        const bool branch_taken_0x280c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x280C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C2Cu;
        // 0x280c30: 0x2670000d  addiu       $s0, $s3, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c2c) {
            ctx->pc = 0x280BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280bb8;
        }
    }
    ctx->pc = 0x280C34u;
    // 0x280c34: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x280C34u;
    SET_GPR_U32(ctx, 31, 0x280C3Cu);
    ctx->pc = 0x280C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280C34u;
    // 0x280c38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x280C34u, 0x280C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280C3Cu;
label_280c3c:
    // 0x280c3c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x280c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x280c40: 0x1443002b  bne         $v0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x280C40u;
    {
        const bool branch_taken_0x280c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x280C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C40u;
        // 0x280c44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c40) {
            ctx->pc = 0x280CF0u;
            goto label_280cf0;
        }
    }
    ctx->pc = 0x280C48u;
    // 0x280c48: 0xde4200b8  ld          $v0, 0xB8($s2)
    ctx->pc = 0x280c48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x280c4c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x280c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x280c50: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x280c50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x280c54: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x280c54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x280c58: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x280c58u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x280c5c: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x280C5Cu;
    SET_GPR_U32(ctx, 31, 0x280C64u);
    ctx->pc = 0x280C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280C5Cu;
    // 0x280c60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x280C5Cu, 0x280C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280C64u;
label_280c64:
    // 0x280c64: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x280c64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x280c68: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x280C68u;
    {
        const bool branch_taken_0x280c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x280C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C68u;
        // 0x280c6c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c68) {
            ctx->pc = 0x280C80u;
            goto label_280c80;
        }
    }
    ctx->pc = 0x280C70u;
    // 0x280c70: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x280c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280c74: 0xc0cd526  jal         func_335498
    ctx->pc = 0x280C74u;
    SET_GPR_U32(ctx, 31, 0x280C7Cu);
    ctx->pc = 0x280C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280C74u;
    // 0x280c78: 0x2484b898  addiu       $a0, $a0, -0x4768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x280C74u, 0x280C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280C7Cu;
label_280c7c:
    // 0x280c7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x280c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_280c80:
    // 0x280c80: 0x13800a  movz        $s0, $zero, $s3
    ctx->pc = 0x280c80u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x280c84: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x280c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x280c88: 0x26030011  addiu       $v1, $s0, 0x11
    ctx->pc = 0x280c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x280c8c: 0x132040  sll         $a0, $s3, 1
    ctx->pc = 0x280c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x280c90: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x280c90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x280c94: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x280c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x280c98: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x280C98u;
    {
        const bool branch_taken_0x280c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C98u;
        // 0x280c9c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c98) {
            ctx->pc = 0x280CBCu;
            goto label_280cbc;
        }
    }
    ctx->pc = 0x280CA0u;
    // 0x280ca0: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x280ca0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x280ca4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x280ca4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x280ca8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280CA8u;
    {
        const bool branch_taken_0x280ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280ca8) {
            ctx->pc = 0x280CBCu;
            goto label_280cbc;
        }
    }
    ctx->pc = 0x280CB0u;
    // 0x280cb0: 0xc089f22  jal         func_227C88
    ctx->pc = 0x280CB0u;
    SET_GPR_U32(ctx, 31, 0x280CB8u);
    ctx->pc = 0x280CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280CB0u;
    // 0x280cb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C88u, 0x280CB0u, 0x280CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280CB8u;
label_280cb8:
    // 0x280cb8: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x280cb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_280cbc:
    // 0x280cbc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x280CBCu;
    {
        const bool branch_taken_0x280cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x280CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280CBCu;
        // 0x280cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280cbc) {
            ctx->pc = 0x280CD8u;
            goto label_280cd8;
        }
    }
    ctx->pc = 0x280CC4u;
    // 0x280cc4: 0xc09e92c  jal         func_27A4B0
    ctx->pc = 0x280CC4u;
    SET_GPR_U32(ctx, 31, 0x280CCCu);
    ctx->pc = 0x280CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280CC4u;
    // 0x280cc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A4B0u, 0x280CC4u, 0x280CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280CCCu;
label_280ccc:
    // 0x280ccc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x280cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280cd0: 0xc089b34  jal         func_226CD0
    ctx->pc = 0x280CD0u;
    SET_GPR_U32(ctx, 31, 0x280CD8u);
    ctx->pc = 0x280CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280CD0u;
    // 0x280cd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226CD0u, 0x280CD0u, 0x280CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280CD8u;
label_280cd8:
    // 0x280cd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_280cdc:
    // 0x280cdc: 0xc09896a  jal         func_2625A8
    ctx->pc = 0x280CDCu;
    SET_GPR_U32(ctx, 31, 0x280CE4u);
    ctx->pc = 0x280CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280CDCu;
    // 0x280ce0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2625A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2625A8u, 0x280CDCu, 0x280CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280CE4u;
label_280ce4:
    // 0x280ce4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x280CE4u;
    {
        const bool branch_taken_0x280ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280CE4u;
        // 0x280ce8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ce4) {
            ctx->pc = 0x280CF0u;
            goto label_280cf0;
        }
    }
    ctx->pc = 0x280CECu;
label_280cec:
    // 0x280cec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x280cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280cf0:
    // 0x280cf0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x280cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_280cf4:
    // 0x280cf4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x280cf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x280cf8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x280cf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x280cfc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x280cfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280d00: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x280d00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280d04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x280d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280d08: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x280d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x280d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x280D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280D0Cu;
        // 0x280d10: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280D14u;
    // 0x280d14: 0x0  nop
    ctx->pc = 0x280d14u;
    // NOP
    // 0x280d18: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x280d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x280d1c: 0x0  nop
    ctx->pc = 0x280d1cu;
    // NOP
    ctx->pc = 0x280d20u;
}
