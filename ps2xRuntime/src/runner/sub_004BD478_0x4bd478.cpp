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

// Function: sub_004BD478
// Address: 0x4bd478 - 0x4bd5d0
void sub_004BD478_0x4bd478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BD478_0x4bd478");
#endif

    ctx->pc = 0x4bd478u;

    // 0x4bd478: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x4bd478u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4bd47c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bd47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd480: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x4bd480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x4bd484: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bd484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bd488: 0x3c0231ff  lui         $v0, 0x31FF
    ctx->pc = 0x4bd488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12799 << 16));
    // 0x4bd48c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4bd48cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4bd490: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bd490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bd494: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4bd494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4bd498: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4BD498u;
    {
        const bool branch_taken_0x4bd498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bd498) {
            ctx->pc = 0x4BD49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BD498u;
            // 0x4bd49c: 0x460c6182  mul.s       $f6, $f12, $f12 (Delay Slot)
            ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BD4C8u;
            goto label_4bd4c8;
        }
    }
    ctx->pc = 0x4BD4A0u;
    // 0x4bd4a0: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bd4a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4bd4a4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4bd4a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4bd4a8: 0x0  nop
    ctx->pc = 0x4bd4a8u;
    // NOP
    // 0x4bd4ac: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BD4ACu;
    {
        const bool branch_taken_0x4bd4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bd4ac) {
            ctx->pc = 0x4BD4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BD4ACu;
            // 0x4bd4b0: 0x460c6182  mul.s       $f6, $f12, $f12 (Delay Slot)
            ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BD4C8u;
            goto label_4bd4c8;
        }
    }
    ctx->pc = 0x4BD4B4u;
    // 0x4bd4b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4bd4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4bd4b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bd4b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bd4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4BD4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BD4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BD4C4u;
    // 0x4bd4c4: 0x0  nop
    ctx->pc = 0x4bd4c4u;
    // NOP
label_4bd4c8:
    // 0x4bd4c8: 0x3c01ad47  lui         $at, 0xAD47
    ctx->pc = 0x4bd4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44359 << 16));
    // 0x4bd4cc: 0x3421d74e  ori         $at, $at, 0xD74E
    ctx->pc = 0x4bd4ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55118);
    // 0x4bd4d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bd4d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bd4d4: 0x3c01310f  lui         $at, 0x310F
    ctx->pc = 0x4bd4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12559 << 16));
    // 0x4bd4d8: 0x342174f6  ori         $at, $at, 0x74F6
    ctx->pc = 0x4bd4d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29942);
    // 0x4bd4dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4bd4dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bd4e0: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x4bd4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x4bd4e4: 0x3c01b493  lui         $at, 0xB493
    ctx->pc = 0x4bd4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46227 << 16));
    // 0x4bd4e8: 0x3421f27c  ori         $at, $at, 0xF27C
    ctx->pc = 0x4bd4e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62076);
    // 0x4bd4ec: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x4bd4ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4bd4f0: 0x34429999  ori         $v0, $v0, 0x9999
    ctx->pc = 0x4bd4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
    // 0x4bd4f4: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x4bd4f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x4bd4f8: 0x3c0137d0  lui         $at, 0x37D0
    ctx->pc = 0x4bd4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14288 << 16));
    // 0x4bd4fc: 0x34210d01  ori         $at, $at, 0xD01
    ctx->pc = 0x4bd4fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3329);
    // 0x4bd500: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bd500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bd504: 0x3c01bab6  lui         $at, 0xBAB6
    ctx->pc = 0x4bd504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47798 << 16));
    // 0x4bd508: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x4bd508u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x4bd50c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x4bd50cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4bd510: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4bd510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4bd514: 0x3c013d2a  lui         $at, 0x3D2A
    ctx->pc = 0x4bd514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15658 << 16));
    // 0x4bd518: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x4bd518u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x4bd51c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x4bd51cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x4bd520: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4bd520u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4bd524: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x4bd524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x4bd528: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x4bd528u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x4bd52c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x4bd52cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x4bd530: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4bd530u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4bd534: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x4bd534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x4bd538: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x4bd538u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x4bd53c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x4bd53cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x4bd540: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x4bd540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x4bd544: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4BD544u;
    {
        const bool branch_taken_0x4bd544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BD548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD544u;
        // 0x4bd548: 0x46003042  mul.s       $f1, $f6, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd544) {
            ctx->pc = 0x4BD578u;
            goto label_4bd578;
        }
    }
    ctx->pc = 0x4BD54Cu;
    // 0x4bd54c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x4bd54cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x4bd550: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4bd550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4bd554: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bd554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bd558: 0x460d6082  mul.s       $f2, $f12, $f13
    ctx->pc = 0x4bd558u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x4bd55c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4bd55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4bd560: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x4bd560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4bd564: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x4bd564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x4bd568: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4bd568u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x4bd56c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4bd56cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4bd570: 0x3e00008  jr          $ra
    ctx->pc = 0x4BD570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BD574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD570u;
        // 0x4bd574: 0x46001801  sub.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BD570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BD578u;
label_4bd578:
    // 0x4bd578: 0x3c023f48  lui         $v0, 0x3F48
    ctx->pc = 0x4bd578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16200 << 16));
    // 0x4bd57c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4bd57cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4bd580: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BD580u;
    {
        const bool branch_taken_0x4bd580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD580u;
        // 0x4bd584: 0x3c02ff00  lui         $v0, 0xFF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd580) {
            ctx->pc = 0x4BD594u;
            goto label_4bd594;
        }
    }
    ctx->pc = 0x4BD588u;
    // 0x4bd588: 0x3c023e90  lui         $v0, 0x3E90
    ctx->pc = 0x4bd588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16016 << 16));
    // 0x4bd58c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4BD58Cu;
    {
        const bool branch_taken_0x4bd58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bd58c) {
            ctx->pc = 0x4BD598u;
            goto label_4bd598;
        }
    }
    ctx->pc = 0x4BD594u;
label_4bd594:
    // 0x4bd594: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4bd594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4bd598:
    // 0x4bd598: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4bd598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4bd59c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bd59cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bd5a0: 0x46013082  mul.s       $f2, $f6, $f1
    ctx->pc = 0x4bd5a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x4bd5a4: 0x460d60c2  mul.s       $f3, $f12, $f13
    ctx->pc = 0x4bd5a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x4bd5a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4bd5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4bd5ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bd5acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bd5b0: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x4bd5b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x4bd5b4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x4bd5b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4bd5b8: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x4bd5b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x4bd5bc: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x4bd5bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x4bd5c0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x4bd5c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x4bd5c4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x4bd5c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x4bd5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4BD5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BD5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD5C8u;
        // 0x4bd5cc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BD5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BD5D0u;
}
