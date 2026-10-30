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

// Function: sub_0026B170
// Address: 0x26b170 - 0x26b328
void sub_0026B170_0x26b170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B170_0x26b170");
#endif

    switch (ctx->pc) {
        case 0x26b1b8u: goto label_26b1b8;
        case 0x26b1f0u: goto label_26b1f0;
        case 0x26b248u: goto label_26b248;
        case 0x26b260u: goto label_26b260;
        case 0x26b2dcu: goto label_26b2dc;
        case 0x26b2fcu: goto label_26b2fc;
        default: break;
    }

    ctx->pc = 0x26b170u;

    // 0x26b170: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x26b170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x26b174: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x26b174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x26b178: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x26b178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x26b17c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x26b17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x26b180: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x26b180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x26b184: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x26b184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b188: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x26b188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x26b18c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26b18cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b190: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26b190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26b194: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x26b194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x26b198: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x26b198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x26b19c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x26b19cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b1a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26b1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26b1a4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x26b1a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b1a8: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x26b1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C04u));
    // 0x26b1ac: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x26b1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x26b1b0: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x26B1B0u;
    SET_GPR_U32(ctx, 31, 0x26B1B8u);
    ctx->pc = 0x26B1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B1B0u;
    // 0x26b1b4: 0x8c650124  lw          $a1, 0x124($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x26B1B0u, 0x26B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B1B8u;
label_26b1b8:
    // 0x26b1b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26b1b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b1bc: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x26b1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x26b1c0: 0x82700086  lb          $s0, 0x86($s3)
    ctx->pc = 0x26b1c0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 134)));
    // 0x26b1c4: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x26b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x26b1c8: 0x96740062  lhu         $s4, 0x62($s3)
    ctx->pc = 0x26b1c8u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 98)));
    // 0x26b1cc: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26B1CCu;
    {
        const bool branch_taken_0x26b1cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B1CCu;
        // 0x26b1d0: 0xa4600118  sh          $zero, 0x118($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b1cc) {
            ctx->pc = 0x26B1F8u;
            goto label_26b1f8;
        }
    }
    ctx->pc = 0x26B1D4u;
    // 0x26b1d4: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x26b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x26b1d8: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26B1D8u;
    {
        const bool branch_taken_0x26b1d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B1D8u;
        // 0x26b1dc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b1d8) {
            ctx->pc = 0x26B1F8u;
            goto label_26b1f8;
        }
    }
    ctx->pc = 0x26B1E0u;
    // 0x26b1e0: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26B1E0u;
    {
        const bool branch_taken_0x26b1e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b1e0) {
            ctx->pc = 0x26B1F8u;
            goto label_26b1f8;
        }
    }
    ctx->pc = 0x26B1E8u;
    // 0x26b1e8: 0xc0e2612  jal         func_389848
    ctx->pc = 0x26B1E8u;
    SET_GPR_U32(ctx, 31, 0x26B1F0u);
    ctx->pc = 0x26B1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B1E8u;
    // 0x26b1ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x26B1E8u, 0x26B1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B1F0u;
label_26b1f0:
    // 0x26b1f0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x26B1F0u;
    {
        const bool branch_taken_0x26b1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B1F0u;
        // 0x26b1f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b1f0) {
            ctx->pc = 0x26B250u;
            goto label_26b250;
        }
    }
    ctx->pc = 0x26B1F8u;
label_26b1f8:
    // 0x26b1f8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26B1F8u;
    {
        const bool branch_taken_0x26b1f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B1F8u;
        // 0x26b1fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b1f8) {
            ctx->pc = 0x26B20Cu;
            goto label_26b20c;
        }
    }
    ctx->pc = 0x26B200u;
    // 0x26b200: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26b200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b204: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26B204u;
    {
        const bool branch_taken_0x26b204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B204u;
        // 0x26b208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b204) {
            ctx->pc = 0x26B258u;
            goto label_26b258;
        }
    }
    ctx->pc = 0x26B20Cu;
label_26b20c:
    // 0x26b20c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x26b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26b210: 0x1202003a  beq         $s0, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x26B210u;
    {
        const bool branch_taken_0x26b210 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B210u;
        // 0x26b214: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b210) {
            ctx->pc = 0x26B2FCu;
            goto label_26b2fc;
        }
    }
    ctx->pc = 0x26B218u;
    // 0x26b218: 0x8e4700d4  lw          $a3, 0xD4($s2)
    ctx->pc = 0x26b218u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x26b21c: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x26b21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x26b220: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26b220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b224: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x26b224u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b228: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26b228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b22c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26b22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b230: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x26b230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x26b234: 0xc4e0011c  lwc1        $f0, 0x11C($a3)
    ctx->pc = 0x26b234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b238: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26b238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26b23c: 0xc4e10120  lwc1        $f1, 0x120($a3)
    ctx->pc = 0x26b23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b240: 0xc099cce  jal         func_267338
    ctx->pc = 0x26B240u;
    SET_GPR_U32(ctx, 31, 0x26B248u);
    ctx->pc = 0x26B244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B240u;
    // 0x26b244: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x267338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267338u, 0x26B240u, 0x26B248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B248u;
label_26b248:
    // 0x26b248: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26B248u;
    {
        const bool branch_taken_0x26b248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B248u;
        // 0x26b24c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b248) {
            ctx->pc = 0x26B264u;
            goto label_26b264;
        }
    }
    ctx->pc = 0x26B250u;
label_26b250:
    // 0x26b250: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26b250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b254: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26b254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26b258:
    // 0x26b258: 0xc099cb4  jal         func_2672D0
    ctx->pc = 0x26B258u;
    SET_GPR_U32(ctx, 31, 0x26B260u);
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x26B258u, 0x26B260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B260u;
label_26b260:
    // 0x26b260: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26b260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26b264:
    // 0x26b264: 0x82630087  lb          $v1, 0x87($s3)
    ctx->pc = 0x26b264u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 135)));
    // 0x26b268: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x26b268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26b26c: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26B26Cu;
    {
        const bool branch_taken_0x26b26c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x26B270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B26Cu;
        // 0x26b270: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b26c) {
            ctx->pc = 0x26B288u;
            goto label_26b288;
        }
    }
    ctx->pc = 0x26B274u;
    // 0x26b274: 0x82620086  lb          $v0, 0x86($s3)
    ctx->pc = 0x26b274u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 134)));
    // 0x26b278: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x26b278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26b27c: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x26b27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
    // 0x26b280: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26B280u;
    {
        const bool branch_taken_0x26b280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B280u;
        // 0x26b284: 0x82280b  movn        $a1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b280) {
            ctx->pc = 0x26B2C0u;
            goto label_26b2c0;
        }
    }
    ctx->pc = 0x26B288u;
label_26b288:
    // 0x26b288: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26b288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26b28c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26B28Cu;
    {
        const bool branch_taken_0x26b28c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B28Cu;
        // 0x26b290: 0x2e820032  sltiu       $v0, $s4, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b28c) {
            ctx->pc = 0x26B2A0u;
            goto label_26b2a0;
        }
    }
    ctx->pc = 0x26B294u;
    // 0x26b294: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26b294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26b298: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26B298u;
    {
        const bool branch_taken_0x26b298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B298u;
        // 0x26b29c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b298) {
            ctx->pc = 0x26B2C0u;
            goto label_26b2c0;
        }
    }
    ctx->pc = 0x26B2A0u;
label_26b2a0:
    // 0x26b2a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26B2A0u;
    {
        const bool branch_taken_0x26b2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B2A0u;
        // 0x26b2a4: 0x2e820014  sltiu       $v0, $s4, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2a0) {
            ctx->pc = 0x26B2B0u;
            goto label_26b2b0;
        }
    }
    ctx->pc = 0x26B2A8u;
    // 0x26b2a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26B2A8u;
    {
        const bool branch_taken_0x26b2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B2A8u;
        // 0x26b2ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2a8) {
            ctx->pc = 0x26B2C0u;
            goto label_26b2c0;
        }
    }
    ctx->pc = 0x26B2B0u;
label_26b2b0:
    // 0x26b2b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26B2B0u;
    {
        const bool branch_taken_0x26b2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B2B0u;
        // 0x26b2b4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2b0) {
            ctx->pc = 0x26B2C4u;
            goto label_26b2c4;
        }
    }
    ctx->pc = 0x26B2B8u;
    // 0x26b2b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26b2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b2bc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x26b2bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b2c0:
    // 0x26b2c0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x26b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_26b2c4:
    // 0x26b2c4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x26b2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x26b2c8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x26b2c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x26b2cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26b2ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26b2d0: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x26b2d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x26b2d4: 0xc099bce  jal         func_266F38
    ctx->pc = 0x26B2D4u;
    SET_GPR_U32(ctx, 31, 0x26B2DCu);
    ctx->pc = 0x26B2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B2D4u;
    // 0x26b2d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266F38u, 0x26B2D4u, 0x26B2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B2DCu;
label_26b2dc:
    // 0x26b2dc: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x26b2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x26b2e0: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x26b2e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x26b2e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26b2e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26b2e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26b2e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b2ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26b2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b2f0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26b2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b2f4: 0xc09a9b4  jal         func_26A6D0
    ctx->pc = 0x26B2F4u;
    SET_GPR_U32(ctx, 31, 0x26B2FCu);
    ctx->pc = 0x26B2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B2F4u;
    // 0x26b2f8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A6D0u, 0x26B2F4u, 0x26B2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B2FCu;
label_26b2fc:
    // 0x26b2fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b300: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x26b300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26b304: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x26b304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26b308: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x26b308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26b30c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x26b30cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26b310: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26b310u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26b314: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x26b314u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26b318: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x26b318u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b31c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26b31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b320: 0x3e00008  jr          $ra
    ctx->pc = 0x26B320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B320u;
        // 0x26b324: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B328u;
}
