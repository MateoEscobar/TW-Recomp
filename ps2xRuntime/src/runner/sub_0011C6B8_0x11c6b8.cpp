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

// Function: sub_0011C6B8
// Address: 0x11c6b8 - 0x11c858
void sub_0011C6B8_0x11c6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C6B8_0x11c6b8");
#endif

    switch (ctx->pc) {
        case 0x11c6b8u: goto label_11c6b8;
        case 0x11c6bcu: goto label_11c6bc;
        case 0x11c6c0u: goto label_11c6c0;
        case 0x11c6c4u: goto label_11c6c4;
        case 0x11c6c8u: goto label_11c6c8;
        case 0x11c6ccu: goto label_11c6cc;
        case 0x11c6d0u: goto label_11c6d0;
        case 0x11c6d4u: goto label_11c6d4;
        case 0x11c6d8u: goto label_11c6d8;
        case 0x11c6dcu: goto label_11c6dc;
        case 0x11c6e0u: goto label_11c6e0;
        case 0x11c6e4u: goto label_11c6e4;
        case 0x11c6e8u: goto label_11c6e8;
        case 0x11c6ecu: goto label_11c6ec;
        case 0x11c6f0u: goto label_11c6f0;
        case 0x11c6f4u: goto label_11c6f4;
        case 0x11c6f8u: goto label_11c6f8;
        case 0x11c6fcu: goto label_11c6fc;
        case 0x11c700u: goto label_11c700;
        case 0x11c704u: goto label_11c704;
        case 0x11c708u: goto label_11c708;
        case 0x11c70cu: goto label_11c70c;
        case 0x11c710u: goto label_11c710;
        case 0x11c714u: goto label_11c714;
        case 0x11c718u: goto label_11c718;
        case 0x11c71cu: goto label_11c71c;
        case 0x11c720u: goto label_11c720;
        case 0x11c724u: goto label_11c724;
        case 0x11c728u: goto label_11c728;
        case 0x11c72cu: goto label_11c72c;
        case 0x11c730u: goto label_11c730;
        case 0x11c734u: goto label_11c734;
        case 0x11c738u: goto label_11c738;
        case 0x11c73cu: goto label_11c73c;
        case 0x11c740u: goto label_11c740;
        case 0x11c744u: goto label_11c744;
        case 0x11c748u: goto label_11c748;
        case 0x11c74cu: goto label_11c74c;
        case 0x11c750u: goto label_11c750;
        case 0x11c754u: goto label_11c754;
        case 0x11c758u: goto label_11c758;
        case 0x11c75cu: goto label_11c75c;
        case 0x11c760u: goto label_11c760;
        case 0x11c764u: goto label_11c764;
        case 0x11c768u: goto label_11c768;
        case 0x11c76cu: goto label_11c76c;
        case 0x11c770u: goto label_11c770;
        case 0x11c774u: goto label_11c774;
        case 0x11c778u: goto label_11c778;
        case 0x11c77cu: goto label_11c77c;
        case 0x11c780u: goto label_11c780;
        case 0x11c784u: goto label_11c784;
        case 0x11c788u: goto label_11c788;
        case 0x11c78cu: goto label_11c78c;
        case 0x11c790u: goto label_11c790;
        case 0x11c794u: goto label_11c794;
        case 0x11c798u: goto label_11c798;
        case 0x11c79cu: goto label_11c79c;
        case 0x11c7a0u: goto label_11c7a0;
        case 0x11c7a4u: goto label_11c7a4;
        case 0x11c7a8u: goto label_11c7a8;
        case 0x11c7acu: goto label_11c7ac;
        case 0x11c7b0u: goto label_11c7b0;
        case 0x11c7b4u: goto label_11c7b4;
        case 0x11c7b8u: goto label_11c7b8;
        case 0x11c7bcu: goto label_11c7bc;
        case 0x11c7c0u: goto label_11c7c0;
        case 0x11c7c4u: goto label_11c7c4;
        case 0x11c7c8u: goto label_11c7c8;
        case 0x11c7ccu: goto label_11c7cc;
        case 0x11c7d0u: goto label_11c7d0;
        case 0x11c7d4u: goto label_11c7d4;
        case 0x11c7d8u: goto label_11c7d8;
        case 0x11c7dcu: goto label_11c7dc;
        case 0x11c7e0u: goto label_11c7e0;
        case 0x11c7e4u: goto label_11c7e4;
        case 0x11c7e8u: goto label_11c7e8;
        case 0x11c7ecu: goto label_11c7ec;
        case 0x11c7f0u: goto label_11c7f0;
        case 0x11c7f4u: goto label_11c7f4;
        case 0x11c7f8u: goto label_11c7f8;
        case 0x11c7fcu: goto label_11c7fc;
        case 0x11c800u: goto label_11c800;
        case 0x11c804u: goto label_11c804;
        case 0x11c808u: goto label_11c808;
        case 0x11c80cu: goto label_11c80c;
        case 0x11c810u: goto label_11c810;
        case 0x11c814u: goto label_11c814;
        case 0x11c818u: goto label_11c818;
        case 0x11c81cu: goto label_11c81c;
        case 0x11c820u: goto label_11c820;
        case 0x11c824u: goto label_11c824;
        case 0x11c828u: goto label_11c828;
        case 0x11c82cu: goto label_11c82c;
        case 0x11c830u: goto label_11c830;
        case 0x11c834u: goto label_11c834;
        case 0x11c838u: goto label_11c838;
        case 0x11c83cu: goto label_11c83c;
        case 0x11c840u: goto label_11c840;
        case 0x11c844u: goto label_11c844;
        case 0x11c848u: goto label_11c848;
        case 0x11c84cu: goto label_11c84c;
        case 0x11c850u: goto label_11c850;
        case 0x11c854u: goto label_11c854;
        default: break;
    }

    ctx->pc = 0x11c6b8u;

label_11c6b8:
    // 0x11c6b8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11c6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_11c6bc:
    // 0x11c6bc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x11c6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_11c6c0:
    // 0x11c6c0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x11c6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_11c6c4:
    // 0x11c6c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11c6c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11c6c8:
    // 0x11c6c8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x11c6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_11c6cc:
    // 0x11c6cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x11c6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_11c6d0:
    // 0x11c6d0: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x11c6d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_11c6d4:
    // 0x11c6d4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x11c6d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_11c6d8:
    // 0x11c6d8: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x11c6d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_11c6dc:
    // 0x11c6dc: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x11c6dcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
label_11c6e0:
    // 0x11c6e0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x11c6e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_11c6e4:
    // 0x11c6e4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x11c6e4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_11c6e8:
    // 0x11c6e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x11c6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_11c6ec:
    // 0x11c6ec: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x11c6ecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_11c6f0:
    // 0x11c6f0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11c6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_11c6f4:
    // 0x11c6f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x11c6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_11c6f8:
    // 0x11c6f8: 0xc0e4060  jal         func_390180
label_11c6fc:
    if (ctx->pc == 0x11C6FCu) {
        ctx->pc = 0x11C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6F8u;
        // 0x11c6fc: 0xafa50020  sw          $a1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C700u;
        goto label_11c700;
    }
    ctx->pc = 0x11C6F8u;
    SET_GPR_U32(ctx, 31, 0x11C700u);
    ctx->pc = 0x11C6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C6F8u;
    // 0x11c6fc: 0xafa50020  sw          $a1, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x11C6F8u, 0x11C700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C700u;
label_11c700:
    // 0x11c700: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11c700u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c704:
    // 0x11c704: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_11c708:
    if (ctx->pc == 0x11C708u) {
        ctx->pc = 0x11C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C704u;
        // 0x11c708: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C70Cu;
        goto label_11c70c;
    }
    ctx->pc = 0x11C704u;
    {
        const bool branch_taken_0x11c704 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C704u;
        // 0x11c708: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c704) {
            ctx->pc = 0x11C724u;
            goto label_11c724;
        }
    }
    ctx->pc = 0x11C70Cu;
label_11c70c:
    // 0x11c70c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11c70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11c710:
    // 0x11c710: 0xc04786c  jal         func_11E1B0
label_11c714:
    if (ctx->pc == 0x11C714u) {
        ctx->pc = 0x11C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C710u;
        // 0x11c714: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C718u;
        goto label_11c718;
    }
    ctx->pc = 0x11C710u;
    SET_GPR_U32(ctx, 31, 0x11C718u);
    ctx->pc = 0x11C714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C710u;
    // 0x11c714: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B0u, 0x11C710u, 0x11C718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C718u;
label_11c718:
    // 0x11c718: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11c718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c71c:
    // 0x11c71c: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
label_11c720:
    if (ctx->pc == 0x11C720u) {
        ctx->pc = 0x11C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C71Cu;
        // 0x11c720: 0xc6050008  lwc1        $f5, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C724u;
        goto label_11c724;
    }
    ctx->pc = 0x11C71Cu;
    {
        const bool branch_taken_0x11c71c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c71c) {
            ctx->pc = 0x11C720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C71Cu;
            // 0x11c720: 0xc6050008  lwc1        $f5, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C730u;
            goto label_11c730;
        }
    }
    ctx->pc = 0x11C724u;
label_11c724:
    // 0x11c724: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x11c724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_11c728:
    // 0x11c728: 0x10000040  b           . + 4 + (0x40 << 2)
label_11c72c:
    if (ctx->pc == 0x11C72Cu) {
        ctx->pc = 0x11C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C728u;
        // 0x11c72c: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C730u;
        goto label_11c730;
    }
    ctx->pc = 0x11C728u;
    {
        const bool branch_taken_0x11c728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C728u;
        // 0x11c72c: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c728) {
            ctx->pc = 0x11C82Cu;
            goto label_11c82c;
        }
    }
    ctx->pc = 0x11C730u;
label_11c730:
    // 0x11c730: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11c730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11c734:
    // 0x11c734: 0xc6260008  lwc1        $f6, 0x8($s1)
    ctx->pc = 0x11c734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_11c738:
    // 0x11c738: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11c738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11c73c:
    // 0x11c73c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x11c73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11c740:
    // 0x11c740: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x11c740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_11c744:
    // 0x11c744: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x11c744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11c748:
    // 0x11c748: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x11c748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11c74c:
    // 0x11c74c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11c74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11c750:
    // 0x11c750: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x11c750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_11c754:
    // 0x11c754: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x11c754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_11c758:
    // 0x11c758: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x11c758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_11c75c:
    // 0x11c75c: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x11c75cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_11c760:
    // 0x11c760: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x11c760u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_11c764:
    // 0x11c764: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x11c764u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_11c768:
    // 0x11c768: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x11c768u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_11c76c:
    // 0x11c76c: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x11c76cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_11c770:
    // 0x11c770: 0xc0488ac  jal         func_1222B0
label_11c774:
    if (ctx->pc == 0x11C774u) {
        ctx->pc = 0x11C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C770u;
        // 0x11c774: 0xe7a4000c  swc1        $f4, 0xC($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C778u;
        goto label_11c778;
    }
    ctx->pc = 0x11C770u;
    SET_GPR_U32(ctx, 31, 0x11C778u);
    ctx->pc = 0x11C774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C770u;
    // 0x11c774: 0xe7a4000c  swc1        $f4, 0xC($sp) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1222B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1222B0u, 0x11C770u, 0x11C778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C778u;
label_11c778:
    // 0x11c778: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11c778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11c77c:
    // 0x11c77c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11c77cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_11c780:
    // 0x11c780: 0x84640190  lh          $a0, 0x190($v1)
    ctx->pc = 0x11c780u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 400)));
label_11c784:
    // 0x11c784: 0x8c620194  lw          $v0, 0x194($v1)
    ctx->pc = 0x11c784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
label_11c788:
    // 0x11c788: 0x40f809  jalr        $v0
label_11c78c:
    if (ctx->pc == 0x11C78Cu) {
        ctx->pc = 0x11C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C788u;
        // 0x11c78c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C790u;
        goto label_11c790;
    }
    ctx->pc = 0x11C788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11C790u);
        ctx->pc = 0x11C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C788u;
        // 0x11c78c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C788u, 0x11C790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C790u;
label_11c790:
    // 0x11c790: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11c790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11c794:
    // 0x11c794: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11c794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11c798:
    // 0x11c798: 0x846401b8  lh          $a0, 0x1B8($v1)
    ctx->pc = 0x11c798u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 440)));
label_11c79c:
    // 0x11c79c: 0x8c6601bc  lw          $a2, 0x1BC($v1)
    ctx->pc = 0x11c79cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
label_11c7a0:
    // 0x11c7a0: 0xc0f809  jalr        $a2
label_11c7a4:
    if (ctx->pc == 0x11C7A4u) {
        ctx->pc = 0x11C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7A0u;
        // 0x11c7a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C7A8u;
        goto label_11c7a8;
    }
    ctx->pc = 0x11C7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x11C7A8u);
        ctx->pc = 0x11C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7A0u;
        // 0x11c7a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C7A0u, 0x11C7A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C7A8u;
label_11c7a8:
    // 0x11c7a8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x11c7a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11c7ac:
    // 0x11c7ac: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x11c7acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_11c7b0:
    // 0x11c7b0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11c7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11c7b4:
    // 0x11c7b4: 0x7e4201e0  sq          $v0, 0x1E0($s2)
    ctx->pc = 0x11c7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 480), GPR_VEC(ctx, 2));
label_11c7b8:
    // 0x11c7b8: 0x846401a0  lh          $a0, 0x1A0($v1)
    ctx->pc = 0x11c7b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 416)));
label_11c7bc:
    // 0x11c7bc: 0x8c6201a4  lw          $v0, 0x1A4($v1)
    ctx->pc = 0x11c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 420)));
label_11c7c0:
    // 0x11c7c0: 0x40f809  jalr        $v0
label_11c7c4:
    if (ctx->pc == 0x11C7C4u) {
        ctx->pc = 0x11C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7C0u;
        // 0x11c7c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C7C8u;
        goto label_11c7c8;
    }
    ctx->pc = 0x11C7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11C7C8u);
        ctx->pc = 0x11C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7C0u;
        // 0x11c7c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C7C0u, 0x11C7C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C7C8u;
label_11c7c8:
    // 0x11c7c8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x11c7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11c7cc:
    // 0x11c7cc: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x11c7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
label_11c7d0:
    // 0x11c7d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11c7d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11c7d4:
    // 0x11c7d4: 0x84a401a8  lh          $a0, 0x1A8($a1)
    ctx->pc = 0x11c7d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 424)));
label_11c7d8:
    // 0x11c7d8: 0x460cb329  min.s       $f12, $f22, $f12
    ctx->pc = 0x11c7d8u;
    ctx->f[12] = std::min(ctx->f[22], ctx->f[12]);
label_11c7dc:
    // 0x11c7dc: 0x8ca301ac  lw          $v1, 0x1AC($a1)
    ctx->pc = 0x11c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 428)));
label_11c7e0:
    // 0x11c7e0: 0x60f809  jalr        $v1
label_11c7e4:
    if (ctx->pc == 0x11C7E4u) {
        ctx->pc = 0x11C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7E0u;
        // 0x11c7e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C7E8u;
        goto label_11c7e8;
    }
    ctx->pc = 0x11C7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11C7E8u);
        ctx->pc = 0x11C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7E0u;
        // 0x11c7e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C7E0u, 0x11C7E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C7E8u;
label_11c7e8:
    // 0x11c7e8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11c7ec:
    // 0x11c7ec: 0x845001b0  lh          $s0, 0x1B0($v0)
    ctx->pc = 0x11c7ecu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 432)));
label_11c7f0:
    // 0x11c7f0: 0x245101b0  addiu       $s1, $v0, 0x1B0
    ctx->pc = 0x11c7f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
label_11c7f4:
    // 0x11c7f4: 0x84440208  lh          $a0, 0x208($v0)
    ctx->pc = 0x11c7f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 520)));
label_11c7f8:
    // 0x11c7f8: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x11c7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_11c7fc:
    // 0x11c7fc: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x11c7fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_11c800:
    // 0x11c800: 0x60f809  jalr        $v1
label_11c804:
    if (ctx->pc == 0x11C804u) {
        ctx->pc = 0x11C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C800u;
        // 0x11c804: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C808u;
        goto label_11c808;
    }
    ctx->pc = 0x11C800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11C808u);
        ctx->pc = 0x11C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C800u;
        // 0x11c804: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C800u, 0x11C808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C808u;
label_11c808:
    // 0x11c808: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x11c808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_11c80c:
    // 0x11c80c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c810:
    // 0x11c810: 0x40f809  jalr        $v0
label_11c814:
    if (ctx->pc == 0x11C814u) {
        ctx->pc = 0x11C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C810u;
        // 0x11c814: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C818u;
        goto label_11c818;
    }
    ctx->pc = 0x11C810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11C818u);
        ctx->pc = 0x11C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C810u;
        // 0x11c814: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C810u, 0x11C818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C818u;
label_11c818:
    // 0x11c818: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11c818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11c81c:
    // 0x11c81c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x11c81cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_11c820:
    // 0x11c820: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x11c820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_11c824:
    // 0x11c824: 0x40f809  jalr        $v0
label_11c828:
    if (ctx->pc == 0x11C828u) {
        ctx->pc = 0x11C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C824u;
        // 0x11c828: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C82Cu;
        goto label_11c82c;
    }
    ctx->pc = 0x11C824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11C82Cu);
        ctx->pc = 0x11C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C824u;
        // 0x11c828: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C824u, 0x11C82Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C82Cu;
label_11c82c:
    // 0x11c82c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x11c82cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_11c830:
    // 0x11c830: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x11c830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_11c834:
    // 0x11c834: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x11c834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_11c838:
    // 0x11c838: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x11c838u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11c83c:
    // 0x11c83c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11c83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_11c840:
    // 0x11c840: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x11c840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_11c844:
    // 0x11c844: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x11c844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_11c848:
    // 0x11c848: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x11c848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11c84c:
    // 0x11c84c: 0x3e00008  jr          $ra
label_11c850:
    if (ctx->pc == 0x11C850u) {
        ctx->pc = 0x11C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C84Cu;
        // 0x11c850: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C854u;
        goto label_11c854;
    }
    ctx->pc = 0x11C84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C84Cu;
        // 0x11c850: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C854u;
label_11c854:
    // 0x11c854: 0x0  nop
    ctx->pc = 0x11c854u;
    // NOP
    ctx->pc = 0x11c858u;
}
