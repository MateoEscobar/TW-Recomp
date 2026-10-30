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

// Function: sub_00452060
// Address: 0x452060 - 0x452208
void sub_00452060_0x452060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452060_0x452060");
#endif

    switch (ctx->pc) {
        case 0x45209cu: goto label_45209c;
        case 0x4520ccu: goto label_4520cc;
        case 0x4520dcu: goto label_4520dc;
        case 0x452110u: goto label_452110;
        case 0x452150u: goto label_452150;
        case 0x45219cu: goto label_45219c;
        case 0x4521a4u: goto label_4521a4;
        case 0x4521b4u: goto label_4521b4;
        case 0x4521d0u: goto label_4521d0;
        default: break;
    }

    ctx->pc = 0x452060u;

    // 0x452060: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x452060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x452064: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x452064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452068: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x452068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x45206c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x45206cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x452070: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x452070u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452074: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x452074u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452078: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x452078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x45207c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x45207cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x452080: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x452080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452084: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x452084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x452088: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x452088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45208c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x45208cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x452090: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x452090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x452094: 0xc11ac5c  jal         func_46B170
    ctx->pc = 0x452094u;
    SET_GPR_U32(ctx, 31, 0x45209Cu);
    ctx->pc = 0x452098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x452094u;
    // 0x452098: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x46B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B170u, 0x452094u, 0x45209Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45209Cu;
label_45209c:
    // 0x45209c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45209cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4520a0: 0x1220004e  beqz        $s1, . + 4 + (0x4E << 2)
    ctx->pc = 0x4520A0u;
    {
        const bool branch_taken_0x4520a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4520A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4520A0u;
        // 0x4520a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4520a0) {
            ctx->pc = 0x4521DCu;
            goto label_4521dc;
        }
    }
    ctx->pc = 0x4520A8u;
    // 0x4520a8: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x4520a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x4520ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4520acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4520b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4520b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4520b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x4520b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x4520b8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4520b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x4520bc: 0xe4540010  swc1        $f20, 0x10($v0)
    ctx->pc = 0x4520bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x4520c0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x4520c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x4520c4: 0xc11aba8  jal         func_46AEA0
    ctx->pc = 0x4520C4u;
    SET_GPR_U32(ctx, 31, 0x4520CCu);
    ctx->pc = 0x4520C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4520C4u;
    // 0x4520c8: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46AEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46AEA0u, 0x4520C4u, 0x4520CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4520CCu;
label_4520cc:
    // 0x4520cc: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x4520CCu;
    {
        const bool branch_taken_0x4520cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4520D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4520CCu;
        // 0x4520d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4520cc) {
            ctx->pc = 0x4521DCu;
            goto label_4521dc;
        }
    }
    ctx->pc = 0x4520D4u;
    // 0x4520d4: 0xc11b3b6  jal         func_46CED8
    ctx->pc = 0x4520D4u;
    SET_GPR_U32(ctx, 31, 0x4520DCu);
    ctx->pc = 0x46CED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CED8u, 0x4520D4u, 0x4520DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4520DCu;
label_4520dc:
    // 0x4520dc: 0xc780801c  lwc1        $f0, -0x7FE4($gp)
    ctx->pc = 0x4520dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4520e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4520e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4520e4: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x4520e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4520e8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x4520e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4520ec: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x4520ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4520f0: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x4520f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4520f4: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x4520f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4520f8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4520f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4520fc: 0xb2420013  sdl         $v0, 0x13($s2)
    ctx->pc = 0x4520fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x452100: 0xb642000c  sdr         $v0, 0xC($s2)
    ctx->pc = 0x452100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x452104: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x452104u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x452108: 0xc11b850  jal         func_46E140
    ctx->pc = 0x452108u;
    SET_GPR_U32(ctx, 31, 0x452110u);
    ctx->pc = 0x45210Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x452108u;
    // 0x45210c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46E140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46E140u, 0x452108u, 0x452110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452110u;
label_452110:
    // 0x452110: 0x8f8588e8  lw          $a1, -0x7718($gp)
    ctx->pc = 0x452110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
    // 0x452114: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x452114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x452118: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x452118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45211c: 0x2473ad18  addiu       $s3, $v1, -0x52E8
    ctx->pc = 0x45211cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x452120: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x452120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x452124: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x452124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x452128: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x452128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x45212c: 0x90a6002d  lbu         $a2, 0x2D($a1)
    ctx->pc = 0x45212cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 45)));
    // 0x452130: 0x3484ff00  ori         $a0, $a0, 0xFF00
    ctx->pc = 0x452130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
    // 0x452134: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x452134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x452138: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x452138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x45213c: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x45213cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x452140: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x452140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x452144: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x452144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x452148: 0xc11b720  jal         func_46DC80
    ctx->pc = 0x452148u;
    SET_GPR_U32(ctx, 31, 0x452150u);
    ctx->pc = 0x45214Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x452148u;
    // 0x45214c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46DC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46DC80u, 0x452148u, 0x452150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452150u;
label_452150:
    // 0x452150: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x452150u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x452154: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x452154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x452158: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x452158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x45215c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x45215cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x452160: 0xacb40004  sw          $s4, 0x4($a1)
    ctx->pc = 0x452160u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 20));
    // 0x452164: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x452164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x452168: 0xacb20008  sw          $s2, 0x8($a1)
    ctx->pc = 0x452168u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 18));
    // 0x45216c: 0x8f82841c  lw          $v0, -0x7BE4($gp)
    ctx->pc = 0x45216cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935580)));
    // 0x452170: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x452170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
    // 0x452174: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x452174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x452178: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x452178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45217c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x45217cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x452180: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x452180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x452184: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x452184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x452188: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x452188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x45218c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x45218Cu;
    {
        const bool branch_taken_0x45218c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x452190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45218Cu;
        // 0x452190: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45218c) {
            ctx->pc = 0x4521D8u;
            goto label_4521d8;
        }
    }
    ctx->pc = 0x452194u;
    // 0x452194: 0xc11b448  jal         func_46D120
    ctx->pc = 0x452194u;
    SET_GPR_U32(ctx, 31, 0x45219Cu);
    ctx->pc = 0x452198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x452194u;
    // 0x452198: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D120u, 0x452194u, 0x45219Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45219Cu;
label_45219c:
    // 0x45219c: 0xc11b3e4  jal         func_46CF90
    ctx->pc = 0x45219Cu;
    SET_GPR_U32(ctx, 31, 0x4521A4u);
    ctx->pc = 0x4521A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45219Cu;
    // 0x4521a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CF90u, 0x45219Cu, 0x4521A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4521A4u;
label_4521a4:
    // 0x4521a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4521a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4521a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4521a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4521ac: 0xc11a984  jal         func_46A610
    ctx->pc = 0x4521ACu;
    SET_GPR_U32(ctx, 31, 0x4521B4u);
    ctx->pc = 0x4521B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4521ACu;
    // 0x4521b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A610u, 0x4521ACu, 0x4521B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4521B4u;
label_4521b4:
    // 0x4521b4: 0x8f83841c  lw          $v1, -0x7BE4($gp)
    ctx->pc = 0x4521b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935580)));
    // 0x4521b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4521b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4521bc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x4521bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x4521c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4521c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4521c4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x4521c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4521c8: 0xc11b010  jal         func_46C040
    ctx->pc = 0x4521C8u;
    SET_GPR_U32(ctx, 31, 0x4521D0u);
    ctx->pc = 0x4521CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4521C8u;
    // 0x4521cc: 0xaea5006c  sw          $a1, 0x6C($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 108), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C040u, 0x4521C8u, 0x4521D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4521D0u;
label_4521d0:
    // 0x4521d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4521D0u;
    {
        const bool branch_taken_0x4521d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4521D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4521D0u;
        // 0x4521d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4521d0) {
            ctx->pc = 0x4521DCu;
            goto label_4521dc;
        }
    }
    ctx->pc = 0x4521D8u;
label_4521d8:
    // 0x4521d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4521d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4521dc:
    // 0x4521dc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4521dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4521e0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4521e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4521e4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4521e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4521e8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4521e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4521ec: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4521ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4521f0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4521f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4521f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4521f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4521f8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x4521f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4521fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4521FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x452200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4521FCu;
        // 0x452200: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4521FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x452204u;
    // 0x452204: 0x0  nop
    ctx->pc = 0x452204u;
    // NOP
    ctx->pc = 0x452208u;
}
