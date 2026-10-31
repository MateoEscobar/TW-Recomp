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

// Function: sub_002CB138
// Address: 0x2cb138 - 0x2cb328
void sub_002CB138_0x2cb138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB138_0x2cb138");
#endif

    switch (ctx->pc) {
        case 0x2cb138u: goto label_2cb138;
        case 0x2cb13cu: goto label_2cb13c;
        case 0x2cb140u: goto label_2cb140;
        case 0x2cb144u: goto label_2cb144;
        case 0x2cb148u: goto label_2cb148;
        case 0x2cb14cu: goto label_2cb14c;
        case 0x2cb150u: goto label_2cb150;
        case 0x2cb154u: goto label_2cb154;
        case 0x2cb158u: goto label_2cb158;
        case 0x2cb15cu: goto label_2cb15c;
        case 0x2cb160u: goto label_2cb160;
        case 0x2cb164u: goto label_2cb164;
        case 0x2cb168u: goto label_2cb168;
        case 0x2cb16cu: goto label_2cb16c;
        case 0x2cb170u: goto label_2cb170;
        case 0x2cb174u: goto label_2cb174;
        case 0x2cb178u: goto label_2cb178;
        case 0x2cb17cu: goto label_2cb17c;
        case 0x2cb180u: goto label_2cb180;
        case 0x2cb184u: goto label_2cb184;
        case 0x2cb188u: goto label_2cb188;
        case 0x2cb18cu: goto label_2cb18c;
        case 0x2cb190u: goto label_2cb190;
        case 0x2cb194u: goto label_2cb194;
        case 0x2cb198u: goto label_2cb198;
        case 0x2cb19cu: goto label_2cb19c;
        case 0x2cb1a0u: goto label_2cb1a0;
        case 0x2cb1a4u: goto label_2cb1a4;
        case 0x2cb1a8u: goto label_2cb1a8;
        case 0x2cb1acu: goto label_2cb1ac;
        case 0x2cb1b0u: goto label_2cb1b0;
        case 0x2cb1b4u: goto label_2cb1b4;
        case 0x2cb1b8u: goto label_2cb1b8;
        case 0x2cb1bcu: goto label_2cb1bc;
        case 0x2cb1c0u: goto label_2cb1c0;
        case 0x2cb1c4u: goto label_2cb1c4;
        case 0x2cb1c8u: goto label_2cb1c8;
        case 0x2cb1ccu: goto label_2cb1cc;
        case 0x2cb1d0u: goto label_2cb1d0;
        case 0x2cb1d4u: goto label_2cb1d4;
        case 0x2cb1d8u: goto label_2cb1d8;
        case 0x2cb1dcu: goto label_2cb1dc;
        case 0x2cb1e0u: goto label_2cb1e0;
        case 0x2cb1e4u: goto label_2cb1e4;
        case 0x2cb1e8u: goto label_2cb1e8;
        case 0x2cb1ecu: goto label_2cb1ec;
        case 0x2cb1f0u: goto label_2cb1f0;
        case 0x2cb1f4u: goto label_2cb1f4;
        case 0x2cb1f8u: goto label_2cb1f8;
        case 0x2cb1fcu: goto label_2cb1fc;
        case 0x2cb200u: goto label_2cb200;
        case 0x2cb204u: goto label_2cb204;
        case 0x2cb208u: goto label_2cb208;
        case 0x2cb20cu: goto label_2cb20c;
        case 0x2cb210u: goto label_2cb210;
        case 0x2cb214u: goto label_2cb214;
        case 0x2cb218u: goto label_2cb218;
        case 0x2cb21cu: goto label_2cb21c;
        case 0x2cb220u: goto label_2cb220;
        case 0x2cb224u: goto label_2cb224;
        case 0x2cb228u: goto label_2cb228;
        case 0x2cb22cu: goto label_2cb22c;
        case 0x2cb230u: goto label_2cb230;
        case 0x2cb234u: goto label_2cb234;
        case 0x2cb238u: goto label_2cb238;
        case 0x2cb23cu: goto label_2cb23c;
        case 0x2cb240u: goto label_2cb240;
        case 0x2cb244u: goto label_2cb244;
        case 0x2cb248u: goto label_2cb248;
        case 0x2cb24cu: goto label_2cb24c;
        case 0x2cb250u: goto label_2cb250;
        case 0x2cb254u: goto label_2cb254;
        case 0x2cb258u: goto label_2cb258;
        case 0x2cb25cu: goto label_2cb25c;
        case 0x2cb260u: goto label_2cb260;
        case 0x2cb264u: goto label_2cb264;
        case 0x2cb268u: goto label_2cb268;
        case 0x2cb26cu: goto label_2cb26c;
        case 0x2cb270u: goto label_2cb270;
        case 0x2cb274u: goto label_2cb274;
        case 0x2cb278u: goto label_2cb278;
        case 0x2cb27cu: goto label_2cb27c;
        case 0x2cb280u: goto label_2cb280;
        case 0x2cb284u: goto label_2cb284;
        case 0x2cb288u: goto label_2cb288;
        case 0x2cb28cu: goto label_2cb28c;
        case 0x2cb290u: goto label_2cb290;
        case 0x2cb294u: goto label_2cb294;
        case 0x2cb298u: goto label_2cb298;
        case 0x2cb29cu: goto label_2cb29c;
        case 0x2cb2a0u: goto label_2cb2a0;
        case 0x2cb2a4u: goto label_2cb2a4;
        case 0x2cb2a8u: goto label_2cb2a8;
        case 0x2cb2acu: goto label_2cb2ac;
        case 0x2cb2b0u: goto label_2cb2b0;
        case 0x2cb2b4u: goto label_2cb2b4;
        case 0x2cb2b8u: goto label_2cb2b8;
        case 0x2cb2bcu: goto label_2cb2bc;
        case 0x2cb2c0u: goto label_2cb2c0;
        case 0x2cb2c4u: goto label_2cb2c4;
        case 0x2cb2c8u: goto label_2cb2c8;
        case 0x2cb2ccu: goto label_2cb2cc;
        case 0x2cb2d0u: goto label_2cb2d0;
        case 0x2cb2d4u: goto label_2cb2d4;
        case 0x2cb2d8u: goto label_2cb2d8;
        case 0x2cb2dcu: goto label_2cb2dc;
        case 0x2cb2e0u: goto label_2cb2e0;
        case 0x2cb2e4u: goto label_2cb2e4;
        case 0x2cb2e8u: goto label_2cb2e8;
        case 0x2cb2ecu: goto label_2cb2ec;
        case 0x2cb2f0u: goto label_2cb2f0;
        case 0x2cb2f4u: goto label_2cb2f4;
        case 0x2cb2f8u: goto label_2cb2f8;
        case 0x2cb2fcu: goto label_2cb2fc;
        case 0x2cb300u: goto label_2cb300;
        case 0x2cb304u: goto label_2cb304;
        case 0x2cb308u: goto label_2cb308;
        case 0x2cb30cu: goto label_2cb30c;
        case 0x2cb310u: goto label_2cb310;
        case 0x2cb314u: goto label_2cb314;
        case 0x2cb318u: goto label_2cb318;
        case 0x2cb31cu: goto label_2cb31c;
        case 0x2cb320u: goto label_2cb320;
        case 0x2cb324u: goto label_2cb324;
        default: break;
    }

    ctx->pc = 0x2cb138u;

label_2cb138:
    // 0x2cb138: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2cb138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2cb13c:
    // 0x2cb13c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2cb13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2cb140:
    // 0x2cb140: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2cb140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2cb144:
    // 0x2cb144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cb144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cb148:
    // 0x2cb148: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2cb148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2cb14c:
    // 0x2cb14c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cb14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cb150:
    // 0x2cb150: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cb150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2cb154:
    // 0x2cb154: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2cb154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2cb158:
    // 0x2cb158: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2cb158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_2cb15c:
    // 0x2cb15c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cb160:
    // 0x2cb160: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2cb160u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2cb164:
    // 0x2cb164: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cb164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cb168:
    // 0x2cb168: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2cb168u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2cb16c:
    // 0x2cb16c: 0x1c400063  bgtz        $v0, . + 4 + (0x63 << 2)
label_2cb170:
    if (ctx->pc == 0x2CB170u) {
        ctx->pc = 0x2CB170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB16Cu;
        // 0x2cb170: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB174u;
        goto label_2cb174;
    }
    ctx->pc = 0x2CB16Cu;
    {
        const bool branch_taken_0x2cb16c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2CB170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB16Cu;
        // 0x2cb170: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb16c) {
            ctx->pc = 0x2CB2FCu;
            goto label_2cb2fc;
        }
    }
    ctx->pc = 0x2CB174u;
label_2cb174:
    // 0x2cb174: 0x92150029  lbu         $s5, 0x29($s0)
    ctx->pc = 0x2cb174u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
label_2cb178:
    // 0x2cb178: 0x16a40061  bne         $s5, $a0, . + 4 + (0x61 << 2)
label_2cb17c:
    if (ctx->pc == 0x2CB17Cu) {
        ctx->pc = 0x2CB17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB178u;
        // 0x2cb17c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB180u;
        goto label_2cb180;
    }
    ctx->pc = 0x2CB178u;
    {
        const bool branch_taken_0x2cb178 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        ctx->pc = 0x2CB17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB178u;
        // 0x2cb17c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb178) {
            ctx->pc = 0x2CB300u;
            goto label_2cb300;
        }
    }
    ctx->pc = 0x2CB180u;
label_2cb180:
    // 0x2cb180: 0x26510090  addiu       $s1, $s2, 0x90
    ctx->pc = 0x2cb180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_2cb184:
    // 0x2cb184: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2cb184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2cb188:
    // 0x2cb188: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x2cb188u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_2cb18c:
    // 0x2cb18c: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x2cb18cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2cb190:
    // 0x2cb190: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x2cb190u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2cb194:
    // 0x2cb194: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2cb194u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2cb198:
    // 0x2cb198: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2cb198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cb19c:
    // 0x2cb19c: 0xc0cdb38  jal         func_336CE0
label_2cb1a0:
    if (ctx->pc == 0x2CB1A0u) {
        ctx->pc = 0x2CB1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB19Cu;
        // 0x2cb1a0: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB1A4u;
        goto label_2cb1a4;
    }
    ctx->pc = 0x2CB19Cu;
    SET_GPR_U32(ctx, 31, 0x2CB1A4u);
    ctx->pc = 0x2CB1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB19Cu;
    // 0x2cb1a0: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2CB19Cu, 0x2CB1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB1A4u;
label_2cb1a4:
    // 0x2cb1a4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cb1a4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2cb1a8:
    // 0x2cb1a8: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x2cb1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
label_2cb1ac:
    // 0x2cb1ac: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2cb1acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_2cb1b0:
    // 0x2cb1b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cb1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cb1b4:
    // 0x2cb1b4: 0x0  nop
    ctx->pc = 0x2cb1b4u;
    // NOP
label_2cb1b8:
    // 0x2cb1b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cb1b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb1bc:
    // 0x2cb1bc: 0x0  nop
    ctx->pc = 0x2cb1bcu;
    // NOP
label_2cb1c0:
    // 0x2cb1c0: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
label_2cb1c4:
    if (ctx->pc == 0x2CB1C4u) {
        ctx->pc = 0x2CB1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1C0u;
        // 0x2cb1c4: 0x86240002  lh          $a0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB1C8u;
        goto label_2cb1c8;
    }
    ctx->pc = 0x2CB1C0u;
    {
        const bool branch_taken_0x2cb1c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cb1c0) {
            ctx->pc = 0x2CB1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB1C0u;
            // 0x2cb1c4: 0x86240002  lh          $a0, 0x2($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB230u;
            goto label_2cb230;
        }
    }
    ctx->pc = 0x2CB1C8u;
label_2cb1c8:
    // 0x2cb1c8: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2cb1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_2cb1cc:
    // 0x2cb1cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cb1ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cb1d0:
    // 0x2cb1d0: 0x0  nop
    ctx->pc = 0x2cb1d0u;
    // NOP
label_2cb1d4:
    // 0x2cb1d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cb1d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb1d8:
    // 0x2cb1d8: 0x0  nop
    ctx->pc = 0x2cb1d8u;
    // NOP
label_2cb1dc:
    // 0x2cb1dc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2cb1e0:
    if (ctx->pc == 0x2CB1E0u) {
        ctx->pc = 0x2CB1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1DCu;
        // 0x2cb1e0: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB1E4u;
        goto label_2cb1e4;
    }
    ctx->pc = 0x2CB1DCu;
    {
        const bool branch_taken_0x2cb1dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CB1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1DCu;
        // 0x2cb1e0: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb1dc) {
            ctx->pc = 0x2CB1E8u;
            goto label_2cb1e8;
        }
    }
    ctx->pc = 0x2CB1E4u;
label_2cb1e4:
    // 0x2cb1e4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2cb1e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cb1e8:
    // 0x2cb1e8: 0xc0a367c  jal         func_28D9F0
label_2cb1ec:
    if (ctx->pc == 0x2CB1ECu) {
        ctx->pc = 0x2CB1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1E8u;
        // 0x2cb1ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB1F0u;
        goto label_2cb1f0;
    }
    ctx->pc = 0x2CB1E8u;
    SET_GPR_U32(ctx, 31, 0x2CB1F0u);
    ctx->pc = 0x2CB1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB1E8u;
    // 0x2cb1ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CB1E8u, 0x2CB1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB1F0u;
label_2cb1f0:
    // 0x2cb1f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cb1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb1f4:
    // 0x2cb1f4: 0x10800041  beqz        $a0, . + 4 + (0x41 << 2)
label_2cb1f8:
    if (ctx->pc == 0x2CB1F8u) {
        ctx->pc = 0x2CB1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1F4u;
        // 0x2cb1f8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB1FCu;
        goto label_2cb1fc;
    }
    ctx->pc = 0x2CB1F4u;
    {
        const bool branch_taken_0x2cb1f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1F4u;
        // 0x2cb1f8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb1f4) {
            ctx->pc = 0x2CB2FCu;
            goto label_2cb2fc;
        }
    }
    ctx->pc = 0x2CB1FCu;
label_2cb1fc:
    // 0x2cb1fc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2cb1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cb200:
    // 0x2cb200: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2cb200u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2cb204:
    // 0x2cb204: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2cb204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cb208:
    // 0x2cb208: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2cb208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2cb20c:
    // 0x2cb20c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2cb20cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2cb210:
    // 0x2cb210: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cb210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cb214:
    // 0x2cb214: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2cb214u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cb218:
    // 0x2cb218: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2cb218u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cb21c:
    // 0x2cb21c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2cb21cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cb220:
    // 0x2cb220: 0xc0bee7a  jal         func_2FB9E8
label_2cb224:
    if (ctx->pc == 0x2CB224u) {
        ctx->pc = 0x2CB224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB220u;
        // 0x2cb224: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB228u;
        goto label_2cb228;
    }
    ctx->pc = 0x2CB220u;
    SET_GPR_U32(ctx, 31, 0x2CB228u);
    ctx->pc = 0x2CB224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB220u;
    // 0x2cb224: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2CB220u, 0x2CB228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB228u;
label_2cb228:
    // 0x2cb228: 0x10000035  b           . + 4 + (0x35 << 2)
label_2cb22c:
    if (ctx->pc == 0x2CB22Cu) {
        ctx->pc = 0x2CB22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB228u;
        // 0x2cb22c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB230u;
        goto label_2cb230;
    }
    ctx->pc = 0x2CB228u;
    {
        const bool branch_taken_0x2cb228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB228u;
        // 0x2cb22c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb228) {
            ctx->pc = 0x2CB300u;
            goto label_2cb300;
        }
    }
    ctx->pc = 0x2CB230u;
label_2cb230:
    // 0x2cb230: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2cb230u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2cb234:
    // 0x2cb234: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2cb234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_2cb238:
    // 0x2cb238: 0xc0cd7d2  jal         func_335F48
label_2cb23c:
    if (ctx->pc == 0x2CB23Cu) {
        ctx->pc = 0x2CB23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB238u;
        // 0x2cb23c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB240u;
        goto label_2cb240;
    }
    ctx->pc = 0x2CB238u;
    SET_GPR_U32(ctx, 31, 0x2CB240u);
    ctx->pc = 0x2CB23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB238u;
    // 0x2cb23c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2CB238u, 0x2CB240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB240u;
label_2cb240:
    // 0x2cb240: 0xc0cd742  jal         func_335D08
label_2cb244:
    if (ctx->pc == 0x2CB244u) {
        ctx->pc = 0x2CB244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB240u;
        // 0x2cb244: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB248u;
        goto label_2cb248;
    }
    ctx->pc = 0x2CB240u;
    SET_GPR_U32(ctx, 31, 0x2CB248u);
    ctx->pc = 0x2CB244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB240u;
    // 0x2cb244: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2CB240u, 0x2CB248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB248u;
label_2cb248:
    // 0x2cb248: 0xc60d0020  lwc1        $f13, 0x20($s0)
    ctx->pc = 0x2cb248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2cb24c:
    // 0x2cb24c: 0xc0cdd2e  jal         func_3374B8
label_2cb250:
    if (ctx->pc == 0x2CB250u) {
        ctx->pc = 0x2CB250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB24Cu;
        // 0x2cb250: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB254u;
        goto label_2cb254;
    }
    ctx->pc = 0x2CB24Cu;
    SET_GPR_U32(ctx, 31, 0x2CB254u);
    ctx->pc = 0x2CB250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB24Cu;
    // 0x2cb250: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2CB24Cu, 0x2CB254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB254u;
label_2cb254:
    // 0x2cb254: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2cb254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_2cb258:
    // 0x2cb258: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2cb258u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2cb25c:
    // 0x2cb25c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cb25cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2cb260:
    // 0x2cb260: 0x0  nop
    ctx->pc = 0x2cb260u;
    // NOP
label_2cb264:
    // 0x2cb264: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cb264u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb268:
    // 0x2cb268: 0x0  nop
    ctx->pc = 0x2cb268u;
    // NOP
label_2cb26c:
    // 0x2cb26c: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
label_2cb270:
    if (ctx->pc == 0x2CB270u) {
        ctx->pc = 0x2CB270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB26Cu;
        // 0x2cb270: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB274u;
        goto label_2cb274;
    }
    ctx->pc = 0x2CB26Cu;
    {
        const bool branch_taken_0x2cb26c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cb26c) {
            ctx->pc = 0x2CB270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB26Cu;
            // 0x2cb270: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB2C0u;
            goto label_2cb2c0;
        }
    }
    ctx->pc = 0x2CB274u;
label_2cb274:
    // 0x2cb274: 0xc0a367c  jal         func_28D9F0
label_2cb278:
    if (ctx->pc == 0x2CB278u) {
        ctx->pc = 0x2CB278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB274u;
        // 0x2cb278: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB27Cu;
        goto label_2cb27c;
    }
    ctx->pc = 0x2CB274u;
    SET_GPR_U32(ctx, 31, 0x2CB27Cu);
    ctx->pc = 0x2CB278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB274u;
    // 0x2cb278: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CB274u, 0x2CB27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB27Cu;
label_2cb27c:
    // 0x2cb27c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cb27cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb280:
    // 0x2cb280: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
label_2cb284:
    if (ctx->pc == 0x2CB284u) {
        ctx->pc = 0x2CB284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB280u;
        // 0x2cb284: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB288u;
        goto label_2cb288;
    }
    ctx->pc = 0x2CB280u;
    {
        const bool branch_taken_0x2cb280 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB280u;
        // 0x2cb284: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb280) {
            ctx->pc = 0x2CB2FCu;
            goto label_2cb2fc;
        }
    }
    ctx->pc = 0x2CB288u;
label_2cb288:
    // 0x2cb288: 0xc6140020  lwc1        $f20, 0x20($s0)
    ctx->pc = 0x2cb288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2cb28c:
    // 0x2cb28c: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2cb28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_2cb290:
    // 0x2cb290: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2cb290u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_2cb294:
    // 0x2cb294: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cb294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cb298:
    // 0x2cb298: 0xc0884f6  jal         func_2213D8
label_2cb29c:
    if (ctx->pc == 0x2CB29Cu) {
        ctx->pc = 0x2CB29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB298u;
        // 0x2cb29c: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB2A0u;
        goto label_2cb2a0;
    }
    ctx->pc = 0x2CB298u;
    SET_GPR_U32(ctx, 31, 0x2CB2A0u);
    ctx->pc = 0x2CB29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB298u;
    // 0x2cb29c: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2CB298u, 0x2CB2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB2A0u;
label_2cb2a0:
    // 0x2cb2a0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2cb2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cb2a4:
    // 0x2cb2a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cb2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cb2a8:
    // 0x2cb2a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2cb2a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2cb2ac:
    // 0x2cb2ac: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2cb2acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2cb2b0:
    // 0x2cb2b0: 0xc0bf70a  jal         func_2FDC28
label_2cb2b4:
    if (ctx->pc == 0x2CB2B4u) {
        ctx->pc = 0x2CB2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB2B0u;
        // 0x2cb2b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB2B8u;
        goto label_2cb2b8;
    }
    ctx->pc = 0x2CB2B0u;
    SET_GPR_U32(ctx, 31, 0x2CB2B8u);
    ctx->pc = 0x2CB2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB2B0u;
    // 0x2cb2b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC28u, 0x2CB2B0u, 0x2CB2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB2B8u;
label_2cb2b8:
    // 0x2cb2b8: 0x10000011  b           . + 4 + (0x11 << 2)
label_2cb2bc:
    if (ctx->pc == 0x2CB2BCu) {
        ctx->pc = 0x2CB2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB2B8u;
        // 0x2cb2bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB2C0u;
        goto label_2cb2c0;
    }
    ctx->pc = 0x2CB2B8u;
    {
        const bool branch_taken_0x2cb2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB2B8u;
        // 0x2cb2bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb2b8) {
            ctx->pc = 0x2CB300u;
            goto label_2cb300;
        }
    }
    ctx->pc = 0x2CB2C0u;
label_2cb2c0:
    // 0x2cb2c0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2cb2c4:
    if (ctx->pc == 0x2CB2C4u) {
        ctx->pc = 0x2CB2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB2C0u;
        // 0x2cb2c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB2C8u;
        goto label_2cb2c8;
    }
    ctx->pc = 0x2CB2C0u;
    {
        const bool branch_taken_0x2cb2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB2C0u;
        // 0x2cb2c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb2c0) {
            ctx->pc = 0x2CB300u;
            goto label_2cb300;
        }
    }
    ctx->pc = 0x2CB2C8u;
label_2cb2c8:
    // 0x2cb2c8: 0x9202002a  lbu         $v0, 0x2A($s0)
    ctx->pc = 0x2cb2c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
label_2cb2cc:
    // 0x2cb2cc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2cb2d0:
    if (ctx->pc == 0x2CB2D0u) {
        ctx->pc = 0x2CB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB2CCu;
        // 0x2cb2d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB2D4u;
        goto label_2cb2d4;
    }
    ctx->pc = 0x2CB2CCu;
    {
        const bool branch_taken_0x2cb2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB2CCu;
        // 0x2cb2d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb2cc) {
            ctx->pc = 0x2CB300u;
            goto label_2cb300;
        }
    }
    ctx->pc = 0x2CB2D4u;
label_2cb2d4:
    // 0x2cb2d4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2cb2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cb2d8:
    // 0x2cb2d8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cb2d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cb2dc:
    // 0x2cb2dc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cb2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cb2e0:
    // 0x2cb2e0: 0x40f809  jalr        $v0
label_2cb2e4:
    if (ctx->pc == 0x2CB2E4u) {
        ctx->pc = 0x2CB2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB2E0u;
        // 0x2cb2e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB2E8u;
        goto label_2cb2e8;
    }
    ctx->pc = 0x2CB2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CB2E8u);
        ctx->pc = 0x2CB2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB2E0u;
        // 0x2cb2e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB2E0u, 0x2CB2E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CB2E8u;
label_2cb2e8:
    // 0x2cb2e8: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x2cb2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2cb2ec:
    // 0x2cb2ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cb2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb2f0:
    // 0x2cb2f0: 0xc08e1a4  jal         func_238690
label_2cb2f4:
    if (ctx->pc == 0x2CB2F4u) {
        ctx->pc = 0x2CB2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB2F0u;
        // 0x2cb2f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB2F8u;
        goto label_2cb2f8;
    }
    ctx->pc = 0x2CB2F0u;
    SET_GPR_U32(ctx, 31, 0x2CB2F8u);
    ctx->pc = 0x2CB2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB2F0u;
    // 0x2cb2f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x2CB2F0u, 0x2CB2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB2F8u;
label_2cb2f8:
    // 0x2cb2f8: 0xa215002a  sb          $s5, 0x2A($s0)
    ctx->pc = 0x2cb2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 21));
label_2cb2fc:
    // 0x2cb2fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cb2fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cb300:
    // 0x2cb300: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2cb300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2cb304:
    // 0x2cb304: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2cb304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2cb308:
    // 0x2cb308: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2cb308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2cb30c:
    // 0x2cb30c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cb30cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cb310:
    // 0x2cb310: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2cb310u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cb314:
    // 0x2cb314: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2cb314u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb318:
    // 0x2cb318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cb31c:
    // 0x2cb31c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2cb31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2cb320:
    // 0x2cb320: 0x3e00008  jr          $ra
label_2cb324:
    if (ctx->pc == 0x2CB324u) {
        ctx->pc = 0x2CB324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB320u;
        // 0x2cb324: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB328u;
        goto label_fallthrough_0x2cb320;
    }
    ctx->pc = 0x2CB320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB320u;
        // 0x2cb324: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cb320:
    ctx->pc = 0x2CB328u;
}
