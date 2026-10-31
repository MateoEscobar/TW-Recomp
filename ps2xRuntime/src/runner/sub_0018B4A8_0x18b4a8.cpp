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

// Function: sub_0018B4A8
// Address: 0x18b4a8 - 0x18b648
void sub_0018B4A8_0x18b4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B4A8_0x18b4a8");
#endif

    switch (ctx->pc) {
        case 0x18b568u: goto label_18b568;
        default: break;
    }

    ctx->pc = 0x18b4a8u;

    // 0x18b4a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18b4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18b4ac: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x18b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18b4b0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x18b4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x18b4b4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x18b4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x18b4b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18b4b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b4bc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x18b4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x18b4c0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x18b4c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b4c4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18b4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x18b4c8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x18b4c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b4cc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x18b4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x18b4d0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18b4d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b4d4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x18b4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x18b4d8: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x18b4d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18b4dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18b4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18b4e0: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x18b4e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b4e4: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x18b4e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18b4e8: 0x90cc000c  lbu         $t4, 0xC($a2)
    ctx->pc = 0x18b4e8u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x18b4ec: 0x503821  addu        $a3, $v0, $s0
    ctx->pc = 0x18b4ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18b4f0: 0x90c50004  lbu         $a1, 0x4($a2)
    ctx->pc = 0x18b4f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x18b4f4: 0x90c40008  lbu         $a0, 0x8($a2)
    ctx->pc = 0x18b4f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x18b4f8: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x18b4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b4fc: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x18b4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x18b500: 0xa3a50001  sb          $a1, 0x1($sp)
    ctx->pc = 0x18b500u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x18b504: 0xc2a821  addu        $s5, $a2, $v0
    ctx->pc = 0x18b504u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x18b508: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x18b508u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b50c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18b510: 0xa3ac0003  sb          $t4, 0x3($sp)
    ctx->pc = 0x18b510u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 12));
    // 0x18b514: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18b514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b518: 0xace30024  sw          $v1, 0x24($a3)
    ctx->pc = 0x18b518u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 3));
    // 0x18b51c: 0x5400006  bltz        $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x18B51Cu;
    {
        const bool branch_taken_0x18b51c = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x18B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B51Cu;
        // 0x18b520: 0xac490018  sw          $t1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b51c) {
            ctx->pc = 0x18B538u;
            goto label_18b538;
        }
    }
    ctx->pc = 0x18B524u;
    // 0x18b524: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x18b524u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b528: 0x0  nop
    ctx->pc = 0x18b528u;
    // NOP
    // 0x18b52c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18b52cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18b530: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18B530u;
    {
        const bool branch_taken_0x18b530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b530) {
            ctx->pc = 0x18B554u;
            goto label_18b554;
        }
    }
    ctx->pc = 0x18B538u;
label_18b538:
    // 0x18b538: 0xa1842  srl         $v1, $t2, 1
    ctx->pc = 0x18b538u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x18b53c: 0x31420001  andi        $v0, $t2, 0x1
    ctx->pc = 0x18b53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x18b540: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18b540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18b544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b548: 0x0  nop
    ctx->pc = 0x18b548u;
    // NOP
    // 0x18b54c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18b54cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18b550: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x18b550u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_18b554:
    // 0x18b554: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x18b554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x18b558: 0x3421c290  ori         $at, $at, 0xC290
    ctx->pc = 0x18b558u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49808);
    // 0x18b55c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18b55cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18b560: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x18B560u;
    SET_GPR_U32(ctx, 31, 0x18B568u);
    ctx->pc = 0x18B564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B560u;
    // 0x18b564: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x18B560u, 0x18B568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B568u;
label_18b568:
    // 0x18b568: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x18b568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18b56c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x18b56cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x18b570: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x18b570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18b574: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x18b574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18b578: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x18b578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b57c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x18b57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x18b580: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18B580u;
    {
        const bool branch_taken_0x18b580 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x18B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B580u;
        // 0x18b584: 0xac74001c  sw          $s4, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b580) {
            ctx->pc = 0x18B59Cu;
            goto label_18b59c;
        }
    }
    ctx->pc = 0x18B588u;
    // 0x18b588: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x18b588u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18b58c: 0x0  nop
    ctx->pc = 0x18b58cu;
    // NOP
    // 0x18b590: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18b590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18b594: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18B594u;
    {
        const bool branch_taken_0x18b594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b594) {
            ctx->pc = 0x18B5B8u;
            goto label_18b5b8;
        }
    }
    ctx->pc = 0x18B59Cu;
label_18b59c:
    // 0x18b59c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x18b59cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x18b5a0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x18b5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x18b5a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18b5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18b5a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18b5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18b5ac: 0x0  nop
    ctx->pc = 0x18b5acu;
    // NOP
    // 0x18b5b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18b5b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18b5b4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18b5b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_18b5b8:
    // 0x18b5b8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18b5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x18b5bc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18b5bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x18b5c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b5c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b5c4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x18b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18b5c8: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x18b5c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18b5cc: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x18b5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x18b5d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18b5d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18b5d4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x18b5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b5d8: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x18B5D8u;
    {
        const bool branch_taken_0x18b5d8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x18B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B5D8u;
        // 0x18b5dc: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b5d8) {
            ctx->pc = 0x18B5F4u;
            goto label_18b5f4;
        }
    }
    ctx->pc = 0x18B5E0u;
    // 0x18b5e0: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x18b5e0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18b5e4: 0x0  nop
    ctx->pc = 0x18b5e4u;
    // NOP
    // 0x18b5e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18b5e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18b5ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18B5ECu;
    {
        const bool branch_taken_0x18b5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b5ec) {
            ctx->pc = 0x18B610u;
            goto label_18b610;
        }
    }
    ctx->pc = 0x18B5F4u;
label_18b5f4:
    // 0x18b5f4: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x18b5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x18b5f8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x18b5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x18b5fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18b5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18b600: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18b600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18b604: 0x0  nop
    ctx->pc = 0x18b604u;
    // NOP
    // 0x18b608: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18b608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18b60c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18b60cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_18b610:
    // 0x18b610: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18b610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x18b614: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18b614u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x18b618: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b61c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x18b61cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18b620: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18b620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18b624: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x18b624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b628: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x18b628u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18b62c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18b62cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b630: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x18b630u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b634: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x18b634u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b638: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18b638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b63c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x18b63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x18b640: 0x3e00008  jr          $ra
    ctx->pc = 0x18B640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B640u;
        // 0x18b644: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B648u;
}
