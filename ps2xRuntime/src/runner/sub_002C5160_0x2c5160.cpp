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

// Function: sub_002C5160
// Address: 0x2c5160 - 0x2c53f0
void sub_002C5160_0x2c5160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5160_0x2c5160");
#endif

    switch (ctx->pc) {
        case 0x2c51a8u: goto label_2c51a8;
        case 0x2c51b8u: goto label_2c51b8;
        case 0x2c51fcu: goto label_2c51fc;
        case 0x2c5218u: goto label_2c5218;
        case 0x2c5228u: goto label_2c5228;
        case 0x2c5258u: goto label_2c5258;
        case 0x2c5278u: goto label_2c5278;
        case 0x2c5284u: goto label_2c5284;
        case 0x2c5290u: goto label_2c5290;
        case 0x2c52b8u: goto label_2c52b8;
        case 0x2c52e4u: goto label_2c52e4;
        case 0x2c5320u: goto label_2c5320;
        case 0x2c5358u: goto label_2c5358;
        case 0x2c5374u: goto label_2c5374;
        case 0x2c537cu: goto label_2c537c;
        case 0x2c53acu: goto label_2c53ac;
        default: break;
    }

    ctx->pc = 0x2c5160u;

    // 0x2c5160: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2c5160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2c5164: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2c5164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2c5168: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2c5168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2c516c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c516cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5170: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2c5170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2c5174: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2c5174u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5178: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2c5178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2c517c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2c517cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2c5180: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2c5180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2c5184: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2c5184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2c5188: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2c5188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2c518c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c518cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c5190: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x2c5190u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2c5194: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2c5194u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2c5198: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c5198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c519c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2c519cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c51a0: 0xc08a08a  jal         func_228228
    ctx->pc = 0x2C51A0u;
    SET_GPR_U32(ctx, 31, 0x2C51A8u);
    ctx->pc = 0x2C51A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C51A0u;
    // 0x2c51a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2C51A0u, 0x2C51A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C51A8u;
label_2c51a8:
    // 0x2c51a8: 0x54550005  bnel        $v0, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C51A8u;
    {
        const bool branch_taken_0x2c51a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x2c51a8) {
            ctx->pc = 0x2C51ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C51A8u;
            // 0x2c51ac: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C51C0u;
            goto label_2c51c0;
        }
    }
    ctx->pc = 0x2C51B0u;
    // 0x2c51b0: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2C51B0u;
    SET_GPR_U32(ctx, 31, 0x2C51B8u);
    ctx->pc = 0x2C51B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C51B0u;
    // 0x2c51b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2C51B0u, 0x2C51B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C51B8u;
label_2c51b8:
    // 0x2c51b8: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x2C51B8u;
    {
        const bool branch_taken_0x2c51b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C51BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C51B8u;
        // 0x2c51bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c51b8) {
            ctx->pc = 0x2C53B8u;
            goto label_2c53b8;
        }
    }
    ctx->pc = 0x2C51C0u;
label_2c51c0:
    // 0x2c51c0: 0x8222002e  lb          $v0, 0x2E($s1)
    ctx->pc = 0x2c51c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x2c51c4: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2c51c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c51c8: 0x1055000c  beq         $v0, $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x2C51C8u;
    {
        const bool branch_taken_0x2c51c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2C51CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C51C8u;
        // 0x2c51cc: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c51c8) {
            ctx->pc = 0x2C51FCu;
            goto label_2c51fc;
        }
    }
    ctx->pc = 0x2C51D0u;
    // 0x2c51d0: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2c51d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
    // 0x2c51d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C51D4u;
    {
        const bool branch_taken_0x2c51d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C51D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C51D4u;
        // 0x2c51d8: 0x3c170051  lui         $s7, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c51d4) {
            ctx->pc = 0x2C51E4u;
            goto label_2c51e4;
        }
    }
    ctx->pc = 0x2C51DCu;
    // 0x2c51dc: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2C51DCu;
    {
        const bool branch_taken_0x2c51dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C51E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C51DCu;
        // 0x2c51e0: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c51dc) {
            ctx->pc = 0x2C53B4u;
            goto label_2c53b4;
        }
    }
    ctx->pc = 0x2C51E4u;
label_2c51e4:
    // 0x2c51e4: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x2c51e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2c51e8: 0x8ee3b734  lw          $v1, -0x48CC($s7)
    ctx->pc = 0x2c51e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
    // 0x2c51ec: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2c51ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2c51f0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2c51f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2c51f4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C51F4u;
    {
        const bool branch_taken_0x2c51f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c51f4) {
            ctx->pc = 0x2C51F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C51F4u;
            // 0x2c51f8: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5204u;
            goto label_2c5204;
        }
    }
    ctx->pc = 0x2C51FCu;
label_2c51fc:
    // 0x2c51fc: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2C51FCu;
    {
        const bool branch_taken_0x2c51fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C51FCu;
        // 0x2c5200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c51fc) {
            ctx->pc = 0x2C53B8u;
            goto label_2c53b8;
        }
    }
    ctx->pc = 0x2C5204u;
label_2c5204:
    // 0x2c5204: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c5204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5208: 0x26920090  addiu       $s2, $s4, 0x90
    ctx->pc = 0x2c5208u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x2c520c: 0x3c160071  lui         $s6, 0x71
    ctx->pc = 0x2c520cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)113 << 16));
    // 0x2c5210: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2C5210u;
    SET_GPR_U32(ctx, 31, 0x2C5218u);
    ctx->pc = 0x2C5214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5210u;
    // 0x2c5214: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C5210u, 0x2C5218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5218u;
label_2c5218:
    // 0x2c5218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c5218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c521c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c521cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5220: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2C5220u;
    SET_GPR_U32(ctx, 31, 0x2C5228u);
    ctx->pc = 0x2C5224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5220u;
    // 0x2c5224: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2C5220u, 0x2C5228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5228u;
label_2c5228:
    // 0x2c5228: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c5228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c522c: 0x12200042  beqz        $s1, . + 4 + (0x42 << 2)
    ctx->pc = 0x2C522Cu;
    {
        const bool branch_taken_0x2c522c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C522Cu;
        // 0x2c5230: 0x86440002  lh          $a0, 0x2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c522c) {
            ctx->pc = 0x2C5338u;
            goto label_2c5338;
        }
    }
    ctx->pc = 0x2C5234u;
    // 0x2c5234: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2c5234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2c5238: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2C5238u;
    {
        const bool branch_taken_0x2c5238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5238) {
            ctx->pc = 0x2C5338u;
            goto label_2c5338;
        }
    }
    ctx->pc = 0x2C5240u;
    // 0x2c5240: 0x26d34b00  addiu       $s3, $s6, 0x4B00
    ctx->pc = 0x2c5240u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
    // 0x2c5244: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x2c5244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x2c5248: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c5248u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2c524c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2c524cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2c5250: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x2C5250u;
    SET_GPR_U32(ctx, 31, 0x2C5258u);
    ctx->pc = 0x2C5254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5250u;
    // 0x2c5254: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2C5250u, 0x2C5258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5258u;
label_2c5258:
    // 0x2c5258: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x2c5258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2c525c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2c525cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2c5260: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x2c5260u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2c5264: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c5264u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2c5268: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2c5268u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2c526c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2c526cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2c5270: 0xc0cd780  jal         func_335E00
    ctx->pc = 0x2C5270u;
    SET_GPR_U32(ctx, 31, 0x2C5278u);
    ctx->pc = 0x2C5274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5270u;
    // 0x2c5274: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2C5270u, 0x2C5278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5278u;
label_2c5278:
    // 0x2c5278: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c5278u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2c527c: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x2C527Cu;
    SET_GPR_U32(ctx, 31, 0x2C5284u);
    ctx->pc = 0x2C5280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C527Cu;
    // 0x2c5280: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2C527Cu, 0x2C5284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5284u;
label_2c5284:
    // 0x2c5284: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c5284u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2c5288: 0xc0cdd2e  jal         func_3374B8
    ctx->pc = 0x2C5288u;
    SET_GPR_U32(ctx, 31, 0x2C5290u);
    ctx->pc = 0x2C528Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5288u;
    // 0x2c528c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2C5288u, 0x2C5290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5290u;
label_2c5290:
    // 0x2c5290: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2c5290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x2c5294: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2c5294u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2c5298: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c5298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c529c: 0x0  nop
    ctx->pc = 0x2c529cu;
    // NOP
    // 0x2c52a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c52a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c52a4: 0x0  nop
    ctx->pc = 0x2c52a4u;
    // NOP
    // 0x2c52a8: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
    ctx->pc = 0x2C52A8u;
    {
        const bool branch_taken_0x2c52a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c52a8) {
            ctx->pc = 0x2C52ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C52A8u;
            // 0x2c52ac: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C52ECu;
            goto label_2c52ec;
        }
    }
    ctx->pc = 0x2C52B0u;
    // 0x2c52b0: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2C52B0u;
    SET_GPR_U32(ctx, 31, 0x2C52B8u);
    ctx->pc = 0x2C52B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C52B0u;
    // 0x2c52b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C52B0u, 0x2C52B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C52B8u;
label_2c52b8:
    // 0x2c52b8: 0x1040ffd0  beqz        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2C52B8u;
    {
        const bool branch_taken_0x2c52b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C52BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C52B8u;
        // 0x2c52bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c52b8) {
            ctx->pc = 0x2C51FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c51fc;
        }
    }
    ctx->pc = 0x2C52C0u;
    // 0x2c52c0: 0x86260002  lh          $a2, 0x2($s1)
    ctx->pc = 0x2c52c0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2c52c4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2c52c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c52c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c52c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c52cc: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2c52ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2c52d0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2c52d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2c52d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2c52d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2c52d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c52d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c52dc: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2C52DCu;
    SET_GPR_U32(ctx, 31, 0x2C52E4u);
    ctx->pc = 0x2C52E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C52DCu;
    // 0x2c52e0: 0xd33021  addu        $a2, $a2, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2C52DCu, 0x2C52E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C52E4u;
label_2c52e4:
    // 0x2c52e4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2C52E4u;
    {
        const bool branch_taken_0x2c52e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C52E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C52E4u;
        // 0x2c52e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c52e4) {
            ctx->pc = 0x2C53B8u;
            goto label_2c53b8;
        }
    }
    ctx->pc = 0x2C52ECu;
label_2c52ec:
    // 0x2c52ec: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C52ECu;
    {
        const bool branch_taken_0x2c52ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c52ec) {
            ctx->pc = 0x2C52F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C52ECu;
            // 0x2c52f0: 0x86440002  lh          $a0, 0x2($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5338u;
            goto label_2c5338;
        }
    }
    ctx->pc = 0x2C52F4u;
    // 0x2c52f4: 0xae15003c  sw          $s5, 0x3C($s0)
    ctx->pc = 0x2c52f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 21));
    // 0x2c52f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c52f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c52fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c52fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5300: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c5300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c5304: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x2c5304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2c5308: 0x8e090034  lw          $t1, 0x34($s0)
    ctx->pc = 0x2c5308u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2c530c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c530cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5310: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c5310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5314: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c5314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5318: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2C5318u;
    SET_GPR_U32(ctx, 31, 0x2C5320u);
    ctx->pc = 0x2C531Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5318u;
    // 0x2c531c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2C5318u, 0x2C5320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5320u;
label_2c5320:
    // 0x2c5320: 0x8ee4b734  lw          $a0, -0x48CC($s7)
    ctx->pc = 0x2c5320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
    // 0x2c5324: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c5324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5328: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2c5328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2c532c: 0x24630bb8  addiu       $v1, $v1, 0xBB8
    ctx->pc = 0x2c532cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3000));
    // 0x2c5330: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2C5330u;
    {
        const bool branch_taken_0x2c5330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5330u;
        // 0x2c5334: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5330) {
            ctx->pc = 0x2C53B8u;
            goto label_2c53b8;
        }
    }
    ctx->pc = 0x2C5338u;
label_2c5338:
    // 0x2c5338: 0x26c24b00  addiu       $v0, $s6, 0x4B00
    ctx->pc = 0x2c5338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
    // 0x2c533c: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x2c533cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2c5340: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c5340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5344: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2c5344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c5348: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c5348u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2c534c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c534cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5350: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2C5350u;
    SET_GPR_U32(ctx, 31, 0x2C5358u);
    ctx->pc = 0x2C5354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5350u;
    // 0x2c5354: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C5350u, 0x2C5358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5358u;
label_2c5358:
    // 0x2c5358: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c5358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c535c: 0x0  nop
    ctx->pc = 0x2c535cu;
    // NOP
    // 0x2c5360: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x2C5360u;
    {
        const bool branch_taken_0x2c5360 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C5364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5360u;
        // 0x2c5364: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5360) {
            ctx->pc = 0x2C53B8u;
            goto label_2c53b8;
        }
    }
    ctx->pc = 0x2C5368u;
    // 0x2c5368: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c5368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c536c: 0xc0a2ab0  jal         func_28AAC0
    ctx->pc = 0x2C536Cu;
    SET_GPR_U32(ctx, 31, 0x2C5374u);
    ctx->pc = 0x2C5370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C536Cu;
    // 0x2c5370: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2C536Cu, 0x2C5374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5374u;
label_2c5374:
    // 0x2c5374: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2C5374u;
    SET_GPR_U32(ctx, 31, 0x2C537Cu);
    ctx->pc = 0x2C5378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5374u;
    // 0x2c5378: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C5374u, 0x2C537Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C537Cu;
label_2c537c:
    // 0x2c537c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c537cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5380: 0x1080ff9e  beqz        $a0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x2C5380u;
    {
        const bool branch_taken_0x2c5380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5380u;
        // 0x2c5384: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5380) {
            ctx->pc = 0x2C51FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c51fc;
        }
    }
    ctx->pc = 0x2C5388u;
    // 0x2c5388: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x2c5388u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2c538c: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2c538cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2c5390: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c5390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5394: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2c5394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c5398: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c5398u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c539c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c539cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c53a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c53a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c53a4: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2C53A4u;
    SET_GPR_U32(ctx, 31, 0x2C53ACu);
    ctx->pc = 0x2C53A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C53A4u;
    // 0x2c53a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2C53A4u, 0x2C53ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C53ACu;
label_2c53ac:
    // 0x2c53ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C53ACu;
    {
        const bool branch_taken_0x2c53ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C53B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C53ACu;
        // 0x2c53b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c53ac) {
            ctx->pc = 0x2C53B8u;
            goto label_2c53b8;
        }
    }
    ctx->pc = 0x2C53B4u;
label_2c53b4:
    // 0x2c53b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c53b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c53b8:
    // 0x2c53b8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2c53b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c53bc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2c53bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c53c0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2c53c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c53c4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2c53c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c53c8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c53c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c53cc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2c53ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c53d0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2c53d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c53d4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2c53d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c53d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c53d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c53dc: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x2c53dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c53e0: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2c53e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c53e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C53E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C53E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C53E4u;
        // 0x2c53e8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C53E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C53ECu;
    // 0x2c53ec: 0x0  nop
    ctx->pc = 0x2c53ecu;
    // NOP
    ctx->pc = 0x2c53f0u;
}
