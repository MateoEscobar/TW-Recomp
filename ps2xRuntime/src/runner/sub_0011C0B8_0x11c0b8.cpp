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

// Function: sub_0011C0B8
// Address: 0x11c0b8 - 0x11c270
void sub_0011C0B8_0x11c0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C0B8_0x11c0b8");
#endif

    switch (ctx->pc) {
        case 0x11c0b8u: goto label_11c0b8;
        case 0x11c0bcu: goto label_11c0bc;
        case 0x11c0c0u: goto label_11c0c0;
        case 0x11c0c4u: goto label_11c0c4;
        case 0x11c0c8u: goto label_11c0c8;
        case 0x11c0ccu: goto label_11c0cc;
        case 0x11c0d0u: goto label_11c0d0;
        case 0x11c0d4u: goto label_11c0d4;
        case 0x11c0d8u: goto label_11c0d8;
        case 0x11c0dcu: goto label_11c0dc;
        case 0x11c0e0u: goto label_11c0e0;
        case 0x11c0e4u: goto label_11c0e4;
        case 0x11c0e8u: goto label_11c0e8;
        case 0x11c0ecu: goto label_11c0ec;
        case 0x11c0f0u: goto label_11c0f0;
        case 0x11c0f4u: goto label_11c0f4;
        case 0x11c0f8u: goto label_11c0f8;
        case 0x11c0fcu: goto label_11c0fc;
        case 0x11c100u: goto label_11c100;
        case 0x11c104u: goto label_11c104;
        case 0x11c108u: goto label_11c108;
        case 0x11c10cu: goto label_11c10c;
        case 0x11c110u: goto label_11c110;
        case 0x11c114u: goto label_11c114;
        case 0x11c118u: goto label_11c118;
        case 0x11c11cu: goto label_11c11c;
        case 0x11c120u: goto label_11c120;
        case 0x11c124u: goto label_11c124;
        case 0x11c128u: goto label_11c128;
        case 0x11c12cu: goto label_11c12c;
        case 0x11c130u: goto label_11c130;
        case 0x11c134u: goto label_11c134;
        case 0x11c138u: goto label_11c138;
        case 0x11c13cu: goto label_11c13c;
        case 0x11c140u: goto label_11c140;
        case 0x11c144u: goto label_11c144;
        case 0x11c148u: goto label_11c148;
        case 0x11c14cu: goto label_11c14c;
        case 0x11c150u: goto label_11c150;
        case 0x11c154u: goto label_11c154;
        case 0x11c158u: goto label_11c158;
        case 0x11c15cu: goto label_11c15c;
        case 0x11c160u: goto label_11c160;
        case 0x11c164u: goto label_11c164;
        case 0x11c168u: goto label_11c168;
        case 0x11c16cu: goto label_11c16c;
        case 0x11c170u: goto label_11c170;
        case 0x11c174u: goto label_11c174;
        case 0x11c178u: goto label_11c178;
        case 0x11c17cu: goto label_11c17c;
        case 0x11c180u: goto label_11c180;
        case 0x11c184u: goto label_11c184;
        case 0x11c188u: goto label_11c188;
        case 0x11c18cu: goto label_11c18c;
        case 0x11c190u: goto label_11c190;
        case 0x11c194u: goto label_11c194;
        case 0x11c198u: goto label_11c198;
        case 0x11c19cu: goto label_11c19c;
        case 0x11c1a0u: goto label_11c1a0;
        case 0x11c1a4u: goto label_11c1a4;
        case 0x11c1a8u: goto label_11c1a8;
        case 0x11c1acu: goto label_11c1ac;
        case 0x11c1b0u: goto label_11c1b0;
        case 0x11c1b4u: goto label_11c1b4;
        case 0x11c1b8u: goto label_11c1b8;
        case 0x11c1bcu: goto label_11c1bc;
        case 0x11c1c0u: goto label_11c1c0;
        case 0x11c1c4u: goto label_11c1c4;
        case 0x11c1c8u: goto label_11c1c8;
        case 0x11c1ccu: goto label_11c1cc;
        case 0x11c1d0u: goto label_11c1d0;
        case 0x11c1d4u: goto label_11c1d4;
        case 0x11c1d8u: goto label_11c1d8;
        case 0x11c1dcu: goto label_11c1dc;
        case 0x11c1e0u: goto label_11c1e0;
        case 0x11c1e4u: goto label_11c1e4;
        case 0x11c1e8u: goto label_11c1e8;
        case 0x11c1ecu: goto label_11c1ec;
        case 0x11c1f0u: goto label_11c1f0;
        case 0x11c1f4u: goto label_11c1f4;
        case 0x11c1f8u: goto label_11c1f8;
        case 0x11c1fcu: goto label_11c1fc;
        case 0x11c200u: goto label_11c200;
        case 0x11c204u: goto label_11c204;
        case 0x11c208u: goto label_11c208;
        case 0x11c20cu: goto label_11c20c;
        case 0x11c210u: goto label_11c210;
        case 0x11c214u: goto label_11c214;
        case 0x11c218u: goto label_11c218;
        case 0x11c21cu: goto label_11c21c;
        case 0x11c220u: goto label_11c220;
        case 0x11c224u: goto label_11c224;
        case 0x11c228u: goto label_11c228;
        case 0x11c22cu: goto label_11c22c;
        case 0x11c230u: goto label_11c230;
        case 0x11c234u: goto label_11c234;
        case 0x11c238u: goto label_11c238;
        case 0x11c23cu: goto label_11c23c;
        case 0x11c240u: goto label_11c240;
        case 0x11c244u: goto label_11c244;
        case 0x11c248u: goto label_11c248;
        case 0x11c24cu: goto label_11c24c;
        case 0x11c250u: goto label_11c250;
        case 0x11c254u: goto label_11c254;
        case 0x11c258u: goto label_11c258;
        case 0x11c25cu: goto label_11c25c;
        case 0x11c260u: goto label_11c260;
        case 0x11c264u: goto label_11c264;
        case 0x11c268u: goto label_11c268;
        case 0x11c26cu: goto label_11c26c;
        default: break;
    }

    ctx->pc = 0x11c0b8u;

label_11c0b8:
    // 0x11c0b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11c0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_11c0bc:
    // 0x11c0bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11c0c0:
    // 0x11c0c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11c0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_11c0c4:
    // 0x11c0c4: 0xe7ba0070  swc1        $f26, 0x70($sp)
    ctx->pc = 0x11c0c4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_11c0c8:
    // 0x11c0c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11c0c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11c0cc:
    // 0x11c0cc: 0xe7b90068  swc1        $f25, 0x68($sp)
    ctx->pc = 0x11c0ccu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_11c0d0:
    // 0x11c0d0: 0x46009686  mov.s       $f26, $f18
    ctx->pc = 0x11c0d0u;
    ctx->f[26] = FPU_MOV_S(ctx->f[18]);
label_11c0d4:
    // 0x11c0d4: 0xe7b80060  swc1        $f24, 0x60($sp)
    ctx->pc = 0x11c0d4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_11c0d8:
    // 0x11c0d8: 0x46008e46  mov.s       $f25, $f17
    ctx->pc = 0x11c0d8u;
    ctx->f[25] = FPU_MOV_S(ctx->f[17]);
label_11c0dc:
    // 0x11c0dc: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x11c0dcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_11c0e0:
    // 0x11c0e0: 0x46007e06  mov.s       $f24, $f15
    ctx->pc = 0x11c0e0u;
    ctx->f[24] = FPU_MOV_S(ctx->f[15]);
label_11c0e4:
    // 0x11c0e4: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x11c0e4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_11c0e8:
    // 0x11c0e8: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x11c0e8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
label_11c0ec:
    // 0x11c0ec: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x11c0ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_11c0f0:
    // 0x11c0f0: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x11c0f0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_11c0f4:
    // 0x11c0f4: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x11c0f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_11c0f8:
    // 0x11c0f8: 0x46008546  mov.s       $f21, $f16
    ctx->pc = 0x11c0f8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[16]);
label_11c0fc:
    // 0x11c0fc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11c0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_11c100:
    // 0x11c100: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x11c100u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_11c104:
    // 0x11c104: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11c104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11c108:
    // 0x11c108: 0xc047e78  jal         func_11F9E0
label_11c10c:
    if (ctx->pc == 0x11C10Cu) {
        ctx->pc = 0x11C10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C108u;
        // 0x11c10c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C110u;
        goto label_11c110;
    }
    ctx->pc = 0x11C108u;
    SET_GPR_U32(ctx, 31, 0x11C110u);
    ctx->pc = 0x11C10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C108u;
    // 0x11c10c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11C108u, 0x11C110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C110u;
label_11c110:
    // 0x11c110: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11c110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c114:
    // 0x11c114: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
label_11c118:
    if (ctx->pc == 0x11C118u) {
        ctx->pc = 0x11C118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C114u;
        // 0x11c118: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C11Cu;
        goto label_11c11c;
    }
    ctx->pc = 0x11C114u;
    {
        const bool branch_taken_0x11c114 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C114u;
        // 0x11c118: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c114) {
            ctx->pc = 0x11C240u;
            goto label_11c240;
        }
    }
    ctx->pc = 0x11C11Cu;
label_11c11c:
    // 0x11c11c: 0xc04967a  jal         func_1259E8
label_11c120:
    if (ctx->pc == 0x11C120u) {
        ctx->pc = 0x11C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C11Cu;
        // 0x11c120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C124u;
        goto label_11c124;
    }
    ctx->pc = 0x11C11Cu;
    SET_GPR_U32(ctx, 31, 0x11C124u);
    ctx->pc = 0x11C120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C11Cu;
    // 0x11c120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1259E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1259E8u, 0x11C11Cu, 0x11C124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C124u;
label_11c124:
    // 0x11c124: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x11c124u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_11c128:
    // 0x11c128: 0xc049690  jal         func_125A40
label_11c12c:
    if (ctx->pc == 0x11C12Cu) {
        ctx->pc = 0x11C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C128u;
        // 0x11c12c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C130u;
        goto label_11c130;
    }
    ctx->pc = 0x11C128u;
    SET_GPR_U32(ctx, 31, 0x11C130u);
    ctx->pc = 0x11C12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C128u;
    // 0x11c12c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125A40u, 0x11C128u, 0x11C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C130u;
label_11c130:
    // 0x11c130: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x11c130u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_11c134:
    // 0x11c134: 0xc0496b2  jal         func_125AC8
label_11c138:
    if (ctx->pc == 0x11C138u) {
        ctx->pc = 0x11C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C134u;
        // 0x11c138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C13Cu;
        goto label_11c13c;
    }
    ctx->pc = 0x11C134u;
    SET_GPR_U32(ctx, 31, 0x11C13Cu);
    ctx->pc = 0x11C138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C134u;
    // 0x11c138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125AC8u, 0x11C134u, 0x11C13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C13Cu;
label_11c13c:
    // 0x11c13c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x11c13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_11c140:
    // 0x11c140: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x11c140u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_11c144:
    // 0x11c144: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11c144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11c148:
    // 0x11c148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c14c:
    // 0x11c14c: 0xe6150394  swc1        $f21, 0x394($s0)
    ctx->pc = 0x11c14cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 916), bits); }
label_11c150:
    // 0x11c150: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x11c150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
label_11c154:
    // 0x11c154: 0xe6150310  swc1        $f21, 0x310($s0)
    ctx->pc = 0x11c154u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 784), bits); }
label_11c158:
    // 0x11c158: 0xe60003b4  swc1        $f0, 0x3B4($s0)
    ctx->pc = 0x11c158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 948), bits); }
label_11c15c:
    // 0x11c15c: 0xc049622  jal         func_125888
label_11c160:
    if (ctx->pc == 0x11C160u) {
        ctx->pc = 0x11C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C15Cu;
        // 0x11c160: 0xe600030c  swc1        $f0, 0x30C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 780), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C164u;
        goto label_11c164;
    }
    ctx->pc = 0x11C15Cu;
    SET_GPR_U32(ctx, 31, 0x11C164u);
    ctx->pc = 0x11C160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C15Cu;
    // 0x11c160: 0xe600030c  swc1        $f0, 0x30C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 780), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125888u, 0x11C15Cu, 0x11C164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C164u;
label_11c164:
    // 0x11c164: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x11c164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11c168:
    // 0x11c168: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x11c168u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_11c16c:
    // 0x11c16c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x11c16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11c170:
    // 0x11c170: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x11c170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11c174:
    // 0x11c174: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11c174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11c178:
    // 0x11c178: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11c178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_11c17c:
    // 0x11c17c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x11c17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_11c180:
    // 0x11c180: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x11c180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_11c184:
    // 0x11c184: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x11c184u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_11c188:
    // 0x11c188: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x11c188u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_11c18c:
    // 0x11c18c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x11c18cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11c190:
    // 0x11c190: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11c190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11c194:
    // 0x11c194: 0x7e020210  sq          $v0, 0x210($s0)
    ctx->pc = 0x11c194u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 528), GPR_VEC(ctx, 2));
label_11c198:
    // 0x11c198: 0x846401a0  lh          $a0, 0x1A0($v1)
    ctx->pc = 0x11c198u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 416)));
label_11c19c:
    // 0x11c19c: 0x8c6201a4  lw          $v0, 0x1A4($v1)
    ctx->pc = 0x11c19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 420)));
label_11c1a0:
    // 0x11c1a0: 0x40f809  jalr        $v0
label_11c1a4:
    if (ctx->pc == 0x11C1A4u) {
        ctx->pc = 0x11C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1A0u;
        // 0x11c1a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C1A8u;
        goto label_11c1a8;
    }
    ctx->pc = 0x11C1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11C1A8u);
        ctx->pc = 0x11C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1A0u;
        // 0x11c1a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C1A0u, 0x11C1A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C1A8u;
label_11c1a8:
    // 0x11c1a8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x11c1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_11c1ac:
    // 0x11c1ac: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x11c1acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_11c1b0:
    // 0x11c1b0: 0x8c62b19c  lw          $v0, -0x4E64($v1)
    ctx->pc = 0x11c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947228)));
label_11c1b4:
    // 0x11c1b4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x11c1b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_11c1b8:
    // 0x11c1b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_11c1bc:
    if (ctx->pc == 0x11C1BCu) {
        ctx->pc = 0x11C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1B8u;
        // 0x11c1bc: 0xe49a48a0  swc1        $f26, 0x48A0($a0) (Delay Slot)
        { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 18592), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C1C0u;
        goto label_11c1c0;
    }
    ctx->pc = 0x11C1B8u;
    {
        const bool branch_taken_0x11c1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1B8u;
        // 0x11c1bc: 0xe49a48a0  swc1        $f26, 0x48A0($a0) (Delay Slot)
        { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 18592), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1b8) {
            ctx->pc = 0x11C1D0u;
            goto label_11c1d0;
        }
    }
    ctx->pc = 0x11C1C0u;
label_11c1c0:
    // 0x11c1c0: 0xc136dca  jal         func_4DB728
label_11c1c4:
    if (ctx->pc == 0x11C1C4u) {
        ctx->pc = 0x11C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1C0u;
        // 0x11c1c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C1C8u;
        goto label_11c1c8;
    }
    ctx->pc = 0x11C1C0u;
    SET_GPR_U32(ctx, 31, 0x11C1C8u);
    ctx->pc = 0x11C1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C1C0u;
    // 0x11c1c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB728u, 0x11C1C0u, 0x11C1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C1C8u;
label_11c1c8:
    // 0x11c1c8: 0x10000010  b           . + 4 + (0x10 << 2)
label_11c1cc:
    if (ctx->pc == 0x11C1CCu) {
        ctx->pc = 0x11C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1C8u;
        // 0x11c1cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C1D0u;
        goto label_11c1d0;
    }
    ctx->pc = 0x11C1C8u;
    {
        const bool branch_taken_0x11c1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1C8u;
        // 0x11c1cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1c8) {
            ctx->pc = 0x11C20Cu;
            goto label_11c20c;
        }
    }
    ctx->pc = 0x11C1D0u;
label_11c1d0:
    // 0x11c1d0: 0xc136df6  jal         func_4DB7D8
label_11c1d4:
    if (ctx->pc == 0x11C1D4u) {
        ctx->pc = 0x11C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1D0u;
        // 0x11c1d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C1D8u;
        goto label_11c1d8;
    }
    ctx->pc = 0x11C1D0u;
    SET_GPR_U32(ctx, 31, 0x11C1D8u);
    ctx->pc = 0x11C1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C1D0u;
    // 0x11c1d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7D8u, 0x11C1D0u, 0x11C1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C1D8u;
label_11c1d8:
    // 0x11c1d8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x11c1d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_11c1dc:
    // 0x11c1dc: 0xc136dec  jal         func_4DB7B0
label_11c1e0:
    if (ctx->pc == 0x11C1E0u) {
        ctx->pc = 0x11C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1DCu;
        // 0x11c1e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C1E4u;
        goto label_11c1e4;
    }
    ctx->pc = 0x11C1DCu;
    SET_GPR_U32(ctx, 31, 0x11C1E4u);
    ctx->pc = 0x11C1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C1DCu;
    // 0x11c1e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7B0u, 0x11C1DCu, 0x11C1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C1E4u;
label_11c1e4:
    // 0x11c1e4: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x11c1e4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_11c1e8:
    // 0x11c1e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c1ec:
    // 0x11c1ec: 0xc04b5ea  jal         func_12D7A8
label_11c1f0:
    if (ctx->pc == 0x11C1F0u) {
        ctx->pc = 0x11C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1ECu;
        // 0x11c1f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C1F4u;
        goto label_11c1f4;
    }
    ctx->pc = 0x11C1ECu;
    SET_GPR_U32(ctx, 31, 0x11C1F4u);
    ctx->pc = 0x11C1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C1ECu;
    // 0x11c1f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D7A8u, 0x11C1ECu, 0x11C1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C1F4u;
label_11c1f4:
    // 0x11c1f4: 0xc136dfa  jal         func_4DB7E8
label_11c1f8:
    if (ctx->pc == 0x11C1F8u) {
        ctx->pc = 0x11C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1F4u;
        // 0x11c1f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C1FCu;
        goto label_11c1fc;
    }
    ctx->pc = 0x11C1F4u;
    SET_GPR_U32(ctx, 31, 0x11C1FCu);
    ctx->pc = 0x11C1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C1F4u;
    // 0x11c1f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7E8u, 0x11C1F4u, 0x11C1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C1FCu;
label_11c1fc:
    // 0x11c1fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c200:
    // 0x11c200: 0xc04953c  jal         func_1254F0
label_11c204:
    if (ctx->pc == 0x11C204u) {
        ctx->pc = 0x11C204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C200u;
        // 0x11c204: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C208u;
        goto label_11c208;
    }
    ctx->pc = 0x11C200u;
    SET_GPR_U32(ctx, 31, 0x11C208u);
    ctx->pc = 0x11C204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C200u;
    // 0x11c204: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x11C200u, 0x11C208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C208u;
label_11c208:
    // 0x11c208: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11c208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11c20c:
    // 0x11c20c: 0xc047e78  jal         func_11F9E0
label_11c210:
    if (ctx->pc == 0x11C210u) {
        ctx->pc = 0x11C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C20Cu;
        // 0x11c210: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C214u;
        goto label_11c214;
    }
    ctx->pc = 0x11C20Cu;
    SET_GPR_U32(ctx, 31, 0x11C214u);
    ctx->pc = 0x11C210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C20Cu;
    // 0x11c210: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11C20Cu, 0x11C214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C214u;
label_11c214:
    // 0x11c214: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_11c218:
    if (ctx->pc == 0x11C218u) {
        ctx->pc = 0x11C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C214u;
        // 0x11c218: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C21Cu;
        goto label_11c21c;
    }
    ctx->pc = 0x11C214u;
    {
        const bool branch_taken_0x11c214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C214u;
        // 0x11c218: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c214) {
            ctx->pc = 0x11C240u;
            goto label_11c240;
        }
    }
    ctx->pc = 0x11C21Cu;
label_11c21c:
    // 0x11c21c: 0xc047e78  jal         func_11F9E0
label_11c220:
    if (ctx->pc == 0x11C220u) {
        ctx->pc = 0x11C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C21Cu;
        // 0x11c220: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C224u;
        goto label_11c224;
    }
    ctx->pc = 0x11C21Cu;
    SET_GPR_U32(ctx, 31, 0x11C224u);
    ctx->pc = 0x11C220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C21Cu;
    // 0x11c220: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11C21Cu, 0x11C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C224u;
label_11c224:
    // 0x11c224: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11c224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c228:
    // 0x11c228: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11c228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11c22c:
    // 0x11c22c: 0xc047e78  jal         func_11F9E0
label_11c230:
    if (ctx->pc == 0x11C230u) {
        ctx->pc = 0x11C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C22Cu;
        // 0x11c230: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C234u;
        goto label_11c234;
    }
    ctx->pc = 0x11C22Cu;
    SET_GPR_U32(ctx, 31, 0x11C234u);
    ctx->pc = 0x11C230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C22Cu;
    // 0x11c230: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11C22Cu, 0x11C234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C234u;
label_11c234:
    // 0x11c234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c238:
    // 0x11c238: 0xc04930a  jal         func_124C28
label_11c23c:
    if (ctx->pc == 0x11C23Cu) {
        ctx->pc = 0x11C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C238u;
        // 0x11c23c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C240u;
        goto label_11c240;
    }
    ctx->pc = 0x11C238u;
    SET_GPR_U32(ctx, 31, 0x11C240u);
    ctx->pc = 0x11C23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C238u;
    // 0x11c23c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124C28u, 0x11C238u, 0x11C240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C240u;
label_11c240:
    // 0x11c240: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11c240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11c244:
    // 0x11c244: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11c244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11c248:
    // 0x11c248: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11c248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11c24c:
    // 0x11c24c: 0xc7ba0070  lwc1        $f26, 0x70($sp)
    ctx->pc = 0x11c24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_11c250:
    // 0x11c250: 0xc7b90068  lwc1        $f25, 0x68($sp)
    ctx->pc = 0x11c250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_11c254:
    // 0x11c254: 0xc7b80060  lwc1        $f24, 0x60($sp)
    ctx->pc = 0x11c254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_11c258:
    // 0x11c258: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x11c258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_11c25c:
    // 0x11c25c: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x11c25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_11c260:
    // 0x11c260: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x11c260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_11c264:
    // 0x11c264: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x11c264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11c268:
    // 0x11c268: 0x3e00008  jr          $ra
label_11c26c:
    if (ctx->pc == 0x11C26Cu) {
        ctx->pc = 0x11C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C268u;
        // 0x11c26c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C270u;
        goto label_fallthrough_0x11c268;
    }
    ctx->pc = 0x11C268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C268u;
        // 0x11c26c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11c268:
    ctx->pc = 0x11C270u;
}
