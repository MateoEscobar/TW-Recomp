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

// Function: sub_00417028
// Address: 0x417028 - 0x4171e8
void sub_00417028_0x417028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417028_0x417028");
#endif

    switch (ctx->pc) {
        case 0x417028u: goto label_417028;
        case 0x41702cu: goto label_41702c;
        case 0x417030u: goto label_417030;
        case 0x417034u: goto label_417034;
        case 0x417038u: goto label_417038;
        case 0x41703cu: goto label_41703c;
        case 0x417040u: goto label_417040;
        case 0x417044u: goto label_417044;
        case 0x417048u: goto label_417048;
        case 0x41704cu: goto label_41704c;
        case 0x417050u: goto label_417050;
        case 0x417054u: goto label_417054;
        case 0x417058u: goto label_417058;
        case 0x41705cu: goto label_41705c;
        case 0x417060u: goto label_417060;
        case 0x417064u: goto label_417064;
        case 0x417068u: goto label_417068;
        case 0x41706cu: goto label_41706c;
        case 0x417070u: goto label_417070;
        case 0x417074u: goto label_417074;
        case 0x417078u: goto label_417078;
        case 0x41707cu: goto label_41707c;
        case 0x417080u: goto label_417080;
        case 0x417084u: goto label_417084;
        case 0x417088u: goto label_417088;
        case 0x41708cu: goto label_41708c;
        case 0x417090u: goto label_417090;
        case 0x417094u: goto label_417094;
        case 0x417098u: goto label_417098;
        case 0x41709cu: goto label_41709c;
        case 0x4170a0u: goto label_4170a0;
        case 0x4170a4u: goto label_4170a4;
        case 0x4170a8u: goto label_4170a8;
        case 0x4170acu: goto label_4170ac;
        case 0x4170b0u: goto label_4170b0;
        case 0x4170b4u: goto label_4170b4;
        case 0x4170b8u: goto label_4170b8;
        case 0x4170bcu: goto label_4170bc;
        case 0x4170c0u: goto label_4170c0;
        case 0x4170c4u: goto label_4170c4;
        case 0x4170c8u: goto label_4170c8;
        case 0x4170ccu: goto label_4170cc;
        case 0x4170d0u: goto label_4170d0;
        case 0x4170d4u: goto label_4170d4;
        case 0x4170d8u: goto label_4170d8;
        case 0x4170dcu: goto label_4170dc;
        case 0x4170e0u: goto label_4170e0;
        case 0x4170e4u: goto label_4170e4;
        case 0x4170e8u: goto label_4170e8;
        case 0x4170ecu: goto label_4170ec;
        case 0x4170f0u: goto label_4170f0;
        case 0x4170f4u: goto label_4170f4;
        case 0x4170f8u: goto label_4170f8;
        case 0x4170fcu: goto label_4170fc;
        case 0x417100u: goto label_417100;
        case 0x417104u: goto label_417104;
        case 0x417108u: goto label_417108;
        case 0x41710cu: goto label_41710c;
        case 0x417110u: goto label_417110;
        case 0x417114u: goto label_417114;
        case 0x417118u: goto label_417118;
        case 0x41711cu: goto label_41711c;
        case 0x417120u: goto label_417120;
        case 0x417124u: goto label_417124;
        case 0x417128u: goto label_417128;
        case 0x41712cu: goto label_41712c;
        case 0x417130u: goto label_417130;
        case 0x417134u: goto label_417134;
        case 0x417138u: goto label_417138;
        case 0x41713cu: goto label_41713c;
        case 0x417140u: goto label_417140;
        case 0x417144u: goto label_417144;
        case 0x417148u: goto label_417148;
        case 0x41714cu: goto label_41714c;
        case 0x417150u: goto label_417150;
        case 0x417154u: goto label_417154;
        case 0x417158u: goto label_417158;
        case 0x41715cu: goto label_41715c;
        case 0x417160u: goto label_417160;
        case 0x417164u: goto label_417164;
        case 0x417168u: goto label_417168;
        case 0x41716cu: goto label_41716c;
        case 0x417170u: goto label_417170;
        case 0x417174u: goto label_417174;
        case 0x417178u: goto label_417178;
        case 0x41717cu: goto label_41717c;
        case 0x417180u: goto label_417180;
        case 0x417184u: goto label_417184;
        case 0x417188u: goto label_417188;
        case 0x41718cu: goto label_41718c;
        case 0x417190u: goto label_417190;
        case 0x417194u: goto label_417194;
        case 0x417198u: goto label_417198;
        case 0x41719cu: goto label_41719c;
        case 0x4171a0u: goto label_4171a0;
        case 0x4171a4u: goto label_4171a4;
        case 0x4171a8u: goto label_4171a8;
        case 0x4171acu: goto label_4171ac;
        case 0x4171b0u: goto label_4171b0;
        case 0x4171b4u: goto label_4171b4;
        case 0x4171b8u: goto label_4171b8;
        case 0x4171bcu: goto label_4171bc;
        case 0x4171c0u: goto label_4171c0;
        case 0x4171c4u: goto label_4171c4;
        case 0x4171c8u: goto label_4171c8;
        case 0x4171ccu: goto label_4171cc;
        case 0x4171d0u: goto label_4171d0;
        case 0x4171d4u: goto label_4171d4;
        case 0x4171d8u: goto label_4171d8;
        case 0x4171dcu: goto label_4171dc;
        case 0x4171e0u: goto label_4171e0;
        case 0x4171e4u: goto label_4171e4;
        default: break;
    }

    ctx->pc = 0x417028u;

label_417028:
    // 0x417028: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x417028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_41702c:
    // 0x41702c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x41702cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_417030:
    // 0x417030: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x417030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_417034:
    // 0x417034: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x417034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_417038:
    // 0x417038: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x417038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_41703c:
    // 0x41703c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x41703cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_417040:
    // 0x417040: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x417040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_417044:
    // 0x417044: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x417044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_417048:
    // 0x417048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x417048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41704c:
    // 0x41704c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x41704cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_417050:
    // 0x417050: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x417050u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_417054:
    // 0x417054: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x417054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_417058:
    // 0x417058: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x417058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41705c:
    // 0x41705c: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x41705cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_417060:
    // 0x417060: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x417060u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_417064:
    // 0x417064: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x417064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_417068:
    // 0x417068: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x417068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_41706c:
    // 0x41706c: 0x3c015d5e  lui         $at, 0x5D5E
    ctx->pc = 0x41706cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23902 << 16));
label_417070:
    // 0x417070: 0x34210b6b  ori         $at, $at, 0xB6B
    ctx->pc = 0x417070u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2923);
label_417074:
    // 0x417074: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x417074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_417078:
    // 0x417078: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x417078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_41707c:
    // 0x41707c: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x41707cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_417080:
    // 0x417080: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x417080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_417084:
    // 0x417084: 0x60f809  jalr        $v1
label_417088:
    if (ctx->pc == 0x417088u) {
        ctx->pc = 0x417088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417084u;
        // 0x417088: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41708Cu;
        goto label_41708c;
    }
    ctx->pc = 0x417084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41708Cu);
        ctx->pc = 0x417088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417084u;
        // 0x417088: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417084u, 0x41708Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41708Cu;
label_41708c:
    // 0x41708c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x41708cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_417090:
    // 0x417090: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x417090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_417094:
    // 0x417094: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x417094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_417098:
    // 0x417098: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x417098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_41709c:
    // 0x41709c: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x41709cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_4170a0:
    // 0x4170a0: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x4170a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_4170a4:
    // 0x4170a4: 0xc0f809  jalr        $a2
label_4170a8:
    if (ctx->pc == 0x4170A8u) {
        ctx->pc = 0x4170A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4170A4u;
        // 0x4170a8: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4170ACu;
        goto label_4170ac;
    }
    ctx->pc = 0x4170A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x4170ACu);
        ctx->pc = 0x4170A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4170A4u;
        // 0x4170a8: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4170A4u, 0x4170ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4170ACu;
label_4170ac:
    // 0x4170ac: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x4170acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4170b0:
    // 0x4170b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4170b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4170b4:
    // 0x4170b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4170b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4170b8:
    // 0x4170b8: 0xc105b84  jal         func_416E10
label_4170bc:
    if (ctx->pc == 0x4170BCu) {
        ctx->pc = 0x4170BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4170B8u;
        // 0x4170bc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4170C0u;
        goto label_4170c0;
    }
    ctx->pc = 0x4170B8u;
    SET_GPR_U32(ctx, 31, 0x4170C0u);
    ctx->pc = 0x4170BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4170B8u;
    // 0x4170bc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416E10u, 0x4170B8u, 0x4170C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4170C0u;
label_4170c0:
    // 0x4170c0: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x4170c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_4170c4:
    // 0x4170c4: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x4170c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_4170c8:
    // 0x4170c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4170c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4170cc:
    // 0x4170cc: 0x0  nop
    ctx->pc = 0x4170ccu;
    // NOP
label_4170d0:
    // 0x4170d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4170d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4170d4:
    // 0x4170d4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4170d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4170d8:
    // 0x4170d8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x4170d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_4170dc:
    // 0x4170dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4170dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4170e0:
    // 0x4170e0: 0x2ac03  sra         $s5, $v0, 16
    ctx->pc = 0x4170e0u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 16));
label_4170e4:
    // 0x4170e4: 0x1000002f  b           . + 4 + (0x2F << 2)
label_4170e8:
    if (ctx->pc == 0x4170E8u) {
        ctx->pc = 0x4170E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4170E4u;
        // 0x4170e8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4170ECu;
        goto label_4170ec;
    }
    ctx->pc = 0x4170E4u;
    {
        const bool branch_taken_0x4170e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4170E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4170E4u;
        // 0x4170e8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4170e4) {
            ctx->pc = 0x4171A4u;
            goto label_4171a4;
        }
    }
    ctx->pc = 0x4170ECu;
label_4170ec:
    // 0x4170ec: 0x0  nop
    ctx->pc = 0x4170ecu;
    // NOP
label_4170f0:
    // 0x4170f0: 0xc105774  jal         func_415DD0
label_4170f4:
    if (ctx->pc == 0x4170F4u) {
        ctx->pc = 0x4170F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4170F0u;
        // 0x4170f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4170F8u;
        goto label_4170f8;
    }
    ctx->pc = 0x4170F0u;
    SET_GPR_U32(ctx, 31, 0x4170F8u);
    ctx->pc = 0x4170F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4170F0u;
    // 0x4170f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DD0u, 0x4170F0u, 0x4170F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4170F8u;
label_4170f8:
    // 0x4170f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4170f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4170fc:
    // 0x4170fc: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x4170fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_417100:
    // 0x417100: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
label_417104:
    if (ctx->pc == 0x417104u) {
        ctx->pc = 0x417104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417100u;
        // 0x417104: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417108u;
        goto label_417108;
    }
    ctx->pc = 0x417100u;
    {
        const bool branch_taken_0x417100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x417100) {
            ctx->pc = 0x417104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x417100u;
            // 0x417104: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4171A4u;
            goto label_4171a4;
        }
    }
    ctx->pc = 0x417108u;
label_417108:
    // 0x417108: 0x962200d0  lhu         $v0, 0xD0($s1)
    ctx->pc = 0x417108u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 208)));
label_41710c:
    // 0x41710c: 0x54560025  bnel        $v0, $s6, . + 4 + (0x25 << 2)
label_417110:
    if (ctx->pc == 0x417110u) {
        ctx->pc = 0x417110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41710Cu;
        // 0x417110: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417114u;
        goto label_417114;
    }
    ctx->pc = 0x41710Cu;
    {
        const bool branch_taken_0x41710c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x41710c) {
            ctx->pc = 0x417110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41710Cu;
            // 0x417110: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4171A4u;
            goto label_4171a4;
        }
    }
    ctx->pc = 0x417114u;
label_417114:
    // 0x417114: 0xc10587a  jal         func_4161E8
label_417118:
    if (ctx->pc == 0x417118u) {
        ctx->pc = 0x417118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417114u;
        // 0x417118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41711Cu;
        goto label_41711c;
    }
    ctx->pc = 0x417114u;
    SET_GPR_U32(ctx, 31, 0x41711Cu);
    ctx->pc = 0x417118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417114u;
    // 0x417118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x417114u, 0x41711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41711Cu;
label_41711c:
    // 0x41711c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x41711cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_417120:
    // 0x417120: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x417120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_417124:
    // 0x417124: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x417124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_417128:
    // 0x417128: 0xc105b84  jal         func_416E10
label_41712c:
    if (ctx->pc == 0x41712Cu) {
        ctx->pc = 0x41712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417128u;
        // 0x41712c: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417130u;
        goto label_417130;
    }
    ctx->pc = 0x417128u;
    SET_GPR_U32(ctx, 31, 0x417130u);
    ctx->pc = 0x41712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417128u;
    // 0x41712c: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416E10u, 0x417128u, 0x417130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417130u;
label_417130:
    // 0x417130: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x417130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_417134:
    // 0x417134: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x417134u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_417138:
    // 0x417138: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x417138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_41713c:
    // 0x41713c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41713cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_417140:
    // 0x417140: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x417140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_417144:
    // 0x417144: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x417144u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_417148:
    // 0x417148: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x417148u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_41714c:
    // 0x41714c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x41714cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_417150:
    // 0x417150: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x417150u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_417154:
    // 0x417154: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x417154u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_417158:
    // 0x417158: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
label_41715c:
    if (ctx->pc == 0x41715Cu) {
        ctx->pc = 0x41715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417158u;
        // 0x41715c: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417160u;
        goto label_417160;
    }
    ctx->pc = 0x417158u;
    {
        const bool branch_taken_0x417158 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x417158) {
            ctx->pc = 0x41715Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x417158u;
            // 0x41715c: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x417160u;
            goto label_417160;
        }
    }
    ctx->pc = 0x417160u;
label_417160:
    // 0x417160: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x417160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_417164:
    // 0x417164: 0xc10587a  jal         func_4161E8
label_417168:
    if (ctx->pc == 0x417168u) {
        ctx->pc = 0x417168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417164u;
        // 0x417168: 0x28403  sra         $s0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41716Cu;
        goto label_41716c;
    }
    ctx->pc = 0x417164u;
    SET_GPR_U32(ctx, 31, 0x41716Cu);
    ctx->pc = 0x417168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417164u;
    // 0x417168: 0x28403  sra         $s0, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x417164u, 0x41716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41716Cu;
label_41716c:
    // 0x41716c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41716cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_417170:
    // 0x417170: 0xc0cdb26  jal         func_336C98
label_417174:
    if (ctx->pc == 0x417174u) {
        ctx->pc = 0x417174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417170u;
        // 0x417174: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417178u;
        goto label_417178;
    }
    ctx->pc = 0x417170u;
    SET_GPR_U32(ctx, 31, 0x417178u);
    ctx->pc = 0x417174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417170u;
    // 0x417174: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336C98u, 0x417170u, 0x417178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417178u;
label_417178:
    // 0x417178: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x417178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41717c:
    // 0x41717c: 0x0  nop
    ctx->pc = 0x41717cu;
    // NOP
label_417180:
    // 0x417180: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_417184:
    if (ctx->pc == 0x417184u) {
        ctx->pc = 0x417184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417180u;
        // 0x417184: 0x2a02005a  slti        $v0, $s0, 0x5A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)90) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x417188u;
        goto label_417188;
    }
    ctx->pc = 0x417180u;
    {
        const bool branch_taken_0x417180 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x417184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417180u;
        // 0x417184: 0x2a02005a  slti        $v0, $s0, 0x5A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)90) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x417180) {
            ctx->pc = 0x4171A0u;
            goto label_4171a0;
        }
    }
    ctx->pc = 0x417188u;
label_417188:
    // 0x417188: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_41718c:
    if (ctx->pc == 0x41718Cu) {
        ctx->pc = 0x41718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417188u;
        // 0x41718c: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417190u;
        goto label_417190;
    }
    ctx->pc = 0x417188u;
    {
        const bool branch_taken_0x417188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x417188) {
            ctx->pc = 0x41718Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x417188u;
            // 0x41718c: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41719Cu;
            goto label_41719c;
        }
    }
    ctx->pc = 0x417190u;
label_417190:
    // 0x417190: 0x56800004  bnel        $s4, $zero, . + 4 + (0x4 << 2)
label_417194:
    if (ctx->pc == 0x417194u) {
        ctx->pc = 0x417194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417190u;
        // 0x417194: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417198u;
        goto label_417198;
    }
    ctx->pc = 0x417190u;
    {
        const bool branch_taken_0x417190 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x417190) {
            ctx->pc = 0x417194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x417190u;
            // 0x417194: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4171A4u;
            goto label_4171a4;
        }
    }
    ctx->pc = 0x417198u;
label_417198:
    // 0x417198: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x417198u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41719c:
    // 0x41719c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x41719cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4171a0:
    // 0x4171a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4171a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4171a4:
    // 0x4171a4: 0xc10574c  jal         func_415D30
label_4171a8:
    if (ctx->pc == 0x4171A8u) {
        ctx->pc = 0x4171ACu;
        goto label_4171ac;
    }
    ctx->pc = 0x4171A4u;
    SET_GPR_U32(ctx, 31, 0x4171ACu);
    ctx->pc = 0x415D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415D30u, 0x4171A4u, 0x4171ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4171ACu;
label_4171ac:
    // 0x4171ac: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x4171acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4171b0:
    // 0x4171b0: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_4171b4:
    if (ctx->pc == 0x4171B4u) {
        ctx->pc = 0x4171B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4171B0u;
        // 0x4171b4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4171B8u;
        goto label_4171b8;
    }
    ctx->pc = 0x4171B0u;
    {
        const bool branch_taken_0x4171b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4171B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4171B0u;
        // 0x4171b4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4171b0) {
            ctx->pc = 0x4170F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4170f0;
        }
    }
    ctx->pc = 0x4171B8u;
label_4171b8:
    // 0x4171b8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x4171b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4171bc:
    // 0x4171bc: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x4171bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4171c0:
    // 0x4171c0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x4171c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4171c4:
    // 0x4171c4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x4171c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4171c8:
    // 0x4171c8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x4171c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4171cc:
    // 0x4171cc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x4171ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4171d0:
    // 0x4171d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4171d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4171d4:
    // 0x4171d4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4171d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4171d8:
    // 0x4171d8: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x4171d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4171dc:
    // 0x4171dc: 0x3e00008  jr          $ra
label_4171e0:
    if (ctx->pc == 0x4171E0u) {
        ctx->pc = 0x4171E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4171DCu;
        // 0x4171e0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4171E4u;
        goto label_4171e4;
    }
    ctx->pc = 0x4171DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4171E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4171DCu;
        // 0x4171e0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4171DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4171E4u;
label_4171e4:
    // 0x4171e4: 0x0  nop
    ctx->pc = 0x4171e4u;
    // NOP
    ctx->pc = 0x4171e8u;
}
