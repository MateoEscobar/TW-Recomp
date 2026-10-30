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

// Function: sub_002EDFF8
// Address: 0x2edff8 - 0x2ee198
void sub_002EDFF8_0x2edff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDFF8_0x2edff8");
#endif

    switch (ctx->pc) {
        case 0x2ee090u: goto label_2ee090;
        case 0x2ee0b4u: goto label_2ee0b4;
        case 0x2ee0bcu: goto label_2ee0bc;
        case 0x2ee0c8u: goto label_2ee0c8;
        case 0x2ee0f0u: goto label_2ee0f0;
        case 0x2ee0fcu: goto label_2ee0fc;
        case 0x2ee104u: goto label_2ee104;
        case 0x2ee168u: goto label_2ee168;
        default: break;
    }

    ctx->pc = 0x2edff8u;

    // 0x2edff8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2edff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2edffc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2edffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2ee000: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2ee000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2ee004: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ee004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2ee008: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ee008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee00c: 0x8fac0090  lw          $t4, 0x90($sp)
    ctx->pc = 0x2ee00cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ee010: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2ee010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2ee014: 0x24632820  addiu       $v1, $v1, 0x2820
    ctx->pc = 0x2ee014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10272));
    // 0x2ee018: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2ee018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2ee01c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ee01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ee020: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2ee020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2ee024: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ee024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee028: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x2ee028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x2ee02c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2ee02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee030: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2ee030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2ee034: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2ee034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee038: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ee038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ee03c: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x2ee03cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee040: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2ee040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2ee044: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x2ee044u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee048: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ee048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ee04c: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x2ee04cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x2ee050: 0xa6290044  sh          $t1, 0x44($s1)
    ctx->pc = 0x2ee050u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 68), (uint16_t)GPR_U32(ctx, 9));
    // 0x2ee054: 0xa2280046  sb          $t0, 0x46($s1)
    ctx->pc = 0x2ee054u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 70), (uint8_t)GPR_U32(ctx, 8));
    // 0x2ee058: 0xa22c004b  sb          $t4, 0x4B($s1)
    ctx->pc = 0x2ee058u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 75), (uint8_t)GPR_U32(ctx, 12));
    // 0x2ee05c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2ee05cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x2ee060: 0xae240040  sw          $a0, 0x40($s1)
    ctx->pc = 0x2ee060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 4));
    // 0x2ee064: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2ee064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2ee068: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x2ee068u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee06c: 0xa2200005  sb          $zero, 0x5($s1)
    ctx->pc = 0x2ee06cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee070: 0xa2200047  sb          $zero, 0x47($s1)
    ctx->pc = 0x2ee070u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee074: 0xa2200048  sb          $zero, 0x48($s1)
    ctx->pc = 0x2ee074u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee078: 0xa2200049  sb          $zero, 0x49($s1)
    ctx->pc = 0x2ee078u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 73), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee07c: 0xa220004a  sb          $zero, 0x4A($s1)
    ctx->pc = 0x2ee07cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 74), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee080: 0xa220004c  sb          $zero, 0x4C($s1)
    ctx->pc = 0x2ee080u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee084: 0x8cb50000  lw          $s5, 0x0($a1)
    ctx->pc = 0x2ee084u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ee088: 0xc087420  jal         func_21D080
    ctx->pc = 0x2EE088u;
    SET_GPR_U32(ctx, 31, 0x2EE090u);
    ctx->pc = 0x2EE08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE088u;
    // 0x2ee08c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2EE088u, 0x2EE090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE090u;
label_2ee090:
    // 0x2ee090: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2ee090u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ee094: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ee094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2ee098: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x2ee098u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x2ee09c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2ee09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2ee0a0: 0x86a40092  lh          $a0, 0x92($s5)
    ctx->pc = 0x2ee0a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
    // 0x2ee0a4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ee0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2ee0a8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ee0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ee0ac: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x2EE0ACu;
    SET_GPR_U32(ctx, 31, 0x2EE0B4u);
    ctx->pc = 0x2EE0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE0ACu;
    // 0x2ee0b0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2EE0ACu, 0x2EE0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE0B4u;
label_2ee0b4:
    // 0x2ee0b4: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x2EE0B4u;
    SET_GPR_U32(ctx, 31, 0x2EE0BCu);
    ctx->pc = 0x2EE0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE0B4u;
    // 0x2ee0b8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2EE0B4u, 0x2EE0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE0BCu;
label_2ee0bc:
    // 0x2ee0bc: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2ee0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2ee0c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ee0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee0c4: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2ee0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2ee0c8:
    // 0x2ee0c8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2ee0c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ee0cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ee0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ee0d0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2ee0d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2ee0d4: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x2ee0d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2ee0d8: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x2ee0d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ee0dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EE0DCu;
    {
        const bool branch_taken_0x2ee0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE0DCu;
        // 0x2ee0e0: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee0dc) {
            ctx->pc = 0x2EE0C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee0c8;
        }
    }
    ctx->pc = 0x2EE0E4u;
    // 0x2ee0e4: 0x26330034  addiu       $s3, $s1, 0x34
    ctx->pc = 0x2ee0e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x2ee0e8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ee0e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee0ec: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2ee0ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ee0f0:
    // 0x2ee0f0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ee0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2ee0f4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2EE0F4u;
    SET_GPR_U32(ctx, 31, 0x2EE0FCu);
    ctx->pc = 0x2EE0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE0F4u;
    // 0x2ee0f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2EE0F4u, 0x2EE0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE0FCu;
label_2ee0fc:
    // 0x2ee0fc: 0xc105e98  jal         func_417A60
    ctx->pc = 0x2EE0FCu;
    SET_GPR_U32(ctx, 31, 0x2EE104u);
    ctx->pc = 0x2EE100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE0FCu;
    // 0x2ee100: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417A60u, 0x2EE0FCu, 0x2EE104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE104u;
label_2ee104:
    // 0x2ee104: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ee104u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee108: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE108u;
    {
        const bool branch_taken_0x2ee108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE108u;
        // 0x2ee10c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee108) {
            ctx->pc = 0x2EE12Cu;
            goto label_2ee12c;
        }
    }
    ctx->pc = 0x2EE110u;
    // 0x2ee110: 0x92220049  lbu         $v0, 0x49($s1)
    ctx->pc = 0x2ee110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 73)));
    // 0x2ee114: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ee114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ee118: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2ee118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2ee11c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2ee11cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ee120: 0x92230049  lbu         $v1, 0x49($s1)
    ctx->pc = 0x2ee120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 73)));
    // 0x2ee124: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ee124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ee128: 0xa2230049  sb          $v1, 0x49($s1)
    ctx->pc = 0x2ee128u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 73), (uint8_t)GPR_U32(ctx, 3));
label_2ee12c:
    // 0x2ee12c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2ee12cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2ee130: 0x2e820003  sltiu       $v0, $s4, 0x3
    ctx->pc = 0x2ee130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ee134: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2EE134u;
    {
        const bool branch_taken_0x2ee134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE134u;
        // 0x2ee138: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee134) {
            ctx->pc = 0x2EE0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee0f0;
        }
    }
    ctx->pc = 0x2EE13Cu;
    // 0x2ee13c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ee13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee140: 0x52e20001  beql        $s7, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EE140u;
    {
        const bool branch_taken_0x2ee140 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee140) {
            ctx->pc = 0x2EE144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE140u;
            // 0x2ee144: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE148u;
            goto label_2ee148;
        }
    }
    ctx->pc = 0x2EE148u;
label_2ee148:
    // 0x2ee148: 0x12c00008  beqz        $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE148u;
    {
        const bool branch_taken_0x2ee148 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE148u;
        // 0x2ee14c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee148) {
            ctx->pc = 0x2EE16Cu;
            goto label_2ee16c;
        }
    }
    ctx->pc = 0x2EE150u;
    // 0x2ee150: 0x82c20000  lb          $v0, 0x0($s6)
    ctx->pc = 0x2ee150u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2ee154: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE154u;
    {
        const bool branch_taken_0x2ee154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE154u;
        // 0x2ee158: 0x26a403c8  addiu       $a0, $s5, 0x3C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee154) {
            ctx->pc = 0x2EE168u;
            goto label_2ee168;
        }
    }
    ctx->pc = 0x2EE15Cu;
    // 0x2ee15c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2ee15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee160: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2EE160u;
    SET_GPR_U32(ctx, 31, 0x2EE168u);
    ctx->pc = 0x2EE164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE160u;
    // 0x2ee164: 0x24060256  addiu       $a2, $zero, 0x256 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2EE160u, 0x2EE168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE168u;
label_2ee168:
    // 0x2ee168: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ee168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ee16c:
    // 0x2ee16c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2ee16cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ee170: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2ee170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ee174: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2ee174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ee178: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2ee178u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ee17c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ee17cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ee180: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2ee180u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ee184: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2ee184u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ee188: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x2ee188u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee18c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ee18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee190: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE190u;
        // 0x2ee194: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE198u;
}
