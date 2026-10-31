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

// Function: sub_00120868
// Address: 0x120868 - 0x1209d0
void sub_00120868_0x120868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120868_0x120868");
#endif

    switch (ctx->pc) {
        case 0x1208a4u: goto label_1208a4;
        case 0x1208d0u: goto label_1208d0;
        case 0x1208e4u: goto label_1208e4;
        case 0x120904u: goto label_120904;
        case 0x120948u: goto label_120948;
        case 0x120974u: goto label_120974;
        case 0x1209a8u: goto label_1209a8;
        case 0x1209b4u: goto label_1209b4;
        default: break;
    }

    ctx->pc = 0x120868u;

    // 0x120868: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x120868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12086c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x12086cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x120870: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x120870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x120874: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x120874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x120878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x120878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12087c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x12087cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x120880: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x120880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x120884: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x120884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x120888: 0x24425510  addiu       $v0, $v0, 0x5510
    ctx->pc = 0x120888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21776));
    // 0x12088c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x12088cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x120890: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x120890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x120894: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x120894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x120898: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x120898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x12089c: 0xc0cdfb6  jal         func_337ED8
    ctx->pc = 0x12089Cu;
    SET_GPR_U32(ctx, 31, 0x1208A4u);
    ctx->pc = 0x1208A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12089Cu;
    // 0x1208a0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337ED8u, 0x12089Cu, 0x1208A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1208A4u;
label_1208a4:
    // 0x1208a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1208a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1208a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1208a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1208ac: 0xae0001cc  sw          $zero, 0x1CC($s0)
    ctx->pc = 0x1208acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 0));
    // 0x1208b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1208b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1208b4: 0xa20001d4  sb          $zero, 0x1D4($s0)
    ctx->pc = 0x1208b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 468), (uint8_t)GPR_U32(ctx, 0));
    // 0x1208b8: 0xa20001d5  sb          $zero, 0x1D5($s0)
    ctx->pc = 0x1208b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 469), (uint8_t)GPR_U32(ctx, 0));
    // 0x1208bc: 0xe6140044  swc1        $f20, 0x44($s0)
    ctx->pc = 0x1208bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x1208c0: 0xa20301d7  sb          $v1, 0x1D7($s0)
    ctx->pc = 0x1208c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 471), (uint8_t)GPR_U32(ctx, 3));
    // 0x1208c4: 0xa20301d6  sb          $v1, 0x1D6($s0)
    ctx->pc = 0x1208c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 470), (uint8_t)GPR_U32(ctx, 3));
    // 0x1208c8: 0xc0482a6  jal         func_120A98
    ctx->pc = 0x1208C8u;
    SET_GPR_U32(ctx, 31, 0x1208D0u);
    ctx->pc = 0x1208CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1208C8u;
    // 0x1208cc: 0xa20201d8  sb          $v0, 0x1D8($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 472), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A98u, 0x1208C8u, 0x1208D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1208D0u;
label_1208d0:
    // 0x1208d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1208d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1208d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1208d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1208d8: 0xc440b204  lwc1        $f0, -0x4DFC($v0)
    ctx->pc = 0x1208d8u;
    { uint32_t bits = FAST_READ32(0x50B204u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1208dc: 0xc0482a6  jal         func_120A98
    ctx->pc = 0x1208DCu;
    SET_GPR_U32(ctx, 31, 0x1208E4u);
    ctx->pc = 0x1208E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1208DCu;
    // 0x1208e0: 0xe600004c  swc1        $f0, 0x4C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A98u, 0x1208DCu, 0x1208E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1208E4u;
label_1208e4:
    // 0x1208e4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1208e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1208e8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1208e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1208ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1208ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1208f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1208f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1208f4: 0xe6140054  swc1        $f20, 0x54($s0)
    ctx->pc = 0x1208f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x1208f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1208f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1208fc: 0xc04884a  jal         func_122128
    ctx->pc = 0x1208FCu;
    SET_GPR_U32(ctx, 31, 0x120904u);
    ctx->pc = 0x120900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1208FCu;
    // 0x120900: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x122128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122128u, 0x1208FCu, 0x120904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120904u;
label_120904:
    // 0x120904: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x120904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x120908: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x120908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12090c: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x12090cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x120910: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x120910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
    // 0x120914: 0x26030190  addiu       $v1, $s0, 0x190
    ctx->pc = 0x120914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x120918: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x120918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x12091c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12091cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120920: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x120920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x120924: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x120924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x120928: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x120928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x12092c: 0xae000190  sw          $zero, 0x190($s0)
    ctx->pc = 0x12092cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
    // 0x120930: 0x3c014128  lui         $at, 0x4128
    ctx->pc = 0x120930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16680 << 16));
    // 0x120934: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x120934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120938: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x120938u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x12093c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12093cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x120940: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x120940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x120944: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x120944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
label_120948:
    // 0x120948: 0xac80ffe8  sw          $zero, -0x18($a0)
    ctx->pc = 0x120948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967272), GPR_U32(ctx, 0));
    // 0x12094c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12094cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x120950: 0xac80fff4  sw          $zero, -0xC($a0)
    ctx->pc = 0x120950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967284), GPR_U32(ctx, 0));
    // 0x120954: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x120954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x120958: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x120958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12095c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12095Cu;
    {
        const bool branch_taken_0x12095c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12095Cu;
        // 0x120960: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12095c) {
            ctx->pc = 0x120948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120948;
        }
    }
    ctx->pc = 0x120964u;
    // 0x120964: 0x260401d0  addiu       $a0, $s0, 0x1D0
    ctx->pc = 0x120964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x120968: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x120968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12096c: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x12096Cu;
    SET_GPR_U32(ctx, 31, 0x120974u);
    ctx->pc = 0x120970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12096Cu;
    // 0x120970: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x12096Cu, 0x120974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120974u;
label_120974:
    // 0x120974: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x120974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x120978: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x120978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12097c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12097cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120980: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x120980u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x120984: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x120984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x120988: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x120988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x12098c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x12098cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x120990: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x120990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x120994: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x120994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x120998: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x120998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x12099c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x12099cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1209a0: 0xc0e3fb6  jal         func_38FED8
    ctx->pc = 0x1209A0u;
    SET_GPR_U32(ctx, 31, 0x1209A8u);
    ctx->pc = 0x1209A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1209A0u;
    // 0x1209a4: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FED8u, 0x1209A0u, 0x1209A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1209A8u;
label_1209a8:
    // 0x1209a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1209a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1209ac: 0xc0e3ff4  jal         func_38FFD0
    ctx->pc = 0x1209ACu;
    SET_GPR_U32(ctx, 31, 0x1209B4u);
    ctx->pc = 0x1209B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1209ACu;
    // 0x1209b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FFD0u, 0x1209ACu, 0x1209B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1209B4u;
label_1209b4:
    // 0x1209b4: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1209b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x1209b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1209b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1209bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1209bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1209c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1209c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1209c4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1209c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1209c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1209C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1209CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209C8u;
        // 0x1209cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1209C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1209D0u;
}
