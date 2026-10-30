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

// Function: sub_0018D450
// Address: 0x18d450 - 0x18d5f8
void sub_0018D450_0x18d450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D450_0x18d450");
#endif

    switch (ctx->pc) {
        case 0x18d4c0u: goto label_18d4c0;
        case 0x18d4e4u: goto label_18d4e4;
        case 0x18d514u: goto label_18d514;
        case 0x18d52cu: goto label_18d52c;
        case 0x18d544u: goto label_18d544;
        case 0x18d54cu: goto label_18d54c;
        case 0x18d55cu: goto label_18d55c;
        case 0x18d574u: goto label_18d574;
        case 0x18d590u: goto label_18d590;
        case 0x18d5c0u: goto label_18d5c0;
        case 0x18d5d8u: goto label_18d5d8;
        default: break;
    }

    ctx->pc = 0x18d450u;

    // 0x18d450: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18d450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18d454: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x18d454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x18d458: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18d458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x18d45c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18d45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18d460: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x18d460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d464: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x18d464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x18d468: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18d468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d46c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x18d46cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x18d470: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x18d470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18d474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18d478: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x18D478u;
    {
        const bool branch_taken_0x18d478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D478u;
        // 0x18d47c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d478) {
            ctx->pc = 0x18D5D8u;
            goto label_18d5d8;
        }
    }
    ctx->pc = 0x18D480u;
    // 0x18d480: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x18d480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x18d484: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x18d484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18d488: 0x24422f70  addiu       $v0, $v0, 0x2F70
    ctx->pc = 0x18d488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12144));
    // 0x18d48c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18d48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18d490: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x18d490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18d494: 0x800008  jr          $a0
    ctx->pc = 0x18D494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D49Cu: goto label_18d49c;
            case 0x18D4C8u: goto label_18d4c8;
            case 0x18D534u: goto label_18d534;
            case 0x18D564u: goto label_18d564;
            case 0x18D57Cu: goto label_18d57c;
            case 0x18D59Cu: goto label_18d59c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D494u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x18D49Cu;
label_18d49c:
    // 0x18d49c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x18d49cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x18d4a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d4a4: 0xac620174  sw          $v0, 0x174($v1)
    ctx->pc = 0x18d4a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x510174u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510174u, _value); } while (0);
    // 0x18d4a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d4ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18d4acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x18d4b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18d4b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d4b4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x18d4b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d4b8: 0xc063318  jal         func_18CC60
    ctx->pc = 0x18D4B8u;
    SET_GPR_U32(ctx, 31, 0x18D4C0u);
    ctx->pc = 0x18D4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D4B8u;
    // 0x18d4bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CC60u, 0x18D4B8u, 0x18D4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D4C0u;
label_18d4c0:
    // 0x18d4c0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x18D4C0u;
    {
        const bool branch_taken_0x18d4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4C0u;
        // 0x18d4c4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4c0) {
            ctx->pc = 0x18D5DCu;
            goto label_18d5dc;
        }
    }
    ctx->pc = 0x18D4C8u;
label_18d4c8:
    // 0x18d4c8: 0x96240212  lhu         $a0, 0x212($s1)
    ctx->pc = 0x18d4c8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 530)));
    // 0x18d4cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x18d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x18d4d0: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x18d4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x18d4d4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18d4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18d4d8: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x18d4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    // 0x18d4dc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x18D4DCu;
    SET_GPR_U32(ctx, 31, 0x18D4E4u);
    ctx->pc = 0x18D4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D4DCu;
    // 0x18d4e0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x18D4DCu, 0x18D4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D4E4u;
label_18d4e4:
    // 0x18d4e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d4e8: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x18D4E8u;
    {
        const bool branch_taken_0x18d4e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4E8u;
        // 0x18d4ec: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4e8) {
            ctx->pc = 0x18D514u;
            goto label_18d514;
        }
    }
    ctx->pc = 0x18D4F0u;
    // 0x18d4f0: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x18d4f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x18d4f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18d4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18d4f8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x18d4f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18d4fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d500: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18d500u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18d504: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18D504u;
    {
        const bool branch_taken_0x18d504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d504) {
            ctx->pc = 0x18D508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D504u;
            // 0x18d508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D518u;
            goto label_18d518;
        }
    }
    ctx->pc = 0x18D50Cu;
    // 0x18d50c: 0xc08dbee  jal         func_236FB8
    ctx->pc = 0x18D50Cu;
    SET_GPR_U32(ctx, 31, 0x18D514u);
    ctx->pc = 0x18D510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D50Cu;
    // 0x18d510: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FB8u, 0x18D50Cu, 0x18D514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D514u;
label_18d514:
    // 0x18d514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d518:
    // 0x18d518: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18d518u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x18d51c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18d51cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d520: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x18d520u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d524: 0xc063318  jal         func_18CC60
    ctx->pc = 0x18D524u;
    SET_GPR_U32(ctx, 31, 0x18D52Cu);
    ctx->pc = 0x18D528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D524u;
    // 0x18d528: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CC60u, 0x18D524u, 0x18D52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D52Cu;
label_18d52c:
    // 0x18d52c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x18D52Cu;
    {
        const bool branch_taken_0x18d52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D52Cu;
        // 0x18d530: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d52c) {
            ctx->pc = 0x18D5DCu;
            goto label_18d5dc;
        }
    }
    ctx->pc = 0x18D534u;
label_18d534:
    // 0x18d534: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x18d534u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x18d538: 0x26100840  addiu       $s0, $s0, 0x840
    ctx->pc = 0x18d538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
    // 0x18d53c: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x18D53Cu;
    SET_GPR_U32(ctx, 31, 0x18D544u);
    ctx->pc = 0x18D540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D53Cu;
    // 0x18d540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x18D53Cu, 0x18D544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D544u;
label_18d544:
    // 0x18d544: 0xc06c7ce  jal         func_1B1F38
    ctx->pc = 0x18D544u;
    SET_GPR_U32(ctx, 31, 0x18D54Cu);
    ctx->pc = 0x18D548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D544u;
    // 0x18d548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1F38u, 0x18D544u, 0x18D54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D54Cu;
label_18d54c:
    // 0x18d54c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d550: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18d550u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x18d554: 0xc06361a  jal         func_18D868
    ctx->pc = 0x18D554u;
    SET_GPR_U32(ctx, 31, 0x18D55Cu);
    ctx->pc = 0x18D558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D554u;
    // 0x18d558: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D868u, 0x18D554u, 0x18D55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D55Cu;
label_18d55c:
    // 0x18d55c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x18D55Cu;
    {
        const bool branch_taken_0x18d55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D55Cu;
        // 0x18d560: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d55c) {
            ctx->pc = 0x18D5DCu;
            goto label_18d5dc;
        }
    }
    ctx->pc = 0x18D564u;
label_18d564:
    // 0x18d564: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d568: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18d568u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x18d56c: 0xc06361a  jal         func_18D868
    ctx->pc = 0x18D56Cu;
    SET_GPR_U32(ctx, 31, 0x18D574u);
    ctx->pc = 0x18D570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D56Cu;
    // 0x18d570: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D868u, 0x18D56Cu, 0x18D574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D574u;
label_18d574:
    // 0x18d574: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x18D574u;
    {
        const bool branch_taken_0x18d574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D574u;
        // 0x18d578: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d574) {
            ctx->pc = 0x18D5DCu;
            goto label_18d5dc;
        }
    }
    ctx->pc = 0x18D57Cu;
label_18d57c:
    // 0x18d57c: 0xc62c0088  lwc1        $f12, 0x88($s1)
    ctx->pc = 0x18d57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18d580: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18d580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d588: 0xc063416  jal         func_18D058
    ctx->pc = 0x18D588u;
    SET_GPR_U32(ctx, 31, 0x18D590u);
    ctx->pc = 0x18D58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D588u;
    // 0x18d58c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D058u, 0x18D588u, 0x18D590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D590u;
label_18d590:
    // 0x18d590: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d594: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x18D594u;
    {
        const bool branch_taken_0x18d594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D594u;
        // 0x18d598: 0xa6220210  sh          $v0, 0x210($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 528), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d594) {
            ctx->pc = 0x18D5D8u;
            goto label_18d5d8;
        }
    }
    ctx->pc = 0x18D59Cu;
label_18d59c:
    // 0x18d59c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18d59cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18d5a0: 0x0  nop
    ctx->pc = 0x18d5a0u;
    // NOP
    // 0x18d5a4: 0x460ca032  c.eq.s      $f20, $f12
    ctx->pc = 0x18d5a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d5a8: 0x0  nop
    ctx->pc = 0x18d5a8u;
    // NOP
    // 0x18d5ac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18D5ACu;
    {
        const bool branch_taken_0x18d5ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5ACu;
        // 0x18d5b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d5ac) {
            ctx->pc = 0x18D5C8u;
            goto label_18d5c8;
        }
    }
    ctx->pc = 0x18D5B4u;
    // 0x18d5b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18d5b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d5b8: 0xc063416  jal         func_18D058
    ctx->pc = 0x18D5B8u;
    SET_GPR_U32(ctx, 31, 0x18D5C0u);
    ctx->pc = 0x18D5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5B8u;
    // 0x18d5bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D058u, 0x18D5B8u, 0x18D5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5C0u;
label_18d5c0:
    // 0x18d5c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18D5C0u;
    {
        const bool branch_taken_0x18d5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5C0u;
        // 0x18d5c4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d5c0) {
            ctx->pc = 0x18D5DCu;
            goto label_18d5dc;
        }
    }
    ctx->pc = 0x18D5C8u;
label_18d5c8:
    // 0x18d5c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18d5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d5cc: 0xc48c008c  lwc1        $f12, 0x8C($a0)
    ctx->pc = 0x18d5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18d5d0: 0xc063416  jal         func_18D058
    ctx->pc = 0x18D5D0u;
    SET_GPR_U32(ctx, 31, 0x18D5D8u);
    ctx->pc = 0x18D5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5D0u;
    // 0x18d5d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D058u, 0x18D5D0u, 0x18D5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D5D8u;
label_18d5d8:
    // 0x18d5d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18d5d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18d5dc:
    // 0x18d5dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18d5dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d5e0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x18d5e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d5e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18d5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d5e8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x18d5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18d5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x18D5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5ECu;
        // 0x18d5f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D5F4u;
    // 0x18d5f4: 0x0  nop
    ctx->pc = 0x18d5f4u;
    // NOP
    ctx->pc = 0x18d5f8u;
}
