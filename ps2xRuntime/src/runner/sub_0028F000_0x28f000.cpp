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

// Function: sub_0028F000
// Address: 0x28f000 - 0x28f1e8
void sub_0028F000_0x28f000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F000_0x28f000");
#endif

    switch (ctx->pc) {
        case 0x28f050u: goto label_28f050;
        case 0x28f090u: goto label_28f090;
        case 0x28f098u: goto label_28f098;
        case 0x28f0b0u: goto label_28f0b0;
        case 0x28f0c8u: goto label_28f0c8;
        case 0x28f0d0u: goto label_28f0d0;
        case 0x28f0dcu: goto label_28f0dc;
        case 0x28f104u: goto label_28f104;
        case 0x28f110u: goto label_28f110;
        case 0x28f118u: goto label_28f118;
        case 0x28f120u: goto label_28f120;
        case 0x28f13cu: goto label_28f13c;
        case 0x28f164u: goto label_28f164;
        case 0x28f174u: goto label_28f174;
        case 0x28f180u: goto label_28f180;
        default: break;
    }

    ctx->pc = 0x28f000u;

    // 0x28f000: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x28f000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x28f004: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x28f004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x28f008: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x28f008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x28f00c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28f00cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f010: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x28f010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x28f014: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x28f014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x28f018: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x28f018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x28f01c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x28f01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x28f020: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x28f020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x28f024: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x28f024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x28f028: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28f028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28f02c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x28f02cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x28f030: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x28f030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x28f034: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x28f034u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28f038: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x28f038u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x28f03c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x28f03cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x28f040: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F040u;
    {
        const bool branch_taken_0x28f040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f040) {
            ctx->pc = 0x28F044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F040u;
            // 0x28f044: 0x86430092  lh          $v1, 0x92($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F064u;
            goto label_28f064;
        }
    }
    ctx->pc = 0x28F048u;
    // 0x28f048: 0xc087502  jal         func_21D408
    ctx->pc = 0x28F048u;
    SET_GPR_U32(ctx, 31, 0x28F050u);
    ctx->pc = 0x28F04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F048u;
    // 0x28f04c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28F048u, 0x28F050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F050u;
label_28f050:
    // 0x28f050: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28f050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28f054: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x28f054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x28f058: 0x54600057  bnel        $v1, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x28F058u;
    {
        const bool branch_taken_0x28f058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f058) {
            ctx->pc = 0x28F05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F058u;
            // 0x28f05c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F1B8u;
            goto label_28f1b8;
        }
    }
    ctx->pc = 0x28F060u;
    // 0x28f060: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x28f060u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_28f064:
    // 0x28f064: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x28f064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x28f068: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x28f068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x28f06c: 0xc6000140  lwc1        $f0, 0x140($s0)
    ctx->pc = 0x28f06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f070: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x28f070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x28f074: 0x8e1e020c  lw          $fp, 0x20C($s0)
    ctx->pc = 0x28f074u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x28f078: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28f078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28f07c: 0x46000500  add.s       $f20, $f0, $f0
    ctx->pc = 0x28f07cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x28f080: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x28f080u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28f084: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28f084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f088: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x28f088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x28f08c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28f090:
    // 0x28f090: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x28F090u;
    SET_GPR_U32(ctx, 31, 0x28F098u);
    ctx->pc = 0x28F094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F090u;
    // 0x28f094: 0x26160001  addiu       $s6, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x28F090u, 0x28F098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F098u;
label_28f098:
    // 0x28f098: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28f098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f09c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x28f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x28f0a0: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x28F0A0u;
    {
        const bool branch_taken_0x28f0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0A0u;
        // 0x28f0a4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f0a0) {
            ctx->pc = 0x28F1A0u;
            goto label_28f1a0;
        }
    }
    ctx->pc = 0x28F0A8u;
    // 0x28f0a8: 0xc05a3f8  jal         func_168FE0
    ctx->pc = 0x28F0A8u;
    SET_GPR_U32(ctx, 31, 0x28F0B0u);
    ctx->pc = 0x28F0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F0A8u;
    // 0x28f0ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168FE0u, 0x28F0A8u, 0x28F0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F0B0u;
label_28f0b0:
    // 0x28f0b0: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x28F0B0u;
    {
        const bool branch_taken_0x28f0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0B0u;
        // 0x28f0b4: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f0b0) {
            ctx->pc = 0x28F1A0u;
            goto label_28f1a0;
        }
    }
    ctx->pc = 0x28F0B8u;
    // 0x28f0b8: 0x26150048  addiu       $s5, $s0, 0x48
    ctx->pc = 0x28f0b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x28f0bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28f0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f0c0: 0x24574b00  addiu       $s7, $v0, 0x4B00
    ctx->pc = 0x28f0c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x28f0c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28f0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28f0c8:
    // 0x28f0c8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x28F0C8u;
    SET_GPR_U32(ctx, 31, 0x28F0D0u);
    ctx->pc = 0x28F0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F0C8u;
    // 0x28f0cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x28F0C8u, 0x28F0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F0D0u;
label_28f0d0:
    // 0x28f0d0: 0x26140001  addiu       $s4, $s0, 0x1
    ctx->pc = 0x28f0d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28f0d4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x28F0D4u;
    SET_GPR_U32(ctx, 31, 0x28F0DCu);
    ctx->pc = 0x28F0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F0D4u;
    // 0x28f0d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28F0D4u, 0x28F0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F0DCu;
label_28f0dc:
    // 0x28f0dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28f0dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f0e0: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x28F0E0u;
    {
        const bool branch_taken_0x28f0e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0E0u;
        // 0x28f0e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f0e0) {
            ctx->pc = 0x28F190u;
            goto label_28f190;
        }
    }
    ctx->pc = 0x28F0E8u;
    // 0x28f0e8: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x28f0e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x28f0ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28f0ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f0f0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x28f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x28f0f4: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x28f0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x28f0f8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x28f0f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28f0fc: 0xc087502  jal         func_21D408
    ctx->pc = 0x28F0FCu;
    SET_GPR_U32(ctx, 31, 0x28F104u);
    ctx->pc = 0x28F100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F0FCu;
    // 0x28f100: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28F0FCu, 0x28F104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F104u;
label_28f104:
    // 0x28f104: 0x24530164  addiu       $s3, $v0, 0x164
    ctx->pc = 0x28f104u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
    // 0x28f108: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28f108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f10c: 0x0  nop
    ctx->pc = 0x28f10cu;
    // NOP
label_28f110:
    // 0x28f110: 0xc137826  jal         func_4DE098
    ctx->pc = 0x28F110u;
    SET_GPR_U32(ctx, 31, 0x28F118u);
    ctx->pc = 0x28F114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F110u;
    // 0x28f114: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x28F110u, 0x28F118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F118u;
label_28f118:
    // 0x28f118: 0xc0e409a  jal         func_390268
    ctx->pc = 0x28F118u;
    SET_GPR_U32(ctx, 31, 0x28F120u);
    ctx->pc = 0x28F11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F118u;
    // 0x28f11c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28F118u, 0x28F120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F120u;
label_28f120:
    // 0x28f120: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x28F120u;
    {
        const bool branch_taken_0x28f120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f120) {
            ctx->pc = 0x28F124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F120u;
            // 0x28f124: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F184u;
            goto label_28f184;
        }
    }
    ctx->pc = 0x28F128u;
    // 0x28f128: 0x54520016  bnel        $v0, $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x28F128u;
    {
        const bool branch_taken_0x28f128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x28f128) {
            ctx->pc = 0x28F12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F128u;
            // 0x28f12c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F184u;
            goto label_28f184;
        }
    }
    ctx->pc = 0x28F130u;
    // 0x28f130: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x28f130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28f134: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x28F134u;
    SET_GPR_U32(ctx, 31, 0x28F13Cu);
    ctx->pc = 0x28F138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F134u;
    // 0x28f138: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x28F134u, 0x28F13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F13Cu;
label_28f13c:
    // 0x28f13c: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x28f13cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x28f140: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28f140u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f144: 0x0  nop
    ctx->pc = 0x28f144u;
    // NOP
    // 0x28f148: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
    ctx->pc = 0x28F148u;
    {
        const bool branch_taken_0x28f148 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f148) {
            ctx->pc = 0x28F14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F148u;
            // 0x28f14c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F184u;
            goto label_28f184;
        }
    }
    ctx->pc = 0x28F150u;
    // 0x28f150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f154: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28f154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f158: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28f158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f15c: 0xc0888a2  jal         func_222288
    ctx->pc = 0x28F15Cu;
    SET_GPR_U32(ctx, 31, 0x28F164u);
    ctx->pc = 0x28F160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F15Cu;
    // 0x28f160: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x28F15Cu, 0x28F164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F164u;
label_28f164:
    // 0x28f164: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28F164u;
    {
        const bool branch_taken_0x28f164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f164) {
            ctx->pc = 0x28F168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F164u;
            // 0x28f168: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F184u;
            goto label_28f184;
        }
    }
    ctx->pc = 0x28F16Cu;
    // 0x28f16c: 0xc087502  jal         func_21D408
    ctx->pc = 0x28F16Cu;
    SET_GPR_U32(ctx, 31, 0x28F174u);
    ctx->pc = 0x28F170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F16Cu;
    // 0x28f170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28F16Cu, 0x28F174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F174u;
label_28f174:
    // 0x28f174: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28f174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f178: 0xc0a35a8  jal         func_28D6A0
    ctx->pc = 0x28F178u;
    SET_GPR_U32(ctx, 31, 0x28F180u);
    ctx->pc = 0x28F17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F178u;
    // 0x28f17c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D6A0u, 0x28F178u, 0x28F180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F180u;
label_28f180:
    // 0x28f180: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28f180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_28f184:
    // 0x28f184: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x28f184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x28f188: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x28F188u;
    {
        const bool branch_taken_0x28f188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F188u;
        // 0x28f18c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f188) {
            ctx->pc = 0x28F110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f110;
        }
    }
    ctx->pc = 0x28F190u;
label_28f190:
    // 0x28f190: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x28f190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f194: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x28f194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x28f198: 0x5440ffcb  bnel        $v0, $zero, . + 4 + (-0x35 << 2)
    ctx->pc = 0x28F198u;
    {
        const bool branch_taken_0x28f198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f198) {
            ctx->pc = 0x28F19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F198u;
            // 0x28f19c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F0C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f0c8;
        }
    }
    ctx->pc = 0x28F1A0u;
label_28f1a0:
    // 0x28f1a0: 0x161400  sll         $v0, $s6, 16
    ctx->pc = 0x28f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x28f1a4: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x28f1a4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x28f1a8: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x28f1a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x28f1ac: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
    ctx->pc = 0x28F1ACu;
    {
        const bool branch_taken_0x28f1ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F1ACu;
        // 0x28f1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f1ac) {
            ctx->pc = 0x28F090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f090;
        }
    }
    ctx->pc = 0x28F1B4u;
    // 0x28f1b4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x28f1b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_28f1b8:
    // 0x28f1b8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x28f1b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28f1bc: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x28f1bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28f1c0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x28f1c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28f1c4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x28f1c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28f1c8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x28f1c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28f1cc: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x28f1ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28f1d0: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x28f1d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28f1d4: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x28f1d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f1d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28f1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f1dc: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x28f1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28f1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x28F1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F1E0u;
        // 0x28f1e4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F1E8u;
}
