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

// Function: sub_00189ED8
// Address: 0x189ed8 - 0x18a2b0
void sub_00189ED8_0x189ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189ED8_0x189ed8");
#endif

    switch (ctx->pc) {
        case 0x189f10u: goto label_189f10;
        case 0x189f20u: goto label_189f20;
        case 0x189f30u: goto label_189f30;
        case 0x189f40u: goto label_189f40;
        case 0x189fa4u: goto label_189fa4;
        case 0x189ffcu: goto label_189ffc;
        case 0x18a008u: goto label_18a008;
        case 0x18a020u: goto label_18a020;
        case 0x18a034u: goto label_18a034;
        case 0x18a03cu: goto label_18a03c;
        case 0x18a050u: goto label_18a050;
        case 0x18a05cu: goto label_18a05c;
        case 0x18a07cu: goto label_18a07c;
        case 0x18a0c8u: goto label_18a0c8;
        case 0x18a0e4u: goto label_18a0e4;
        case 0x18a0f0u: goto label_18a0f0;
        case 0x18a108u: goto label_18a108;
        case 0x18a11cu: goto label_18a11c;
        case 0x18a14cu: goto label_18a14c;
        case 0x18a170u: goto label_18a170;
        case 0x18a180u: goto label_18a180;
        case 0x18a1acu: goto label_18a1ac;
        case 0x18a1b8u: goto label_18a1b8;
        case 0x18a1d0u: goto label_18a1d0;
        case 0x18a1e4u: goto label_18a1e4;
        case 0x18a200u: goto label_18a200;
        case 0x18a20cu: goto label_18a20c;
        case 0x18a218u: goto label_18a218;
        case 0x18a228u: goto label_18a228;
        case 0x18a230u: goto label_18a230;
        case 0x18a254u: goto label_18a254;
        case 0x18a25cu: goto label_18a25c;
        case 0x18a284u: goto label_18a284;
        default: break;
    }

    ctx->pc = 0x189ed8u;

    // 0x189ed8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x189ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x189edc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x189edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x189ee0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x189ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x189ee4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x189ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ee8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x189ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x189eec: 0x8c445340  lw          $a0, 0x5340($v0)
    ctx->pc = 0x189eecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5E5340u));
    // 0x189ef0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x189ef0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ef4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x189ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x189ef8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x189ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x189efc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x189efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x189f00: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x189f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x189f04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x189f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x189f08: 0xc05529a  jal         func_154A68
    ctx->pc = 0x189F08u;
    SET_GPR_U32(ctx, 31, 0x189F10u);
    ctx->pc = 0x189F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189F08u;
    // 0x189f0c: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x154A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154A68u, 0x189F08u, 0x189F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189F10u;
label_189f10:
    // 0x189f10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x189F10u;
    {
        const bool branch_taken_0x189f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189f10) {
            ctx->pc = 0x189F28u;
            goto label_189f28;
        }
    }
    ctx->pc = 0x189F18u;
    // 0x189f18: 0xc061664  jal         func_185990
    ctx->pc = 0x189F18u;
    SET_GPR_U32(ctx, 31, 0x189F20u);
    ctx->pc = 0x189F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189F18u;
    // 0x189f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185990u, 0x189F18u, 0x189F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189F20u;
label_189f20:
    // 0x189f20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x189F20u;
    {
        const bool branch_taken_0x189f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F20u;
        // 0x189f24: 0x26240c10  addiu       $a0, $s1, 0xC10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f20) {
            ctx->pc = 0x189F38u;
            goto label_189f38;
        }
    }
    ctx->pc = 0x189F28u;
label_189f28:
    // 0x189f28: 0xc0625b0  jal         func_1896C0
    ctx->pc = 0x189F28u;
    SET_GPR_U32(ctx, 31, 0x189F30u);
    ctx->pc = 0x189F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189F28u;
    // 0x189f2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1896C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1896C0u, 0x189F28u, 0x189F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189F30u;
label_189f30:
    // 0x189f30: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x189F30u;
    {
        const bool branch_taken_0x189f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F30u;
        // 0x189f34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f30) {
            ctx->pc = 0x18A288u;
            goto label_18a288;
        }
    }
    ctx->pc = 0x189F38u;
label_189f38:
    // 0x189f38: 0xc0e4060  jal         func_390180
    ctx->pc = 0x189F38u;
    SET_GPR_U32(ctx, 31, 0x189F40u);
    ctx->pc = 0x189F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189F38u;
    // 0x189f3c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x189F38u, 0x189F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189F40u;
label_189f40:
    // 0x189f40: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x189F40u;
    {
        const bool branch_taken_0x189f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189f40) {
            ctx->pc = 0x189F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189F40u;
            // 0x189f44: 0x8e220c04  lw          $v0, 0xC04($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189F58u;
            goto label_189f58;
        }
    }
    ctx->pc = 0x189F48u;
    // 0x189f48: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x189f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x189f4c: 0xc4402d80  lwc1        $f0, 0x2D80($v0)
    ctx->pc = 0x189f4cu;
    { uint32_t bits = FAST_READ32(0x552D80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189f50: 0xe6200c14  swc1        $f0, 0xC14($s1)
    ctx->pc = 0x189f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3092), bits); }
    // 0x189f54: 0x8e220c04  lw          $v0, 0xC04($s1)
    ctx->pc = 0x189f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3076)));
label_189f58:
    // 0x189f58: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x189F58u;
    {
        const bool branch_taken_0x189f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189f58) {
            ctx->pc = 0x189F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189F58u;
            // 0x189f5c: 0xc6200c0c  lwc1        $f0, 0xC0C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x189F70u;
            goto label_189f70;
        }
    }
    ctx->pc = 0x189F60u;
    // 0x189f60: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x189f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x189f64: 0xc4402d80  lwc1        $f0, 0x2D80($v0)
    ctx->pc = 0x189f64u;
    { uint32_t bits = FAST_READ32(0x552D80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189f68: 0xe6200c0c  swc1        $f0, 0xC0C($s1)
    ctx->pc = 0x189f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3084), bits); }
    // 0x189f6c: 0xc6200c0c  lwc1        $f0, 0xC0C($s1)
    ctx->pc = 0x189f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_189f70:
    // 0x189f70: 0xc6210c14  lwc1        $f1, 0xC14($s1)
    ctx->pc = 0x189f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189f74: 0x8e220bb8  lw          $v0, 0xBB8($s1)
    ctx->pc = 0x189f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3000)));
    // 0x189f78: 0x46010529  min.s       $f20, $f0, $f1
    ctx->pc = 0x189f78u;
    ctx->f[20] = std::min(ctx->f[0], ctx->f[1]);
    // 0x189f7c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x189F7Cu;
    {
        const bool branch_taken_0x189f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F7Cu;
        // 0x189f80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f7c) {
            ctx->pc = 0x18A088u;
            goto label_18a088;
        }
    }
    ctx->pc = 0x189F84u;
    // 0x189f84: 0x822201b8  lb          $v0, 0x1B8($s1)
    ctx->pc = 0x189f84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x189f88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x189F88u;
    {
        const bool branch_taken_0x189f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F88u;
        // 0x189f8c: 0x262301b8  addiu       $v1, $s1, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f88) {
            ctx->pc = 0x189FA0u;
            goto label_189fa0;
        }
    }
    ctx->pc = 0x189F90u;
    // 0x189f90: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x189f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x189f94: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x189F94u;
    {
        const bool branch_taken_0x189f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F94u;
        // 0x189f98: 0x2ca20040  sltiu       $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f94) {
            ctx->pc = 0x189FD4u;
            goto label_189fd4;
        }
    }
    ctx->pc = 0x189F9Cu;
    // 0x189f9c: 0x0  nop
    ctx->pc = 0x189f9cu;
    // NOP
label_189fa0:
    // 0x189fa0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x189fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_189fa4:
    // 0x189fa4: 0x2ca20040  sltiu       $v0, $a1, 0x40
    ctx->pc = 0x189fa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x189fa8: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x189FA8u;
    {
        const bool branch_taken_0x189fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189FA8u;
        // 0x189fac: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189fa8) {
            ctx->pc = 0x18A084u;
            goto label_18a084;
        }
    }
    ctx->pc = 0x189FB0u;
    // 0x189fb0: 0xa41818  mult        $v1, $a1, $a0
    ctx->pc = 0x189fb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x189fb4: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x189fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x189fb8: 0x804301b8  lb          $v1, 0x1B8($v0)
    ctx->pc = 0x189fb8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 440)));
    // 0x189fbc: 0x5060fff9  beql        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x189FBCu;
    {
        const bool branch_taken_0x189fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x189fbc) {
            ctx->pc = 0x189FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189FBCu;
            // 0x189fc0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189FA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189fa4;
        }
    }
    ctx->pc = 0x189FC4u;
    // 0x189fc4: 0x8c4301d8  lw          $v1, 0x1D8($v0)
    ctx->pc = 0x189fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 472)));
    // 0x189fc8: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x189FC8u;
    {
        const bool branch_taken_0x189fc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x189fc8) {
            ctx->pc = 0x189FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189FC8u;
            // 0x189fcc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189FA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189fa4;
        }
    }
    ctx->pc = 0x189FD0u;
    // 0x189fd0: 0x2ca20040  sltiu       $v0, $a1, 0x40
    ctx->pc = 0x189fd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_189fd4:
    // 0x189fd4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x189FD4u;
    {
        const bool branch_taken_0x189fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189FD4u;
        // 0x189fd8: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189fd4) {
            ctx->pc = 0x18A084u;
            goto label_18a084;
        }
    }
    ctx->pc = 0x189FDCu;
    // 0x189fdc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x189fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189fe0: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x189fe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x189fe4: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x189fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x189fe8: 0xa3a00026  sb          $zero, 0x26($sp)
    ctx->pc = 0x189fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 38), (uint8_t)GPR_U32(ctx, 0));
    // 0x189fec: 0x244201b8  addiu       $v0, $v0, 0x1B8
    ctx->pc = 0x189fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 440));
    // 0x189ff0: 0x2229021  addu        $s2, $s1, $v0
    ctx->pc = 0x189ff0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x189ff4: 0xc10c4de  jal         func_431378
    ctx->pc = 0x189FF4u;
    SET_GPR_U32(ctx, 31, 0x189FFCu);
    ctx->pc = 0x189FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189FF4u;
    // 0x189ff8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x189FF4u, 0x189FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189FFCu;
label_189ffc:
    // 0x189ffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a000: 0xc05e3d0  jal         func_178F40
    ctx->pc = 0x18A000u;
    SET_GPR_U32(ctx, 31, 0x18A008u);
    ctx->pc = 0x18A004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A000u;
    // 0x18a004: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178F40u, 0x18A000u, 0x18A008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A008u;
label_18a008:
    // 0x18a008: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18a008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a00c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18a00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a010: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18a010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a014: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18a014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a018: 0xc05be80  jal         func_16FA00
    ctx->pc = 0x18A018u;
    SET_GPR_U32(ctx, 31, 0x18A020u);
    ctx->pc = 0x18A01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A018u;
    // 0x18a01c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FA00u, 0x18A018u, 0x18A020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A020u;
label_18a020:
    // 0x18a020: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x18A020u;
    {
        const bool branch_taken_0x18a020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A020u;
        // 0x18a024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a020) {
            ctx->pc = 0x18A074u;
            goto label_18a074;
        }
    }
    ctx->pc = 0x18A028u;
    // 0x18a028: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18a028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a02c: 0xc05be60  jal         func_16F980
    ctx->pc = 0x18A02Cu;
    SET_GPR_U32(ctx, 31, 0x18A034u);
    ctx->pc = 0x18A030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A02Cu;
    // 0x18a030: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F980u, 0x18A02Cu, 0x18A034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A034u;
label_18a034:
    // 0x18a034: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18A034u;
    {
        const bool branch_taken_0x18a034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A034u;
        // 0x18a038: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a034) {
            ctx->pc = 0x18A064u;
            goto label_18a064;
        }
    }
    ctx->pc = 0x18A03Cu;
label_18a03c:
    // 0x18a03c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18a03cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a040: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18a040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a044: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18a044u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a048: 0xc05bc4a  jal         func_16F128
    ctx->pc = 0x18A048u;
    SET_GPR_U32(ctx, 31, 0x18A050u);
    ctx->pc = 0x18A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A048u;
    // 0x18a04c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F128u, 0x18A048u, 0x18A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A050u;
label_18a050:
    // 0x18a050: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18a050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a054: 0xc042f5c  jal         func_10BD70
    ctx->pc = 0x18A054u;
    SET_GPR_U32(ctx, 31, 0x18A05Cu);
    ctx->pc = 0x18A058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A054u;
    // 0x18a058: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BD70u, 0x18A054u, 0x18A05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A05Cu;
label_18a05c:
    // 0x18a05c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x18A05Cu;
    {
        const bool branch_taken_0x18a05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a05c) {
            ctx->pc = 0x18A228u;
            goto label_18a228;
        }
    }
    ctx->pc = 0x18A064u;
label_18a064:
    // 0x18a064: 0x16a00009  bnez        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x18A064u;
    {
        const bool branch_taken_0x18a064 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A064u;
        // 0x18a068: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a064) {
            ctx->pc = 0x18A08Cu;
            goto label_18a08c;
        }
    }
    ctx->pc = 0x18A06Cu;
    // 0x18a06c: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x18A06Cu;
    {
        const bool branch_taken_0x18a06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A06Cu;
        // 0x18a070: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a06c) {
            ctx->pc = 0x18A244u;
            goto label_18a244;
        }
    }
    ctx->pc = 0x18A074u;
label_18a074:
    // 0x18a074: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A074u;
    {
        const bool branch_taken_0x18a074 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A074u;
        // 0x18a078: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a074) {
            ctx->pc = 0x18A08Cu;
            goto label_18a08c;
        }
    }
    ctx->pc = 0x18A07Cu;
label_18a07c:
    // 0x18a07c: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x18A07Cu;
    {
        const bool branch_taken_0x18a07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A07Cu;
        // 0x18a080: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a07c) {
            ctx->pc = 0x18A288u;
            goto label_18a288;
        }
    }
    ctx->pc = 0x18A084u;
label_18a084:
    // 0x18a084: 0xae200bb8  sw          $zero, 0xBB8($s1)
    ctx->pc = 0x18a084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3000), GPR_U32(ctx, 0));
label_18a088:
    // 0x18a088: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x18a088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_18a08c:
    // 0x18a08c: 0xc4402d80  lwc1        $f0, 0x2D80($v0)
    ctx->pc = 0x18a08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a090: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x18a090u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18a094: 0x0  nop
    ctx->pc = 0x18a094u;
    // NOP
    // 0x18a098: 0x45010078  bc1t        . + 4 + (0x78 << 2)
    ctx->pc = 0x18A098u;
    {
        const bool branch_taken_0x18a098 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a098) {
            ctx->pc = 0x18A27Cu;
            goto label_18a27c;
        }
    }
    ctx->pc = 0x18A0A0u;
    // 0x18a0a0: 0xc6200c0c  lwc1        $f0, 0xC0C($s1)
    ctx->pc = 0x18a0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a0a4: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x18a0a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18a0a8: 0x0  nop
    ctx->pc = 0x18a0a8u;
    // NOP
    // 0x18a0ac: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x18A0ACu;
    {
        const bool branch_taken_0x18a0ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a0ac) {
            ctx->pc = 0x18A144u;
            goto label_18a144;
        }
    }
    ctx->pc = 0x18A0B4u;
    // 0x18a0b4: 0x8e240c04  lw          $a0, 0xC04($s1)
    ctx->pc = 0x18a0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3076)));
    // 0x18a0b8: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x18A0B8u;
    {
        const bool branch_taken_0x18a0b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a0b8) {
            ctx->pc = 0x18A144u;
            goto label_18a144;
        }
    }
    ctx->pc = 0x18A0C0u;
    // 0x18a0c0: 0xc059040  jal         func_164100
    ctx->pc = 0x18A0C0u;
    SET_GPR_U32(ctx, 31, 0x18A0C8u);
    ctx->pc = 0x18A0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A0C0u;
    // 0x18a0c4: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164100u, 0x18A0C0u, 0x18A0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A0C8u;
label_18a0c8:
    // 0x18a0c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18a0c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a0cc: 0x1240006b  beqz        $s2, . + 4 + (0x6B << 2)
    ctx->pc = 0x18A0CCu;
    {
        const bool branch_taken_0x18a0cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A0CCu;
        // 0x18a0d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a0cc) {
            ctx->pc = 0x18A27Cu;
            goto label_18a27c;
        }
    }
    ctx->pc = 0x18A0D4u;
    // 0x18a0d4: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x18a0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x18a0d8: 0xa3a00026  sb          $zero, 0x26($sp)
    ctx->pc = 0x18a0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 38), (uint8_t)GPR_U32(ctx, 0));
    // 0x18a0dc: 0xc10c4de  jal         func_431378
    ctx->pc = 0x18A0DCu;
    SET_GPR_U32(ctx, 31, 0x18A0E4u);
    ctx->pc = 0x18A0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A0DCu;
    // 0x18a0e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x18A0DCu, 0x18A0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A0E4u;
label_18a0e4:
    // 0x18a0e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18a0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a0e8: 0xc05e3d0  jal         func_178F40
    ctx->pc = 0x18A0E8u;
    SET_GPR_U32(ctx, 31, 0x18A0F0u);
    ctx->pc = 0x18A0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A0E8u;
    // 0x18a0ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178F40u, 0x18A0E8u, 0x18A0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A0F0u;
label_18a0f0:
    // 0x18a0f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18a0f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a0f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18a0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a0f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18a0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a0fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18a0fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a100: 0xc05be80  jal         func_16FA00
    ctx->pc = 0x18A100u;
    SET_GPR_U32(ctx, 31, 0x18A108u);
    ctx->pc = 0x18A104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A100u;
    // 0x18a104: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FA00u, 0x18A100u, 0x18A108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A108u;
label_18a108:
    // 0x18a108: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18A108u;
    {
        const bool branch_taken_0x18a108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A108u;
        // 0x18a10c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a108) {
            ctx->pc = 0x18A134u;
            goto label_18a134;
        }
    }
    ctx->pc = 0x18A110u;
    // 0x18a110: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18a110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a114: 0xc05be60  jal         func_16F980
    ctx->pc = 0x18A114u;
    SET_GPR_U32(ctx, 31, 0x18A11Cu);
    ctx->pc = 0x18A118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A114u;
    // 0x18a118: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F980u, 0x18A114u, 0x18A11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A11Cu;
label_18a11c:
    // 0x18a11c: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x18A11Cu;
    {
        const bool branch_taken_0x18a11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A11Cu;
        // 0x18a120: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a11c) {
            ctx->pc = 0x18A03Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a03c;
        }
    }
    ctx->pc = 0x18A124u;
    // 0x18a124: 0x16a00055  bnez        $s5, . + 4 + (0x55 << 2)
    ctx->pc = 0x18A124u;
    {
        const bool branch_taken_0x18a124 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A124u;
        // 0x18a128: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a124) {
            ctx->pc = 0x18A27Cu;
            goto label_18a27c;
        }
    }
    ctx->pc = 0x18A12Cu;
    // 0x18a12c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x18A12Cu;
    {
        const bool branch_taken_0x18a12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A12Cu;
        // 0x18a130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a12c) {
            ctx->pc = 0x18A24Cu;
            goto label_18a24c;
        }
    }
    ctx->pc = 0x18A134u;
label_18a134:
    // 0x18a134: 0x16a00051  bnez        $s5, . + 4 + (0x51 << 2)
    ctx->pc = 0x18A134u;
    {
        const bool branch_taken_0x18a134 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A134u;
        // 0x18a138: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a134) {
            ctx->pc = 0x18A27Cu;
            goto label_18a27c;
        }
    }
    ctx->pc = 0x18A13Cu;
    // 0x18a13c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x18A13Cu;
    {
        const bool branch_taken_0x18a13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A13Cu;
        // 0x18a140: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a13c) {
            ctx->pc = 0x18A28Cu;
            goto label_18a28c;
        }
    }
    ctx->pc = 0x18A144u;
label_18a144:
    // 0x18a144: 0xc0e4060  jal         func_390180
    ctx->pc = 0x18A144u;
    SET_GPR_U32(ctx, 31, 0x18A14Cu);
    ctx->pc = 0x18A148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A144u;
    // 0x18a148: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x18A144u, 0x18A14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A14Cu;
label_18a14c:
    // 0x18a14c: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x18A14Cu;
    {
        const bool branch_taken_0x18a14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a14c) {
            ctx->pc = 0x18A27Cu;
            goto label_18a27c;
        }
    }
    ctx->pc = 0x18A154u;
    // 0x18a154: 0xc6200c14  lwc1        $f0, 0xC14($s1)
    ctx->pc = 0x18a154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a158: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x18a158u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18a15c: 0x0  nop
    ctx->pc = 0x18a15cu;
    // NOP
    // 0x18a160: 0x45000046  bc1f        . + 4 + (0x46 << 2)
    ctx->pc = 0x18A160u;
    {
        const bool branch_taken_0x18a160 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a160) {
            ctx->pc = 0x18A27Cu;
            goto label_18a27c;
        }
    }
    ctx->pc = 0x18A168u;
    // 0x18a168: 0xc0e409a  jal         func_390268
    ctx->pc = 0x18A168u;
    SET_GPR_U32(ctx, 31, 0x18A170u);
    ctx->pc = 0x18A16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A168u;
    // 0x18a16c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x18A168u, 0x18A170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A170u;
label_18a170:
    // 0x18a170: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18a170u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a174: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x18a174u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a178: 0x269203c8  addiu       $s2, $s4, 0x3C8
    ctx->pc = 0x18a178u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 968));
    // 0x18a17c: 0x0  nop
    ctx->pc = 0x18a17cu;
    // NOP
label_18a180:
    // 0x18a180: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x18a180u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18a184: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x18A184u;
    {
        const bool branch_taken_0x18a184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a184) {
            ctx->pc = 0x18A188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A184u;
            // 0x18a188: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A26Cu;
            goto label_18a26c;
        }
    }
    ctx->pc = 0x18A18Cu;
    // 0x18a18c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x18a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x18a190: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x18A190u;
    {
        const bool branch_taken_0x18a190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a190) {
            ctx->pc = 0x18A194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A190u;
            // 0x18a194: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A26Cu;
            goto label_18a26c;
        }
    }
    ctx->pc = 0x18A198u;
    // 0x18a198: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18a198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a19c: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x18a19cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x18a1a0: 0xa3a00026  sb          $zero, 0x26($sp)
    ctx->pc = 0x18a1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 38), (uint8_t)GPR_U32(ctx, 0));
    // 0x18a1a4: 0xc10c4de  jal         func_431378
    ctx->pc = 0x18A1A4u;
    SET_GPR_U32(ctx, 31, 0x18A1ACu);
    ctx->pc = 0x18A1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A1A4u;
    // 0x18a1a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x18A1A4u, 0x18A1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A1ACu;
label_18a1ac:
    // 0x18a1ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18a1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1b0: 0xc05e3d0  jal         func_178F40
    ctx->pc = 0x18A1B0u;
    SET_GPR_U32(ctx, 31, 0x18A1B8u);
    ctx->pc = 0x18A1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A1B0u;
    // 0x18a1b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178F40u, 0x18A1B0u, 0x18A1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A1B8u;
label_18a1b8:
    // 0x18a1b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18a1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18a1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18a1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18a1c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1c8: 0xc05be80  jal         func_16FA00
    ctx->pc = 0x18A1C8u;
    SET_GPR_U32(ctx, 31, 0x18A1D0u);
    ctx->pc = 0x18A1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A1C8u;
    // 0x18a1cc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FA00u, 0x18A1C8u, 0x18A1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A1D0u;
label_18a1d0:
    // 0x18a1d0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x18A1D0u;
    {
        const bool branch_taken_0x18a1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A1D0u;
        // 0x18a1d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a1d0) {
            ctx->pc = 0x18A264u;
            goto label_18a264;
        }
    }
    ctx->pc = 0x18A1D8u;
    // 0x18a1d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18a1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1dc: 0xc05be60  jal         func_16F980
    ctx->pc = 0x18A1DCu;
    SET_GPR_U32(ctx, 31, 0x18A1E4u);
    ctx->pc = 0x18A1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A1DCu;
    // 0x18a1e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F980u, 0x18A1DCu, 0x18A1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A1E4u;
label_18a1e4:
    // 0x18a1e4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x18A1E4u;
    {
        const bool branch_taken_0x18a1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A1E4u;
        // 0x18a1e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a1e4) {
            ctx->pc = 0x18A238u;
            goto label_18a238;
        }
    }
    ctx->pc = 0x18A1ECu;
    // 0x18a1ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18a1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18a1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18a1f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1f8: 0xc05bc4a  jal         func_16F128
    ctx->pc = 0x18A1F8u;
    SET_GPR_U32(ctx, 31, 0x18A200u);
    ctx->pc = 0x18A1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A1F8u;
    // 0x18a1fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F128u, 0x18A1F8u, 0x18A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A200u;
label_18a200:
    // 0x18a200: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18a200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a204: 0xc042f5c  jal         func_10BD70
    ctx->pc = 0x18A204u;
    SET_GPR_U32(ctx, 31, 0x18A20Cu);
    ctx->pc = 0x18A208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A204u;
    // 0x18a208: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BD70u, 0x18A204u, 0x18A20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A20Cu;
label_18a20c:
    // 0x18a20c: 0x8e500024  lw          $s0, 0x24($s2)
    ctx->pc = 0x18a20cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x18a210: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x18A210u;
    SET_GPR_U32(ctx, 31, 0x18A218u);
    ctx->pc = 0x18A214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A210u;
    // 0x18a214: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x18A210u, 0x18A218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A218u;
label_18a218:
    // 0x18a218: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A218u;
    {
        const bool branch_taken_0x18a218 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x18A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A218u;
        // 0x18a21c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a218) {
            ctx->pc = 0x18A228u;
            goto label_18a228;
        }
    }
    ctx->pc = 0x18A220u;
    // 0x18a220: 0xc089974  jal         func_2265D0
    ctx->pc = 0x18A220u;
    SET_GPR_U32(ctx, 31, 0x18A228u);
    ctx->pc = 0x18A224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A220u;
    // 0x18a224: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x18A220u, 0x18A228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A228u;
label_18a228:
    // 0x18a228: 0xc0625b0  jal         func_1896C0
    ctx->pc = 0x18A228u;
    SET_GPR_U32(ctx, 31, 0x18A230u);
    ctx->pc = 0x18A22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A228u;
    // 0x18a22c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1896C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1896C0u, 0x18A228u, 0x18A230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A230u;
label_18a230:
    // 0x18a230: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x18A230u;
    {
        const bool branch_taken_0x18a230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A230u;
        // 0x18a234: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a230) {
            ctx->pc = 0x18A288u;
            goto label_18a288;
        }
    }
    ctx->pc = 0x18A238u;
label_18a238:
    // 0x18a238: 0x16a0000c  bnez        $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x18A238u;
    {
        const bool branch_taken_0x18a238 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A238u;
        // 0x18a23c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a238) {
            ctx->pc = 0x18A26Cu;
            goto label_18a26c;
        }
    }
    ctx->pc = 0x18A240u;
    // 0x18a240: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18a240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18a244:
    // 0x18a244: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18a244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a248: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18a248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18a24c:
    // 0x18a24c: 0xc05bc98  jal         func_16F260
    ctx->pc = 0x18A24Cu;
    SET_GPR_U32(ctx, 31, 0x18A254u);
    ctx->pc = 0x18A250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A24Cu;
    // 0x18a250: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F260u, 0x18A24Cu, 0x18A254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A254u;
label_18a254:
    // 0x18a254: 0xc0625b0  jal         func_1896C0
    ctx->pc = 0x18A254u;
    SET_GPR_U32(ctx, 31, 0x18A25Cu);
    ctx->pc = 0x18A258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A254u;
    // 0x18a258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1896C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1896C0u, 0x18A254u, 0x18A25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A25Cu;
label_18a25c:
    // 0x18a25c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18A25Cu;
    {
        const bool branch_taken_0x18a25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A25Cu;
        // 0x18a260: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a25c) {
            ctx->pc = 0x18A288u;
            goto label_18a288;
        }
    }
    ctx->pc = 0x18A264u;
label_18a264:
    // 0x18a264: 0x12a0ff85  beqz        $s5, . + 4 + (-0x7B << 2)
    ctx->pc = 0x18A264u;
    {
        const bool branch_taken_0x18a264 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A264u;
        // 0x18a268: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a264) {
            ctx->pc = 0x18A07Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a07c;
        }
    }
    ctx->pc = 0x18A26Cu;
label_18a26c:
    // 0x18a26c: 0x2e620007  sltiu       $v0, $s3, 0x7
    ctx->pc = 0x18a26cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x18a270: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x18A270u;
    {
        const bool branch_taken_0x18a270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A270u;
        // 0x18a274: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a270) {
            ctx->pc = 0x18A180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a180;
        }
    }
    ctx->pc = 0x18A278u;
    // 0x18a278: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x18a278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_18a27c:
    // 0x18a27c: 0xc0625b0  jal         func_1896C0
    ctx->pc = 0x18A27Cu;
    SET_GPR_U32(ctx, 31, 0x18A284u);
    ctx->pc = 0x18A280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A27Cu;
    // 0x18a280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1896C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1896C0u, 0x18A27Cu, 0x18A284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A284u;
label_18a284:
    // 0x18a284: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18a284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a288:
    // 0x18a288: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x18a288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_18a28c:
    // 0x18a28c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x18a28cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18a290: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x18a290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18a294: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x18a294u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18a298: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x18a298u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18a29c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x18a29cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a2a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18a2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a2a4: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x18a2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18a2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x18A2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A2A8u;
        // 0x18a2ac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A2B0u;
}
