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

// Function: sub_0017C508
// Address: 0x17c508 - 0x17c690
void sub_0017C508_0x17c508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C508_0x17c508");
#endif

    switch (ctx->pc) {
        case 0x17c5e4u: goto label_17c5e4;
        case 0x17c5f0u: goto label_17c5f0;
        case 0x17c5fcu: goto label_17c5fc;
        case 0x17c608u: goto label_17c608;
        case 0x17c618u: goto label_17c618;
        case 0x17c620u: goto label_17c620;
        case 0x17c62cu: goto label_17c62c;
        case 0x17c638u: goto label_17c638;
        case 0x17c640u: goto label_17c640;
        case 0x17c64cu: goto label_17c64c;
        case 0x17c658u: goto label_17c658;
        default: break;
    }

    ctx->pc = 0x17c508u;

    // 0x17c508: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17c508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17c50c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x17c50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x17c510: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17c510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17c514: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17c514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c518: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x17c518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x17c51c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17c51cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c520: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x17c520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x17c524: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x17c524u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c528: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17c528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17c52c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x17c52cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17c530: 0x96430044  lhu         $v1, 0x44($s2)
    ctx->pc = 0x17c530u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x17c534: 0xa623002e  sh          $v1, 0x2E($s1)
    ctx->pc = 0x17c534u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x17c538: 0x9642004e  lhu         $v0, 0x4E($s2)
    ctx->pc = 0x17c538u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 78)));
    // 0x17c53c: 0xa6220030  sh          $v0, 0x30($s1)
    ctx->pc = 0x17c53cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x17c540: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x17c540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x17c544: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x17c544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x17c548: 0x9642004c  lhu         $v0, 0x4C($s2)
    ctx->pc = 0x17c548u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x17c54c: 0xa624002a  sh          $a0, 0x2A($s1)
    ctx->pc = 0x17c54cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x17c550: 0xa622002c  sh          $v0, 0x2C($s1)
    ctx->pc = 0x17c550u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x17c554: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x17c554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x17c558: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x17c558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c55c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x17c55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x17c560: 0xc641003c  lwc1        $f1, 0x3C($s2)
    ctx->pc = 0x17c560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c564: 0xde230008  ld          $v1, 0x8($s1)
    ctx->pc = 0x17c564u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17c568: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x17c568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x17c56c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x17c56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x17c570: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x17c570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c574: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x17c574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x17c578: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x17c578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x17c57c: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x17c57cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x17c580: 0xa2330018  sb          $s3, 0x18($s1)
    ctx->pc = 0x17c580u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 19));
    // 0x17c584: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x17c584u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
    // 0x17c588: 0xa2200019  sb          $zero, 0x19($s1)
    ctx->pc = 0x17c588u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 25), (uint8_t)GPR_U32(ctx, 0));
    // 0x17c58c: 0xa620001c  sh          $zero, 0x1C($s1)
    ctx->pc = 0x17c58cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x17c590: 0xa220001a  sb          $zero, 0x1A($s1)
    ctx->pc = 0x17c590u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 0));
    // 0x17c594: 0xa220001b  sb          $zero, 0x1B($s1)
    ctx->pc = 0x17c594u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x17c598: 0xa620001e  sh          $zero, 0x1E($s1)
    ctx->pc = 0x17c598u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x17c59c: 0xa6200028  sh          $zero, 0x28($s1)
    ctx->pc = 0x17c59cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x17c5a0: 0xa6200020  sh          $zero, 0x20($s1)
    ctx->pc = 0x17c5a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x17c5a4: 0xa6200022  sh          $zero, 0x22($s1)
    ctx->pc = 0x17c5a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x17c5a8: 0xa6200024  sh          $zero, 0x24($s1)
    ctx->pc = 0x17c5a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x17c5ac: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x17C5ACu;
    {
        const bool branch_taken_0x17c5ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C5ACu;
        // 0x17c5b0: 0xa6200026  sh          $zero, 0x26($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c5ac) {
            ctx->pc = 0x17C620u;
            goto label_17c620;
        }
    }
    ctx->pc = 0x17C5B4u;
    // 0x17c5b4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x17c5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c5b8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x17c5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x17c5bc: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x17c5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c5c0: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x17c5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17c5c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17c5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17c5c8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x17c5c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17c5cc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x17c5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x17c5d0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x17c5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17c5d4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x17c5d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17c5d8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x17c5d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17c5dc: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x17C5DCu;
    SET_GPR_U32(ctx, 31, 0x17C5E4u);
    ctx->pc = 0x17C5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C5DCu;
    // 0x17c5e0: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x17C5DCu, 0x17C5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C5E4u;
label_17c5e4:
    // 0x17c5e4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x17c5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x17c5e8: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x17C5E8u;
    SET_GPR_U32(ctx, 31, 0x17C5F0u);
    ctx->pc = 0x17C5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C5E8u;
    // 0x17c5ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x17C5E8u, 0x17C5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C5F0u;
label_17c5f0:
    // 0x17c5f0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x17c5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x17c5f4: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x17C5F4u;
    SET_GPR_U32(ctx, 31, 0x17C5FCu);
    ctx->pc = 0x17C5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C5F4u;
    // 0x17c5f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x17C5F4u, 0x17C5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C5FCu;
label_17c5fc:
    // 0x17c5fc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x17c5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x17c600: 0xc0e8b70  jal         func_3A2DC0
    ctx->pc = 0x17C600u;
    SET_GPR_U32(ctx, 31, 0x17C608u);
    ctx->pc = 0x17C604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C600u;
    // 0x17c604: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x17C600u, 0x17C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C608u;
label_17c608:
    // 0x17c608: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x17c608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x17c60c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x17c60cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x17c610: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x17C610u;
    SET_GPR_U32(ctx, 31, 0x17C618u);
    ctx->pc = 0x17C614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C610u;
    // 0x17c614: 0x24a52218  addiu       $a1, $a1, 0x2218 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x17C610u, 0x17C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C618u;
label_17c618:
    // 0x17c618: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x17C618u;
    SET_GPR_U32(ctx, 31, 0x17C620u);
    ctx->pc = 0x17C61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C618u;
    // 0x17c61c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x17C618u, 0x17C620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C620u;
label_17c620:
    // 0x17c620: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x17c620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17c624: 0xc11b1b0  jal         func_46C6C0
    ctx->pc = 0x17C624u;
    SET_GPR_U32(ctx, 31, 0x17C62Cu);
    ctx->pc = 0x17C628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C624u;
    // 0x17c628: 0x3410ffff  ori         $s0, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C6C0u, 0x17C624u, 0x17C62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C62Cu;
label_17c62c:
    // 0x17c62c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x17c62cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x17c630: 0xc12107a  jal         func_4841E8
    ctx->pc = 0x17C630u;
    SET_GPR_U32(ctx, 31, 0x17C638u);
    ctx->pc = 0x17C634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C630u;
    // 0x17c634: 0xa0530002  sb          $s3, 0x2($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4841E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4841E8u, 0x17C630u, 0x17C638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C638u;
label_17c638:
    // 0x17c638: 0xc120f22  jal         func_483C88
    ctx->pc = 0x17C638u;
    SET_GPR_U32(ctx, 31, 0x17C640u);
    ctx->pc = 0x17C63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C638u;
    // 0x17c63c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483C88u, 0x17C638u, 0x17C640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C640u;
label_17c640:
    // 0x17c640: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x17c640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17c644: 0xc12247e  jal         func_4891F8
    ctx->pc = 0x17C644u;
    SET_GPR_U32(ctx, 31, 0x17C64Cu);
    ctx->pc = 0x17C648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C644u;
    // 0x17c648: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4891F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891F8u, 0x17C644u, 0x17C64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C64Cu;
label_17c64c:
    // 0x17c64c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17c64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c650: 0xc05f210  jal         func_17C840
    ctx->pc = 0x17C650u;
    SET_GPR_U32(ctx, 31, 0x17C658u);
    ctx->pc = 0x17C654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C650u;
    // 0x17c654: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C840u, 0x17C650u, 0x17C658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C658u;
label_17c658:
    // 0x17c658: 0x9623002c  lhu         $v1, 0x2C($s1)
    ctx->pc = 0x17c658u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x17c65c: 0x10700005  beq         $v1, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17C65Cu;
    {
        const bool branch_taken_0x17c65c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x17C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C65Cu;
        // 0x17c660: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c65c) {
            ctx->pc = 0x17C674u;
            goto label_17c674;
        }
    }
    ctx->pc = 0x17C664u;
    // 0x17c664: 0x9622002a  lhu         $v0, 0x2A($s1)
    ctx->pc = 0x17c664u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x17c668: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x17C668u;
    {
        const bool branch_taken_0x17c668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x17c668) {
            ctx->pc = 0x17C66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C668u;
            // 0x17c66c: 0xa620002a  sh          $zero, 0x2A($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C670u;
            goto label_17c670;
        }
    }
    ctx->pc = 0x17C670u;
label_17c670:
    // 0x17c670: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17c670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17c674:
    // 0x17c674: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x17c674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17c678: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x17c678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17c67c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17c67cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c680: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x17c680u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c684: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c688: 0x3e00008  jr          $ra
    ctx->pc = 0x17C688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C688u;
        // 0x17c68c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C690u;
}
