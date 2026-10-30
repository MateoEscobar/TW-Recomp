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

// Function: sub_0011B970
// Address: 0x11b970 - 0x11ba20
void sub_0011B970_0x11b970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B970_0x11b970");
#endif

    switch (ctx->pc) {
        case 0x11b970u: goto label_11b970;
        case 0x11b974u: goto label_11b974;
        case 0x11b978u: goto label_11b978;
        case 0x11b97cu: goto label_11b97c;
        case 0x11b980u: goto label_11b980;
        case 0x11b984u: goto label_11b984;
        case 0x11b988u: goto label_11b988;
        case 0x11b98cu: goto label_11b98c;
        case 0x11b990u: goto label_11b990;
        case 0x11b994u: goto label_11b994;
        case 0x11b998u: goto label_11b998;
        case 0x11b99cu: goto label_11b99c;
        case 0x11b9a0u: goto label_11b9a0;
        case 0x11b9a4u: goto label_11b9a4;
        case 0x11b9a8u: goto label_11b9a8;
        case 0x11b9acu: goto label_11b9ac;
        case 0x11b9b0u: goto label_11b9b0;
        case 0x11b9b4u: goto label_11b9b4;
        case 0x11b9b8u: goto label_11b9b8;
        case 0x11b9bcu: goto label_11b9bc;
        case 0x11b9c0u: goto label_11b9c0;
        case 0x11b9c4u: goto label_11b9c4;
        case 0x11b9c8u: goto label_11b9c8;
        case 0x11b9ccu: goto label_11b9cc;
        case 0x11b9d0u: goto label_11b9d0;
        case 0x11b9d4u: goto label_11b9d4;
        case 0x11b9d8u: goto label_11b9d8;
        case 0x11b9dcu: goto label_11b9dc;
        case 0x11b9e0u: goto label_11b9e0;
        case 0x11b9e4u: goto label_11b9e4;
        case 0x11b9e8u: goto label_11b9e8;
        case 0x11b9ecu: goto label_11b9ec;
        case 0x11b9f0u: goto label_11b9f0;
        case 0x11b9f4u: goto label_11b9f4;
        case 0x11b9f8u: goto label_11b9f8;
        case 0x11b9fcu: goto label_11b9fc;
        case 0x11ba00u: goto label_11ba00;
        case 0x11ba04u: goto label_11ba04;
        case 0x11ba08u: goto label_11ba08;
        case 0x11ba0cu: goto label_11ba0c;
        case 0x11ba10u: goto label_11ba10;
        case 0x11ba14u: goto label_11ba14;
        case 0x11ba18u: goto label_11ba18;
        case 0x11ba1cu: goto label_11ba1c;
        default: break;
    }

    ctx->pc = 0x11b970u;

label_11b970:
    // 0x11b970: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11b970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_11b974:
    // 0x11b974: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x11b974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_11b978:
    // 0x11b978: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x11b978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_11b97c:
    // 0x11b97c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11b97cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11b980:
    // 0x11b980: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x11b980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_11b984:
    // 0x11b984: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11b984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_11b988:
    // 0x11b988: 0xc0e4060  jal         func_390180
label_11b98c:
    if (ctx->pc == 0x11B98Cu) {
        ctx->pc = 0x11B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B988u;
        // 0x11b98c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B990u;
        goto label_11b990;
    }
    ctx->pc = 0x11B988u;
    SET_GPR_U32(ctx, 31, 0x11B990u);
    ctx->pc = 0x11B98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B988u;
    // 0x11b98c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x11B988u, 0x11B990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B990u;
label_11b990:
    // 0x11b990: 0xc047a5e  jal         func_11E978
label_11b994:
    if (ctx->pc == 0x11B994u) {
        ctx->pc = 0x11B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B990u;
        // 0x11b994: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B998u;
        goto label_11b998;
    }
    ctx->pc = 0x11B990u;
    SET_GPR_U32(ctx, 31, 0x11B998u);
    ctx->pc = 0x11B994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B990u;
    // 0x11b994: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E978u, 0x11B990u, 0x11B998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B998u;
label_11b998:
    // 0x11b998: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x11b998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11b99c:
    // 0x11b99c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x11b99cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_11b9a0:
    // 0x11b9a0: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x11b9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11b9a4:
    // 0x11b9a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11b9a8:
    // 0x11b9a8: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x11b9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_11b9ac:
    // 0x11b9ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11b9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11b9b0:
    // 0x11b9b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11b9b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b9b4:
    // 0x11b9b4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x11b9b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_11b9b8:
    // 0x11b9b8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x11b9b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_11b9bc:
    // 0x11b9bc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x11b9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_11b9c0:
    // 0x11b9c0: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x11b9c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_11b9c4:
    // 0x11b9c4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x11b9c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11b9c8:
    // 0x11b9c8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x11b9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_11b9cc:
    // 0x11b9cc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x11b9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11b9d0:
    // 0x11b9d0: 0x84c500a8  lh          $a1, 0xA8($a2)
    ctx->pc = 0x11b9d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 168)));
label_11b9d4:
    // 0x11b9d4: 0x8cc300ac  lw          $v1, 0xAC($a2)
    ctx->pc = 0x11b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
label_11b9d8:
    // 0x11b9d8: 0x60f809  jalr        $v1
label_11b9dc:
    if (ctx->pc == 0x11B9DCu) {
        ctx->pc = 0x11B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9D8u;
        // 0x11b9dc: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B9E0u;
        goto label_11b9e0;
    }
    ctx->pc = 0x11B9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11B9E0u);
        ctx->pc = 0x11B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9D8u;
        // 0x11b9dc: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B9D8u, 0x11B9E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B9E0u;
label_11b9e0:
    // 0x11b9e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11b9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11b9e4:
    // 0x11b9e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11b9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11b9e8:
    // 0x11b9e8: 0xc0cd69e  jal         func_335A78
label_11b9ec:
    if (ctx->pc == 0x11B9ECu) {
        ctx->pc = 0x11B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9E8u;
        // 0x11b9ec: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B9F0u;
        goto label_11b9f0;
    }
    ctx->pc = 0x11B9E8u;
    SET_GPR_U32(ctx, 31, 0x11B9F0u);
    ctx->pc = 0x11B9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B9E8u;
    // 0x11b9ec: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335A78u, 0x11B9E8u, 0x11B9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B9F0u;
label_11b9f0:
    // 0x11b9f0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x11b9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11b9f4:
    // 0x11b9f4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x11b9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_11b9f8:
    // 0x11b9f8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x11b9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11b9fc:
    // 0x11b9fc: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x11b9fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_11ba00:
    // 0x11ba00: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x11ba00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_11ba04:
    // 0x11ba04: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x11ba04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_11ba08:
    // 0x11ba08: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x11ba08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_11ba0c:
    // 0x11ba0c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x11ba0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_11ba10:
    // 0x11ba10: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11ba10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_11ba14:
    // 0x11ba14: 0x3e00008  jr          $ra
label_11ba18:
    if (ctx->pc == 0x11BA18u) {
        ctx->pc = 0x11BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA14u;
        // 0x11ba18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BA1Cu;
        goto label_11ba1c;
    }
    ctx->pc = 0x11BA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA14u;
        // 0x11ba18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BA1Cu;
label_11ba1c:
    // 0x11ba1c: 0x0  nop
    ctx->pc = 0x11ba1cu;
    // NOP
    ctx->pc = 0x11ba20u;
}
