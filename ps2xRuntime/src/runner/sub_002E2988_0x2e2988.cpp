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

// Function: sub_002E2988
// Address: 0x2e2988 - 0x2e2d28
void sub_002E2988_0x2e2988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2988_0x2e2988");
#endif

    switch (ctx->pc) {
        case 0x2e2a08u: goto label_2e2a08;
        case 0x2e2a48u: goto label_2e2a48;
        case 0x2e2a8cu: goto label_2e2a8c;
        case 0x2e2a9cu: goto label_2e2a9c;
        case 0x2e2ac0u: goto label_2e2ac0;
        case 0x2e2ad0u: goto label_2e2ad0;
        case 0x2e2b00u: goto label_2e2b00;
        case 0x2e2b0cu: goto label_2e2b0c;
        case 0x2e2bf8u: goto label_2e2bf8;
        case 0x2e2c00u: goto label_2e2c00;
        case 0x2e2c20u: goto label_2e2c20;
        case 0x2e2c38u: goto label_2e2c38;
        case 0x2e2c4cu: goto label_2e2c4c;
        case 0x2e2c80u: goto label_2e2c80;
        case 0x2e2c9cu: goto label_2e2c9c;
        case 0x2e2cacu: goto label_2e2cac;
        case 0x2e2ce0u: goto label_2e2ce0;
        default: break;
    }

    ctx->pc = 0x2e2988u;

    // 0x2e2988: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2e2988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2e298c: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x2e298cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x2e2990: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x2e2990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x2e2994: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e2994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2998: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x2e2998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x2e299c: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x2e299cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x2e29a0: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x2e29a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x2e29a4: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x2e29a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x2e29a8: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x2e29a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x2e29ac: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x2e29acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x2e29b0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2e29b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2e29b4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2e29b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2e29b8: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x2e29b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2e29bc: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x2e29bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2e29c0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e29c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e29c4: 0x80a2002e  lb          $v0, 0x2E($a1)
    ctx->pc = 0x2e29c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 46)));
    // 0x2e29c8: 0x1c4000c9  bgtz        $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x2E29C8u;
    {
        const bool branch_taken_0x2e29c8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2E29CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E29C8u;
        // 0x2e29cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e29c8) {
            ctx->pc = 0x2E2CF0u;
            goto label_2e2cf0;
        }
    }
    ctx->pc = 0x2E29D0u;
    // 0x2e29d0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2e29d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2e29d4: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x2e29d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2e29d8: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x2e29d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x2e29dc: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x2e29dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2e29e0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2e29e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e29e4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E29E4u;
    {
        const bool branch_taken_0x2e29e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E29E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E29E4u;
        // 0x2e29e8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e29e4) {
            ctx->pc = 0x2E2A1Cu;
            goto label_2e2a1c;
        }
    }
    ctx->pc = 0x2E29ECu;
    // 0x2e29ec: 0x8cb0020c  lw          $s0, 0x20C($a1)
    ctx->pc = 0x2e29ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x2e29f0: 0x24427530  addiu       $v0, $v0, 0x7530
    ctx->pc = 0x2e29f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30000));
    // 0x2e29f4: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x2e29f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x2e29f8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2e29f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2e29fc: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2e29fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2e2a00: 0xc0cd526  jal         func_335498
    ctx->pc = 0x2E2A00u;
    SET_GPR_U32(ctx, 31, 0x2E2A08u);
    ctx->pc = 0x2E2A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2A00u;
    // 0x2e2a04: 0x8e05017c  lw          $a1, 0x17C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x2E2A00u, 0x2E2A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2A08u;
label_2e2a08:
    // 0x2e2a08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e2a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e2a0c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2e2a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e2a10: 0x8e02015c  lw          $v0, 0x15C($s0)
    ctx->pc = 0x2e2a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x2e2a14: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2A14u;
    {
        const bool branch_taken_0x2e2a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2a14) {
            ctx->pc = 0x2E2A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2A14u;
            // 0x2e2a18: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2A1Cu;
            goto label_2e2a1c;
        }
    }
    ctx->pc = 0x2E2A1Cu;
label_2e2a1c:
    // 0x2e2a1c: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x2e2a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2e2a20: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E2A20u;
    {
        const bool branch_taken_0x2e2a20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A20u;
        // 0x2e2a24: 0x8e43b734  lw          $v1, -0x48CC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2a20) {
            ctx->pc = 0x2E2A54u;
            goto label_2e2a54;
        }
    }
    ctx->pc = 0x2E2A28u;
    // 0x2e2a28: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2e2a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2e2a2c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E2A2Cu;
    {
        const bool branch_taken_0x2e2a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A2Cu;
        // 0x2e2a30: 0x8e42b734  lw          $v0, -0x48CC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2a2c) {
            ctx->pc = 0x2E2A54u;
            goto label_2e2a54;
        }
    }
    ctx->pc = 0x2E2A34u;
    // 0x2e2a34: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2e2a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2e2a38: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x2e2a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2e2a3c: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2e2a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2e2a40: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2E2A40u;
    SET_GPR_U32(ctx, 31, 0x2E2A48u);
    ctx->pc = 0x2E2A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2A40u;
    // 0x2e2a44: 0x8c500048  lw          $s0, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2E2A40u, 0x2E2A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2A48u;
label_2e2a48:
    // 0x2e2a48: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2e2a48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e2a4c: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x2E2A4Cu;
    {
        const bool branch_taken_0x2e2a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A4Cu;
        // 0x2e2a50: 0xae30002c  sw          $s0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2a4c) {
            ctx->pc = 0x2E2CECu;
            goto label_2e2cec;
        }
    }
    ctx->pc = 0x2E2A54u;
label_2e2a54:
    // 0x2e2a54: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2e2a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2e2a58: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2e2a58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2e2a5c: 0x144000a4  bnez        $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x2E2A5Cu;
    {
        const bool branch_taken_0x2e2a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A5Cu;
        // 0x2e2a60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2a5c) {
            ctx->pc = 0x2E2CF0u;
            goto label_2e2cf0;
        }
    }
    ctx->pc = 0x2E2A64u;
    // 0x2e2a64: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x2e2a64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2e2a68: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x2e2a68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e2a6c: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x2e2a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x2e2a70: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x2e2a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x2e2a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2a78: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e2a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e2a7c: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x2e2a7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2e2a80: 0x8c7e0000  lw          $fp, 0x0($v1)
    ctx->pc = 0x2e2a80u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e2a84: 0xc104a44  jal         func_412910
    ctx->pc = 0x2E2A84u;
    SET_GPR_U32(ctx, 31, 0x2E2A8Cu);
    ctx->pc = 0x2E2A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2A84u;
    // 0x2e2a88: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412910u, 0x2E2A84u, 0x2E2A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2A8Cu;
label_2e2a8c:
    // 0x2e2a8c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2e2a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2e2a90: 0xc6140040  lwc1        $f20, 0x40($s0)
    ctx->pc = 0x2e2a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e2a94: 0xc0cd538  jal         func_3354E0
    ctx->pc = 0x2E2A94u;
    SET_GPR_U32(ctx, 31, 0x2E2A9Cu);
    ctx->pc = 0x2E2A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2A94u;
    // 0x2e2a98: 0x2484b8a0  addiu       $a0, $a0, -0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354E0u, 0x2E2A94u, 0x2E2A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2A9Cu;
label_2e2a9c:
    // 0x2e2a9c: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2e2a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2aa0: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x2e2aa0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x2e2aa4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2e2aa4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2e2aa8: 0x4417a000  mfc1        $s7, $f20
    ctx->pc = 0x2e2aa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
    // 0x2e2aac: 0x3c16006f  lui         $s6, 0x6F
    ctx->pc = 0x2e2aacu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
    // 0x2e2ab0: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x2e2ab0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    // 0x2e2ab4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2e2ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x2e2ab8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2AB8u;
    {
        const bool branch_taken_0x2e2ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2AB8u;
        // 0x2e2abc: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2ab8) {
            ctx->pc = 0x2E2AC8u;
            goto label_2e2ac8;
        }
    }
    ctx->pc = 0x2E2AC0u;
label_2e2ac0:
    // 0x2e2ac0: 0x6800052  bltz        $s4, . + 4 + (0x52 << 2)
    ctx->pc = 0x2E2AC0u;
    {
        const bool branch_taken_0x2e2ac0 = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x2e2ac0) {
            ctx->pc = 0x2E2C0Cu;
            goto label_2e2c0c;
        }
    }
    ctx->pc = 0x2E2AC8u;
label_2e2ac8:
    // 0x2e2ac8: 0xc0cd538  jal         func_3354E0
    ctx->pc = 0x2E2AC8u;
    SET_GPR_U32(ctx, 31, 0x2E2AD0u);
    ctx->pc = 0x2E2ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2AC8u;
    // 0x2e2acc: 0x26c4b880  addiu       $a0, $s6, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354E0u, 0x2E2AC8u, 0x2E2AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2AD0u;
label_2e2ad0:
    // 0x2e2ad0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2e2ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2e2ad4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2e2ad4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2e2ad8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e2ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2adc: 0x26a31740  addiu       $v1, $s5, 0x1740
    ctx->pc = 0x2e2adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 5952));
    // 0x2e2ae0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e2ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2e2ae4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e2ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e2ae8: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x2e2ae8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e2aec: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2e2aecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e2af0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2e2af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2e2af4: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x2e2af4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2e2af8: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x2E2AF8u;
    SET_GPR_U32(ctx, 31, 0x2E2B00u);
    ctx->pc = 0x2E2AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2AF8u;
    // 0x2e2afc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x2E2AF8u, 0x2E2B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2B00u;
label_2e2b00:
    // 0x2e2b00: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2e2b00u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2e2b04: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x2E2B04u;
    SET_GPR_U32(ctx, 31, 0x2E2B0Cu);
    ctx->pc = 0x2E2B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2B04u;
    // 0x2e2b08: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2E2B04u, 0x2E2B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2B0Cu;
label_2e2b0c:
    // 0x2e2b0c: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2e2b0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e2b10: 0x26021730  addiu       $v0, $s0, 0x1730
    ctx->pc = 0x2e2b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 5936));
    // 0x2e2b14: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x2e2b14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2e2b18: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2e2b18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2e2b1c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2e2b1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2e2b20: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2e2b20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e2b24: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2e2b24u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e2b28: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e2b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2e2b2c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2e2b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x2e2b30: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2e2b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2b34: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2e2b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2b38: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2e2b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e2b3c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2e2b3cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2b40: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2e2b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e2b44: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2e2b44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e2b48: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2e2b48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e2b4c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2e2b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x2e2b50: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2e2b50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2b54: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e2b54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2e2b58: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2e2b58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2e2b5c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2e2b5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2e2b60: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2e2b60u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2e2b64: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x2e2b64u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e2b68: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2e2b68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2e2b6c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x2e2b6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2e2b70: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x2e2b70u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2e2b74: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2e2b74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2e2b78: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2e2b78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e2b7c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x2e2b7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e2b80: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x2e2b80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2e2b84: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x2e2b84u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2e2b88: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x2e2b88u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2e2b8c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x2e2b8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2e2b90: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x2e2b90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2e2b94: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x2e2b94u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2e2b98: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e2b98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2e2b9c: 0x48b71000  qmtc2.ni    $s7, $vf2
    ctx->pc = 0x2e2b9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 23));
    // 0x2e2ba0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2e2ba0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e2ba4: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x2e2ba4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e2ba8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x2e2ba8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2bac: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2e2bacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2e2bb0: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2e2bb0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2e2bb4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2e2bb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e2bb8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2e2bb8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2e2bbc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2e2bbcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2e2bc0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2e2bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2e2bc4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2e2bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2e2bc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e2bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2bcc: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x2e2bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
    // 0x2e2bd0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2e2bd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2e2bd4: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2e2bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x2e2bd8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e2bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e2bdc: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2e2bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2e2be0: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x2e2be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
    // 0x2e2be4: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x2e2be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x2e2be8: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x2e2be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x2e2bec: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2e2becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x2e2bf0: 0xc0d3e54  jal         func_34F950
    ctx->pc = 0x2E2BF0u;
    SET_GPR_U32(ctx, 31, 0x2E2BF8u);
    ctx->pc = 0x2E2BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2BF0u;
    // 0x2e2bf4: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F950u, 0x2E2BF0u, 0x2E2BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2BF8u;
label_2e2bf8:
    // 0x2e2bf8: 0xc0941c2  jal         func_250708
    ctx->pc = 0x2E2BF8u;
    SET_GPR_U32(ctx, 31, 0x2E2C00u);
    ctx->pc = 0x2E2BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2BF8u;
    // 0x2e2bfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x2E2BF8u, 0x2E2C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2C00u;
label_2e2c00:
    // 0x2e2c00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e2c00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2c04: 0x1240ffae  beqz        $s2, . + 4 + (-0x52 << 2)
    ctx->pc = 0x2E2C04u;
    {
        const bool branch_taken_0x2e2c04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2c04) {
            ctx->pc = 0x2E2AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2ac0;
        }
    }
    ctx->pc = 0x2E2C0Cu;
label_2e2c0c:
    // 0x2e2c0c: 0x12400038  beqz        $s2, . + 4 + (0x38 << 2)
    ctx->pc = 0x2E2C0Cu;
    {
        const bool branch_taken_0x2e2c0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2C0Cu;
        // 0x2e2c10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c0c) {
            ctx->pc = 0x2E2CF0u;
            goto label_2e2cf0;
        }
    }
    ctx->pc = 0x2E2C14u;
    // 0x2e2c14: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e2c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e2c18: 0xc0a3fce  jal         func_28FF38
    ctx->pc = 0x2E2C18u;
    SET_GPR_U32(ctx, 31, 0x2E2C20u);
    ctx->pc = 0x2E2C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2C18u;
    // 0x2e2c1c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF38u, 0x2E2C18u, 0x2E2C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2C20u;
label_2e2c20:
    // 0x2e2c20: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e2c20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e2c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2c28: 0x16820031  bne         $s4, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2E2C28u;
    {
        const bool branch_taken_0x2e2c28 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E2C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2C28u;
        // 0x2e2c2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c28) {
            ctx->pc = 0x2E2CF0u;
            goto label_2e2cf0;
        }
    }
    ctx->pc = 0x2E2C30u;
    // 0x2e2c30: 0xc092414  jal         func_249050
    ctx->pc = 0x2E2C30u;
    SET_GPR_U32(ctx, 31, 0x2E2C38u);
    ctx->pc = 0x2E2C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2C30u;
    // 0x2e2c34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249050u, 0x2E2C30u, 0x2E2C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2C38u;
label_2e2c38:
    // 0x2e2c38: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2E2C38u;
    {
        const bool branch_taken_0x2e2c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2C38u;
        // 0x2e2c3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c38) {
            ctx->pc = 0x2E2CF0u;
            goto label_2e2cf0;
        }
    }
    ctx->pc = 0x2E2C40u;
    // 0x2e2c40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e2c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2c44: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2E2C44u;
    SET_GPR_U32(ctx, 31, 0x2E2C4Cu);
    ctx->pc = 0x2E2C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2C44u;
    // 0x2e2c48: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2E2C44u, 0x2E2C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2C4Cu;
label_2e2c4c:
    // 0x2e2c4c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2e2c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2e2c50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e2c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2c54: 0x0  nop
    ctx->pc = 0x2e2c54u;
    // NOP
    // 0x2e2c58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e2c58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2c5c: 0x0  nop
    ctx->pc = 0x2e2c5cu;
    // NOP
    // 0x2e2c60: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x2E2C60u;
    {
        const bool branch_taken_0x2e2c60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2C60u;
        // 0x2e2c64: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c60) {
            ctx->pc = 0x2E2CECu;
            goto label_2e2cec;
        }
    }
    ctx->pc = 0x2E2C68u;
    // 0x2e2c68: 0x87d00092  lh          $s0, 0x92($fp)
    ctx->pc = 0x2e2c68u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 146)));
    // 0x2e2c6c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2e2c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2e2c70: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2e2c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2c74: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2e2c74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2e2c78: 0xc091e56  jal         func_247958
    ctx->pc = 0x2E2C78u;
    SET_GPR_U32(ctx, 31, 0x2E2C80u);
    ctx->pc = 0x2E2C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2C78u;
    // 0x2e2c7c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247958u, 0x2E2C78u, 0x2E2C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2C80u;
label_2e2c80:
    // 0x2e2c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2c84: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e2c84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2c88: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2e2c88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2c8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e2c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2c90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e2c90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2c94: 0xc09381e  jal         func_24E078
    ctx->pc = 0x2E2C94u;
    SET_GPR_U32(ctx, 31, 0x2E2C9Cu);
    ctx->pc = 0x2E2C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2C94u;
    // 0x2e2c98: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x2E2C94u, 0x2E2C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2C9Cu;
label_2e2c9c:
    // 0x2e2c9c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E2C9Cu;
    {
        const bool branch_taken_0x2e2c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2C9Cu;
        // 0x2e2ca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c9c) {
            ctx->pc = 0x2E2CF0u;
            goto label_2e2cf0;
        }
    }
    ctx->pc = 0x2E2CA4u;
    // 0x2e2ca4: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2E2CA4u;
    SET_GPR_U32(ctx, 31, 0x2E2CACu);
    ctx->pc = 0x2E2CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2CA4u;
    // 0x2e2ca8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E2CA4u, 0x2E2CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2CACu;
label_2e2cac:
    // 0x2e2cac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e2cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2cb0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E2CB0u;
    {
        const bool branch_taken_0x2e2cb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2CB0u;
        // 0x2e2cb4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2cb0) {
            ctx->pc = 0x2E2CE0u;
            goto label_2e2ce0;
        }
    }
    ctx->pc = 0x2E2CB8u;
    // 0x2e2cb8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e2cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e2cbc: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2e2cbcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2e2cc0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e2cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2cc4: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x2e2cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2e2cc8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e2cc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2ccc: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x2e2cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x2e2cd0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e2cd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e2cd4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e2cd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2cd8: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2E2CD8u;
    SET_GPR_U32(ctx, 31, 0x2E2CE0u);
    ctx->pc = 0x2E2CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2CD8u;
    // 0x2e2cdc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2E2CD8u, 0x2E2CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2CE0u;
label_2e2ce0:
    // 0x2e2ce0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2e2ce0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2ce4: 0xae340034  sw          $s4, 0x34($s1)
    ctx->pc = 0x2e2ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 20));
    // 0x2e2ce8: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x2e2ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_2e2cec:
    // 0x2e2cec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e2cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2cf0:
    // 0x2e2cf0: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x2e2cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2e2cf4: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x2e2cf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2e2cf8: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x2e2cf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2e2cfc: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x2e2cfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e2d00: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x2e2d00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e2d04: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x2e2d04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e2d08: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x2e2d08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e2d0c: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x2e2d0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e2d10: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2e2d10u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2d14: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2e2d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e2d18: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x2e2d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e2d1c: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x2e2d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e2d20: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2D20u;
        // 0x2e2d24: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2D28u;
}
