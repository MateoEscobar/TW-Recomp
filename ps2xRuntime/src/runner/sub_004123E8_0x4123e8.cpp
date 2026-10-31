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

// Function: sub_004123E8
// Address: 0x4123e8 - 0x4124f8
void sub_004123E8_0x4123e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004123E8_0x4123e8");
#endif

    switch (ctx->pc) {
        case 0x4123e8u: goto label_4123e8;
        case 0x4123ecu: goto label_4123ec;
        case 0x4123f0u: goto label_4123f0;
        case 0x4123f4u: goto label_4123f4;
        case 0x4123f8u: goto label_4123f8;
        case 0x4123fcu: goto label_4123fc;
        case 0x412400u: goto label_412400;
        case 0x412404u: goto label_412404;
        case 0x412408u: goto label_412408;
        case 0x41240cu: goto label_41240c;
        case 0x412410u: goto label_412410;
        case 0x412414u: goto label_412414;
        case 0x412418u: goto label_412418;
        case 0x41241cu: goto label_41241c;
        case 0x412420u: goto label_412420;
        case 0x412424u: goto label_412424;
        case 0x412428u: goto label_412428;
        case 0x41242cu: goto label_41242c;
        case 0x412430u: goto label_412430;
        case 0x412434u: goto label_412434;
        case 0x412438u: goto label_412438;
        case 0x41243cu: goto label_41243c;
        case 0x412440u: goto label_412440;
        case 0x412444u: goto label_412444;
        case 0x412448u: goto label_412448;
        case 0x41244cu: goto label_41244c;
        case 0x412450u: goto label_412450;
        case 0x412454u: goto label_412454;
        case 0x412458u: goto label_412458;
        case 0x41245cu: goto label_41245c;
        case 0x412460u: goto label_412460;
        case 0x412464u: goto label_412464;
        case 0x412468u: goto label_412468;
        case 0x41246cu: goto label_41246c;
        case 0x412470u: goto label_412470;
        case 0x412474u: goto label_412474;
        case 0x412478u: goto label_412478;
        case 0x41247cu: goto label_41247c;
        case 0x412480u: goto label_412480;
        case 0x412484u: goto label_412484;
        case 0x412488u: goto label_412488;
        case 0x41248cu: goto label_41248c;
        case 0x412490u: goto label_412490;
        case 0x412494u: goto label_412494;
        case 0x412498u: goto label_412498;
        case 0x41249cu: goto label_41249c;
        case 0x4124a0u: goto label_4124a0;
        case 0x4124a4u: goto label_4124a4;
        case 0x4124a8u: goto label_4124a8;
        case 0x4124acu: goto label_4124ac;
        case 0x4124b0u: goto label_4124b0;
        case 0x4124b4u: goto label_4124b4;
        case 0x4124b8u: goto label_4124b8;
        case 0x4124bcu: goto label_4124bc;
        case 0x4124c0u: goto label_4124c0;
        case 0x4124c4u: goto label_4124c4;
        case 0x4124c8u: goto label_4124c8;
        case 0x4124ccu: goto label_4124cc;
        case 0x4124d0u: goto label_4124d0;
        case 0x4124d4u: goto label_4124d4;
        case 0x4124d8u: goto label_4124d8;
        case 0x4124dcu: goto label_4124dc;
        case 0x4124e0u: goto label_4124e0;
        case 0x4124e4u: goto label_4124e4;
        case 0x4124e8u: goto label_4124e8;
        case 0x4124ecu: goto label_4124ec;
        case 0x4124f0u: goto label_4124f0;
        case 0x4124f4u: goto label_4124f4;
        default: break;
    }

    ctx->pc = 0x4123e8u;

label_4123e8:
    // 0x4123e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4123e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4123ec:
    // 0x4123ec: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4123ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4123f0:
    // 0x4123f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4123f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4123f4:
    // 0x4123f4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4123f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4123f8:
    // 0x4123f8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4123f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4123fc:
    // 0x4123fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4123fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_412400:
    // 0x412400: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x412400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_412404:
    // 0x412404: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x412404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_412408:
    // 0x412408: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x412408u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_41240c:
    // 0x41240c: 0x262308f8  addiu       $v1, $s1, 0x8F8
    ctx->pc = 0x41240cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2296));
label_412410:
    // 0x412410: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x412410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_412414:
    // 0x412414: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x412414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_412418:
    // 0x412418: 0x2c820012  sltiu       $v0, $a0, 0x12
    ctx->pc = 0x412418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_41241c:
    // 0x41241c: 0x0  nop
    ctx->pc = 0x41241cu;
    // NOP
label_412420:
    // 0x412420: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_412424:
    if (ctx->pc == 0x412424u) {
        ctx->pc = 0x412424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412420u;
        // 0x412424: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412428u;
        goto label_412428;
    }
    ctx->pc = 0x412420u;
    {
        const bool branch_taken_0x412420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x412424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412420u;
        // 0x412424: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412420) {
            ctx->pc = 0x412410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412410;
        }
    }
    ctx->pc = 0x412428u;
label_412428:
    // 0x412428: 0xae202150  sw          $zero, 0x2150($s1)
    ctx->pc = 0x412428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8528), GPR_U32(ctx, 0));
label_41242c:
    // 0x41242c: 0xc047e6c  jal         func_11F9B0
label_412430:
    if (ctx->pc == 0x412430u) {
        ctx->pc = 0x412430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41242Cu;
        // 0x412430: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412434u;
        goto label_412434;
    }
    ctx->pc = 0x41242Cu;
    SET_GPR_U32(ctx, 31, 0x412434u);
    ctx->pc = 0x412430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41242Cu;
    // 0x412430: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x41242Cu, 0x412434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412434u;
label_412434:
    // 0x412434: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x412434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_412438:
    // 0x412438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x412438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41243c:
    // 0x41243c: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x41243cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_412440:
    // 0x412440: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x412440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_412444:
    // 0x412444: 0xc0f809  jalr        $a2
label_412448:
    if (ctx->pc == 0x412448u) {
        ctx->pc = 0x412448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412444u;
        // 0x412448: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41244Cu;
        goto label_41244c;
    }
    ctx->pc = 0x412444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x41244Cu);
        ctx->pc = 0x412448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412444u;
        // 0x412448: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412444u, 0x41244Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41244Cu;
label_41244c:
    // 0x41244c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x41244cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_412450:
    // 0x412450: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x412450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_412454:
    // 0x412454: 0xc047e6c  jal         func_11F9B0
label_412458:
    if (ctx->pc == 0x412458u) {
        ctx->pc = 0x412458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412454u;
        // 0x412458: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x41245Cu;
        goto label_41245c;
    }
    ctx->pc = 0x412454u;
    SET_GPR_U32(ctx, 31, 0x41245Cu);
    ctx->pc = 0x412458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412454u;
    // 0x412458: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x412454u, 0x41245Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41245Cu;
label_41245c:
    // 0x41245c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x41245cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_412460:
    // 0x412460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x412460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_412464:
    // 0x412464: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x412464u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_412468:
    // 0x412468: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x412468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_41246c:
    // 0x41246c: 0xc0f809  jalr        $a2
label_412470:
    if (ctx->pc == 0x412470u) {
        ctx->pc = 0x412470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41246Cu;
        // 0x412470: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412474u;
        goto label_412474;
    }
    ctx->pc = 0x41246Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x412474u);
        ctx->pc = 0x412470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41246Cu;
        // 0x412470: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41246Cu, 0x412474u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412474u;
label_412474:
    // 0x412474: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x412474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_412478:
    // 0x412478: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x412478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41247c:
    // 0x41247c: 0xc047e6c  jal         func_11F9B0
label_412480:
    if (ctx->pc == 0x412480u) {
        ctx->pc = 0x412480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41247Cu;
        // 0x412480: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x412484u;
        goto label_412484;
    }
    ctx->pc = 0x41247Cu;
    SET_GPR_U32(ctx, 31, 0x412484u);
    ctx->pc = 0x412480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41247Cu;
    // 0x412480: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x41247Cu, 0x412484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412484u;
label_412484:
    // 0x412484: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x412484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_412488:
    // 0x412488: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x412488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41248c:
    // 0x41248c: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x41248cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_412490:
    // 0x412490: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x412490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_412494:
    // 0x412494: 0xc0f809  jalr        $a2
label_412498:
    if (ctx->pc == 0x412498u) {
        ctx->pc = 0x412498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412494u;
        // 0x412498: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41249Cu;
        goto label_41249c;
    }
    ctx->pc = 0x412494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x41249Cu);
        ctx->pc = 0x412498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412494u;
        // 0x412498: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412494u, 0x41249Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41249Cu;
label_41249c:
    // 0x41249c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x41249cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4124a0:
    // 0x4124a0: 0x8e222160  lw          $v0, 0x2160($s1)
    ctx->pc = 0x4124a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8544)));
label_4124a4:
    // 0x4124a4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4124a4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_4124a8:
    // 0x4124a8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4124ac:
    if (ctx->pc == 0x4124ACu) {
        ctx->pc = 0x4124ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4124A8u;
        // 0x4124ac: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4124B0u;
        goto label_4124b0;
    }
    ctx->pc = 0x4124A8u;
    {
        const bool branch_taken_0x4124a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4124ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4124A8u;
        // 0x4124ac: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4124a8) {
            ctx->pc = 0x4124D4u;
            goto label_4124d4;
        }
    }
    ctx->pc = 0x4124B0u;
label_4124b0:
    // 0x4124b0: 0xc12fbfe  jal         func_4BEFF8
label_4124b4:
    if (ctx->pc == 0x4124B4u) {
        ctx->pc = 0x4124B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4124B0u;
        // 0x4124b4: 0x8e24215c  lw          $a0, 0x215C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8540)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4124B8u;
        goto label_4124b8;
    }
    ctx->pc = 0x4124B0u;
    SET_GPR_U32(ctx, 31, 0x4124B8u);
    ctx->pc = 0x4124B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4124B0u;
    // 0x4124b4: 0x8e24215c  lw          $a0, 0x215C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BEFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BEFF8u, 0x4124B0u, 0x4124B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4124B8u;
label_4124b8:
    // 0x4124b8: 0x8e24215c  lw          $a0, 0x215C($s1)
    ctx->pc = 0x4124b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8540)));
label_4124bc:
    // 0x4124bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4124bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4124c0:
    // 0x4124c0: 0xc12fbb0  jal         func_4BEEC0
label_4124c4:
    if (ctx->pc == 0x4124C4u) {
        ctx->pc = 0x4124C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4124C0u;
        // 0x4124c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4124C8u;
        goto label_4124c8;
    }
    ctx->pc = 0x4124C0u;
    SET_GPR_U32(ctx, 31, 0x4124C8u);
    ctx->pc = 0x4124C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4124C0u;
    // 0x4124c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BEEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BEEC0u, 0x4124C0u, 0x4124C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4124C8u;
label_4124c8:
    // 0x4124c8: 0xae222150  sw          $v0, 0x2150($s1)
    ctx->pc = 0x4124c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8528), GPR_U32(ctx, 2));
label_4124cc:
    // 0x4124cc: 0xc12fbe8  jal         func_4BEFA0
label_4124d0:
    if (ctx->pc == 0x4124D0u) {
        ctx->pc = 0x4124D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4124CCu;
        // 0x4124d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4124D4u;
        goto label_4124d4;
    }
    ctx->pc = 0x4124CCu;
    SET_GPR_U32(ctx, 31, 0x4124D4u);
    ctx->pc = 0x4124D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4124CCu;
    // 0x4124d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BEFA0u, 0x4124CCu, 0x4124D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4124D4u;
label_4124d4:
    // 0x4124d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4124d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4124d8:
    // 0x4124d8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4124d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4124dc:
    // 0x4124dc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4124dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4124e0:
    // 0x4124e0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4124e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4124e4:
    // 0x4124e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4124e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4124e8:
    // 0x4124e8: 0xac4047f4  sw          $zero, 0x47F4($v0)
    ctx->pc = 0x4124e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18420), GPR_U32(ctx, 0));
label_4124ec:
    // 0x4124ec: 0x3e00008  jr          $ra
label_4124f0:
    if (ctx->pc == 0x4124F0u) {
        ctx->pc = 0x4124F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4124ECu;
        // 0x4124f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4124F4u;
        goto label_4124f4;
    }
    ctx->pc = 0x4124ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4124F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4124ECu;
        // 0x4124f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4124ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4124F4u;
label_4124f4:
    // 0x4124f4: 0x0  nop
    ctx->pc = 0x4124f4u;
    // NOP
    ctx->pc = 0x4124f8u;
}
