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

// Function: sub_001210F8
// Address: 0x1210f8 - 0x121298
void sub_001210F8_0x1210f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001210F8_0x1210f8");
#endif

    switch (ctx->pc) {
        case 0x121250u: goto label_121250;
        case 0x121280u: goto label_121280;
        default: break;
    }

    ctx->pc = 0x1210f8u;

    // 0x1210f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1210f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1210fc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1210fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121100: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x121100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x121104: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x121104u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121108: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x121108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x12110c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x12110cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121110: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x121110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x121114: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x121114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x121118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12111c: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12111Cu;
    {
        const bool branch_taken_0x12111c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x121120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12111Cu;
        // 0x121120: 0xa10701d7  sb          $a3, 0x1D7($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 471), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12111c) {
            ctx->pc = 0x12112Cu;
            goto label_12112c;
        }
    }
    ctx->pc = 0x121124u;
    // 0x121124: 0x812201b0  lb          $v0, 0x1B0($t1)
    ctx->pc = 0x121124u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 432)));
    // 0x121128: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x121128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_12112c:
    // 0x12112c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12112cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121130: 0x12420014  beq         $s2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x121130u;
    {
        const bool branch_taken_0x121130 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x121134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121130u;
        // 0x121134: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121130) {
            ctx->pc = 0x121184u;
            goto label_121184;
        }
    }
    ctx->pc = 0x121138u;
    // 0x121138: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x121138u;
    {
        const bool branch_taken_0x121138 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121138u;
        // 0x12113c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121138) {
            ctx->pc = 0x121158u;
            goto label_121158;
        }
    }
    ctx->pc = 0x121140u;
    // 0x121140: 0x1242002b  beq         $s2, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x121140u;
    {
        const bool branch_taken_0x121140 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x121144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121140u;
        // 0x121144: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121140) {
            ctx->pc = 0x1211F0u;
            goto label_1211f0;
        }
    }
    ctx->pc = 0x121148u;
    // 0x121148: 0x1242001d  beq         $s2, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x121148u;
    {
        const bool branch_taken_0x121148 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x12114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121148u;
        // 0x12114c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121148) {
            ctx->pc = 0x1211C0u;
            goto label_1211c0;
        }
    }
    ctx->pc = 0x121150u;
    // 0x121150: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x121150u;
    {
        const bool branch_taken_0x121150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121150u;
        // 0x121154: 0x250701a8  addiu       $a3, $t0, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121150) {
            ctx->pc = 0x1211F8u;
            goto label_1211f8;
        }
    }
    ctx->pc = 0x121158u;
label_121158:
    // 0x121158: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x121158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x12115c: 0x250601a8  addiu       $a2, $t0, 0x1A8
    ctx->pc = 0x12115cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 424));
    // 0x121160: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x121160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x121164: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x121164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x121168: 0xa06001d0  sb          $zero, 0x1D0($v1)
    ctx->pc = 0x121168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 464), (uint8_t)GPR_U32(ctx, 0));
    // 0x12116c: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x12116cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x121170: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x121170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x121174: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x121174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121178: 0xaca001b4  sw          $zero, 0x1B4($a1)
    ctx->pc = 0x121178u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 436), GPR_U32(ctx, 0));
    // 0x12117c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x12117Cu;
    {
        const bool branch_taken_0x12117c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12117Cu;
        // 0x121180: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12117c) {
            ctx->pc = 0x121230u;
            goto label_121230;
        }
    }
    ctx->pc = 0x121184u;
label_121184:
    // 0x121184: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x121184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x121188: 0x250501a8  addiu       $a1, $t0, 0x1A8
    ctx->pc = 0x121188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 424));
    // 0x12118c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12118cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x121190: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x121190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x121194: 0xa04001d0  sb          $zero, 0x1D0($v0)
    ctx->pc = 0x121194u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 464), (uint8_t)GPR_U32(ctx, 0));
    // 0x121198: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x121198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x12119c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x12119cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1211a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1211a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1211a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1211a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1211a8: 0x1031021  addu        $v0, $t0, $v1
    ctx->pc = 0x1211a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1211ac: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1211acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1211b0: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1211b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1211b4: 0xe44001b4  swc1        $f0, 0x1B4($v0)
    ctx->pc = 0x1211b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 436), bits); }
    // 0x1211b8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1211B8u;
    {
        const bool branch_taken_0x1211b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1211BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211B8u;
        // 0x1211bc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211b8) {
            ctx->pc = 0x121230u;
            goto label_121230;
        }
    }
    ctx->pc = 0x1211C0u;
label_1211c0:
    // 0x1211c0: 0x250701a8  addiu       $a3, $t0, 0x1A8
    ctx->pc = 0x1211c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 424));
    // 0x1211c4: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x1211c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1211c8: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1211c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1211cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1211ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1211d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1211d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1211d4: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x1211d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1211d8: 0xa08301d0  sb          $v1, 0x1D0($a0)
    ctx->pc = 0x1211d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 464), (uint8_t)GPR_U32(ctx, 3));
    // 0x1211dc: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x1211dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
    // 0x1211e0: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1211e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1211e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1211e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1211e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1211E8u;
    {
        const bool branch_taken_0x1211e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1211ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211E8u;
        // 0x1211ec: 0x1023021  addu        $a2, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211e8) {
            ctx->pc = 0x121220u;
            goto label_121220;
        }
    }
    ctx->pc = 0x1211F0u;
label_1211f0:
    // 0x1211f0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1211f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1211f4: 0x250701a8  addiu       $a3, $t0, 0x1A8
    ctx->pc = 0x1211f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 424));
label_1211f8:
    // 0x1211f8: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x1211f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1211fc: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1211fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x121200: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x121200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x121204: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x121204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x121208: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x121208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x12120c: 0xa08301d0  sb          $v1, 0x1D0($a0)
    ctx->pc = 0x12120cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 464), (uint8_t)GPR_U32(ctx, 3));
    // 0x121210: 0x1023021  addu        $a2, $t0, $v0
    ctx->pc = 0x121210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x121214: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x121214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x121218: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x121218u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x12121c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12121cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_121220:
    // 0x121220: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x121220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121224: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x121224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x121228: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x121228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12122c: 0xe4c001b4  swc1        $f0, 0x1B4($a2)
    ctx->pc = 0x12122cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 436), bits); }
label_121230:
    // 0x121230: 0x1120000f  beqz        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x121230u;
    {
        const bool branch_taken_0x121230 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x121230) {
            ctx->pc = 0x121270u;
            goto label_121270;
        }
    }
    ctx->pc = 0x121238u;
    // 0x121238: 0x812201b0  lb          $v0, 0x1B0($t1)
    ctx->pc = 0x121238u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 432)));
    // 0x12123c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x12123cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x121240: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x121240u;
    {
        const bool branch_taken_0x121240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121240) {
            ctx->pc = 0x121270u;
            goto label_121270;
        }
    }
    ctx->pc = 0x121248u;
    // 0x121248: 0xc08cf14  jal         func_233C50
    ctx->pc = 0x121248u;
    SET_GPR_U32(ctx, 31, 0x121250u);
    ctx->pc = 0x233C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C50u, 0x121248u, 0x121250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121250u;
label_121250:
    // 0x121250: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x121250u;
    {
        const bool branch_taken_0x121250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121250u;
        // 0x121254: 0x2111021  addu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121250) {
            ctx->pc = 0x121270u;
            goto label_121270;
        }
    }
    ctx->pc = 0x121258u;
    // 0x121258: 0x3c013f28  lui         $at, 0x3F28
    ctx->pc = 0x121258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16168 << 16));
    // 0x12125c: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x12125cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x121260: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x121260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x121264: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x121264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121268: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x121268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12126c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x12126cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_121270:
    // 0x121270: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x121270u;
    {
        const bool branch_taken_0x121270 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x121274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121270u;
        // 0x121274: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121270) {
            ctx->pc = 0x121284u;
            goto label_121284;
        }
    }
    ctx->pc = 0x121278u;
    // 0x121278: 0xc048d0a  jal         func_123428
    ctx->pc = 0x121278u;
    SET_GPR_U32(ctx, 31, 0x121280u);
    ctx->pc = 0x123428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123428u, 0x121278u, 0x121280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121280u;
label_121280:
    // 0x121280: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x121280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_121284:
    // 0x121284: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x121284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121288: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x121288u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12128c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12128cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121290: 0x3e00008  jr          $ra
    ctx->pc = 0x121290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121290u;
        // 0x121294: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121298u;
}
