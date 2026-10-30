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

// Function: sub_0039C0E0
// Address: 0x39c0e0 - 0x39c290
void sub_0039C0E0_0x39c0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C0E0_0x39c0e0");
#endif

    switch (ctx->pc) {
        case 0x39c0e0u: goto label_39c0e0;
        case 0x39c0e4u: goto label_39c0e4;
        case 0x39c0e8u: goto label_39c0e8;
        case 0x39c0ecu: goto label_39c0ec;
        case 0x39c0f0u: goto label_39c0f0;
        case 0x39c0f4u: goto label_39c0f4;
        case 0x39c0f8u: goto label_39c0f8;
        case 0x39c0fcu: goto label_39c0fc;
        case 0x39c100u: goto label_39c100;
        case 0x39c104u: goto label_39c104;
        case 0x39c108u: goto label_39c108;
        case 0x39c10cu: goto label_39c10c;
        case 0x39c110u: goto label_39c110;
        case 0x39c114u: goto label_39c114;
        case 0x39c118u: goto label_39c118;
        case 0x39c11cu: goto label_39c11c;
        case 0x39c120u: goto label_39c120;
        case 0x39c124u: goto label_39c124;
        case 0x39c128u: goto label_39c128;
        case 0x39c12cu: goto label_39c12c;
        case 0x39c130u: goto label_39c130;
        case 0x39c134u: goto label_39c134;
        case 0x39c138u: goto label_39c138;
        case 0x39c13cu: goto label_39c13c;
        case 0x39c140u: goto label_39c140;
        case 0x39c144u: goto label_39c144;
        case 0x39c148u: goto label_39c148;
        case 0x39c14cu: goto label_39c14c;
        case 0x39c150u: goto label_39c150;
        case 0x39c154u: goto label_39c154;
        case 0x39c158u: goto label_39c158;
        case 0x39c15cu: goto label_39c15c;
        case 0x39c160u: goto label_39c160;
        case 0x39c164u: goto label_39c164;
        case 0x39c168u: goto label_39c168;
        case 0x39c16cu: goto label_39c16c;
        case 0x39c170u: goto label_39c170;
        case 0x39c174u: goto label_39c174;
        case 0x39c178u: goto label_39c178;
        case 0x39c17cu: goto label_39c17c;
        case 0x39c180u: goto label_39c180;
        case 0x39c184u: goto label_39c184;
        case 0x39c188u: goto label_39c188;
        case 0x39c18cu: goto label_39c18c;
        case 0x39c190u: goto label_39c190;
        case 0x39c194u: goto label_39c194;
        case 0x39c198u: goto label_39c198;
        case 0x39c19cu: goto label_39c19c;
        case 0x39c1a0u: goto label_39c1a0;
        case 0x39c1a4u: goto label_39c1a4;
        case 0x39c1a8u: goto label_39c1a8;
        case 0x39c1acu: goto label_39c1ac;
        case 0x39c1b0u: goto label_39c1b0;
        case 0x39c1b4u: goto label_39c1b4;
        case 0x39c1b8u: goto label_39c1b8;
        case 0x39c1bcu: goto label_39c1bc;
        case 0x39c1c0u: goto label_39c1c0;
        case 0x39c1c4u: goto label_39c1c4;
        case 0x39c1c8u: goto label_39c1c8;
        case 0x39c1ccu: goto label_39c1cc;
        case 0x39c1d0u: goto label_39c1d0;
        case 0x39c1d4u: goto label_39c1d4;
        case 0x39c1d8u: goto label_39c1d8;
        case 0x39c1dcu: goto label_39c1dc;
        case 0x39c1e0u: goto label_39c1e0;
        case 0x39c1e4u: goto label_39c1e4;
        case 0x39c1e8u: goto label_39c1e8;
        case 0x39c1ecu: goto label_39c1ec;
        case 0x39c1f0u: goto label_39c1f0;
        case 0x39c1f4u: goto label_39c1f4;
        case 0x39c1f8u: goto label_39c1f8;
        case 0x39c1fcu: goto label_39c1fc;
        case 0x39c200u: goto label_39c200;
        case 0x39c204u: goto label_39c204;
        case 0x39c208u: goto label_39c208;
        case 0x39c20cu: goto label_39c20c;
        case 0x39c210u: goto label_39c210;
        case 0x39c214u: goto label_39c214;
        case 0x39c218u: goto label_39c218;
        case 0x39c21cu: goto label_39c21c;
        case 0x39c220u: goto label_39c220;
        case 0x39c224u: goto label_39c224;
        case 0x39c228u: goto label_39c228;
        case 0x39c22cu: goto label_39c22c;
        case 0x39c230u: goto label_39c230;
        case 0x39c234u: goto label_39c234;
        case 0x39c238u: goto label_39c238;
        case 0x39c23cu: goto label_39c23c;
        case 0x39c240u: goto label_39c240;
        case 0x39c244u: goto label_39c244;
        case 0x39c248u: goto label_39c248;
        case 0x39c24cu: goto label_39c24c;
        case 0x39c250u: goto label_39c250;
        case 0x39c254u: goto label_39c254;
        case 0x39c258u: goto label_39c258;
        case 0x39c25cu: goto label_39c25c;
        case 0x39c260u: goto label_39c260;
        case 0x39c264u: goto label_39c264;
        case 0x39c268u: goto label_39c268;
        case 0x39c26cu: goto label_39c26c;
        case 0x39c270u: goto label_39c270;
        case 0x39c274u: goto label_39c274;
        case 0x39c278u: goto label_39c278;
        case 0x39c27cu: goto label_39c27c;
        case 0x39c280u: goto label_39c280;
        case 0x39c284u: goto label_39c284;
        case 0x39c288u: goto label_39c288;
        case 0x39c28cu: goto label_39c28c;
        default: break;
    }

    ctx->pc = 0x39c0e0u;

label_39c0e0:
    // 0x39c0e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x39c0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_39c0e4:
    // 0x39c0e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x39c0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_39c0e8:
    // 0x39c0e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x39c0e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_39c0ec:
    // 0x39c0ec: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x39c0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_39c0f0:
    // 0x39c0f0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x39c0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_39c0f4:
    // 0x39c0f4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x39c0f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_39c0f8:
    // 0x39c0f8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x39c0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_39c0fc:
    // 0x39c0fc: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x39c0fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_39c100:
    // 0x39c100: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x39c100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_39c104:
    // 0x39c104: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x39c104u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_39c108:
    // 0x39c108: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x39c108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_39c10c:
    // 0x39c10c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x39c10cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_39c110:
    // 0x39c110: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x39c110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_39c114:
    // 0x39c114: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x39c114u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_39c118:
    // 0x39c118: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x39c118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_39c11c:
    // 0x39c11c: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x39c11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_39c120:
    // 0x39c120: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x39c120u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39c124:
    // 0x39c124: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x39c124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_39c128:
    // 0x39c128: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x39c128u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_39c12c:
    // 0x39c12c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x39c12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_39c130:
    // 0x39c130: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x39c130u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_39c134:
    // 0x39c134: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39c134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_39c138:
    // 0x39c138: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x39c138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_39c13c:
    // 0x39c13c: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x39c13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_39c140:
    // 0x39c140: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x39c140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_39c144:
    // 0x39c144: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x39c144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39c148:
    // 0x39c148: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x39c148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39c14c:
    // 0x39c14c: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x39c14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39c150:
    // 0x39c150: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x39c150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_39c154:
    // 0x39c154: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x39c154u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_39c158:
    // 0x39c158: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x39c158u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_39c15c:
    // 0x39c15c: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x39c15cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_39c160:
    // 0x39c160: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x39c160u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_39c164:
    // 0x39c164: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x39c164u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_39c168:
    // 0x39c168: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x39c168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39c16c:
    // 0x39c16c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x39c16cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_39c170:
    // 0x39c170: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x39c170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39c174:
    // 0x39c174: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x39c174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39c178:
    // 0x39c178: 0xe642000c  swc1        $f2, 0xC($s2)
    ctx->pc = 0x39c178u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_39c17c:
    // 0x39c17c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x39c17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_39c180:
    // 0x39c180: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x39c180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_39c184:
    // 0x39c184: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x39c184u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_39c188:
    // 0x39c188: 0xe622000c  swc1        $f2, 0xC($s1)
    ctx->pc = 0x39c188u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_39c18c:
    // 0x39c18c: 0xc0e8b48  jal         func_3A2D20
label_39c190:
    if (ctx->pc == 0x39C190u) {
        ctx->pc = 0x39C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C18Cu;
        // 0x39c190: 0x8fb500e0  lw          $s5, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C194u;
        goto label_39c194;
    }
    ctx->pc = 0x39C18Cu;
    SET_GPR_U32(ctx, 31, 0x39C194u);
    ctx->pc = 0x39C190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C18Cu;
    // 0x39c190: 0x8fb500e0  lw          $s5, 0xE0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x39C18Cu, 0x39C194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C194u;
label_39c194:
    // 0x39c194: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39c194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_39c198:
    // 0x39c198: 0xc0e8b58  jal         func_3A2D60
label_39c19c:
    if (ctx->pc == 0x39C19Cu) {
        ctx->pc = 0x39C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C198u;
        // 0x39c19c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C1A0u;
        goto label_39c1a0;
    }
    ctx->pc = 0x39C198u;
    SET_GPR_U32(ctx, 31, 0x39C1A0u);
    ctx->pc = 0x39C19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C198u;
    // 0x39c19c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x39C198u, 0x39C1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C1A0u;
label_39c1a0:
    // 0x39c1a0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39c1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_39c1a4:
    // 0x39c1a4: 0xc0e8b58  jal         func_3A2D60
label_39c1a8:
    if (ctx->pc == 0x39C1A8u) {
        ctx->pc = 0x39C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C1A4u;
        // 0x39c1a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C1ACu;
        goto label_39c1ac;
    }
    ctx->pc = 0x39C1A4u;
    SET_GPR_U32(ctx, 31, 0x39C1ACu);
    ctx->pc = 0x39C1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C1A4u;
    // 0x39c1a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x39C1A4u, 0x39C1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C1ACu;
label_39c1ac:
    // 0x39c1ac: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39c1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_39c1b0:
    // 0x39c1b0: 0xc0e8b58  jal         func_3A2D60
label_39c1b4:
    if (ctx->pc == 0x39C1B4u) {
        ctx->pc = 0x39C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C1B0u;
        // 0x39c1b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C1B8u;
        goto label_39c1b8;
    }
    ctx->pc = 0x39C1B0u;
    SET_GPR_U32(ctx, 31, 0x39C1B8u);
    ctx->pc = 0x39C1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C1B0u;
    // 0x39c1b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x39C1B0u, 0x39C1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C1B8u;
label_39c1b8:
    // 0x39c1b8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39c1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_39c1bc:
    // 0x39c1bc: 0xc0e8b68  jal         func_3A2DA0
label_39c1c0:
    if (ctx->pc == 0x39C1C0u) {
        ctx->pc = 0x39C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C1BCu;
        // 0x39c1c0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C1C4u;
        goto label_39c1c4;
    }
    ctx->pc = 0x39C1BCu;
    SET_GPR_U32(ctx, 31, 0x39C1C4u);
    ctx->pc = 0x39C1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C1BCu;
    // 0x39c1c0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x39C1BCu, 0x39C1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C1C4u;
label_39c1c4:
    // 0x39c1c4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39c1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_39c1c8:
    // 0x39c1c8: 0xc0e8b78  jal         func_3A2DE0
label_39c1cc:
    if (ctx->pc == 0x39C1CCu) {
        ctx->pc = 0x39C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C1C8u;
        // 0x39c1cc: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C1D0u;
        goto label_39c1d0;
    }
    ctx->pc = 0x39C1C8u;
    SET_GPR_U32(ctx, 31, 0x39C1D0u);
    ctx->pc = 0x39C1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C1C8u;
    // 0x39c1cc: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x39C1C8u, 0x39C1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C1D0u;
label_39c1d0:
    // 0x39c1d0: 0xc66c0004  lwc1        $f12, 0x4($s3)
    ctx->pc = 0x39c1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39c1d4:
    // 0x39c1d4: 0xc0e8b78  jal         func_3A2DE0
label_39c1d8:
    if (ctx->pc == 0x39C1D8u) {
        ctx->pc = 0x39C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C1D4u;
        // 0x39c1d8: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C1DCu;
        goto label_39c1dc;
    }
    ctx->pc = 0x39C1D4u;
    SET_GPR_U32(ctx, 31, 0x39C1DCu);
    ctx->pc = 0x39C1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C1D4u;
    // 0x39c1d8: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x39C1D4u, 0x39C1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C1DCu;
label_39c1dc:
    // 0x39c1dc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39c1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_39c1e0:
    // 0x39c1e0: 0xc0e8b78  jal         func_3A2DE0
label_39c1e4:
    if (ctx->pc == 0x39C1E4u) {
        ctx->pc = 0x39C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C1E0u;
        // 0x39c1e4: 0xc68c0000  lwc1        $f12, 0x0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C1E8u;
        goto label_39c1e8;
    }
    ctx->pc = 0x39C1E0u;
    SET_GPR_U32(ctx, 31, 0x39C1E8u);
    ctx->pc = 0x39C1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C1E0u;
    // 0x39c1e4: 0xc68c0000  lwc1        $f12, 0x0($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x39C1E0u, 0x39C1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C1E8u;
label_39c1e8:
    // 0x39c1e8: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x39c1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39c1ec:
    // 0x39c1ec: 0xc0e8b78  jal         func_3A2DE0
label_39c1f0:
    if (ctx->pc == 0x39C1F0u) {
        ctx->pc = 0x39C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C1ECu;
        // 0x39c1f0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C1F4u;
        goto label_39c1f4;
    }
    ctx->pc = 0x39C1ECu;
    SET_GPR_U32(ctx, 31, 0x39C1F4u);
    ctx->pc = 0x39C1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C1ECu;
    // 0x39c1f0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x39C1ECu, 0x39C1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C1F4u;
label_39c1f4:
    // 0x39c1f4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39c1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_39c1f8:
    // 0x39c1f8: 0xc0e8b68  jal         func_3A2DA0
label_39c1fc:
    if (ctx->pc == 0x39C1FCu) {
        ctx->pc = 0x39C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C1F8u;
        // 0x39c1fc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C200u;
        goto label_39c200;
    }
    ctx->pc = 0x39C1F8u;
    SET_GPR_U32(ctx, 31, 0x39C200u);
    ctx->pc = 0x39C1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C1F8u;
    // 0x39c1fc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x39C1F8u, 0x39C200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C200u;
label_39c200:
    // 0x39c200: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39c200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_39c204:
    // 0x39c204: 0xc0e8b68  jal         func_3A2DA0
label_39c208:
    if (ctx->pc == 0x39C208u) {
        ctx->pc = 0x39C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C204u;
        // 0x39c208: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C20Cu;
        goto label_39c20c;
    }
    ctx->pc = 0x39C204u;
    SET_GPR_U32(ctx, 31, 0x39C20Cu);
    ctx->pc = 0x39C208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C204u;
    // 0x39c208: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x39C204u, 0x39C20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C20Cu;
label_39c20c:
    // 0x39c20c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39c20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_39c210:
    // 0x39c210: 0xc0e8b68  jal         func_3A2DA0
label_39c214:
    if (ctx->pc == 0x39C214u) {
        ctx->pc = 0x39C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C210u;
        // 0x39c214: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C218u;
        goto label_39c218;
    }
    ctx->pc = 0x39C210u;
    SET_GPR_U32(ctx, 31, 0x39C218u);
    ctx->pc = 0x39C214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C210u;
    // 0x39c214: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x39C210u, 0x39C218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C218u;
label_39c218:
    // 0x39c218: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x39c218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_39c21c:
    // 0x39c21c: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x39c21cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_39c220:
    // 0x39c220: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x39c220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_39c224:
    // 0x39c224: 0x24c61400  addiu       $a2, $a2, 0x1400
    ctx->pc = 0x39c224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5120));
label_39c228:
    // 0x39c228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39c228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39c22c:
    // 0x39c22c: 0xc10ca04  jal         func_432810
label_39c230:
    if (ctx->pc == 0x39C230u) {
        ctx->pc = 0x39C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C22Cu;
        // 0x39c230: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C234u;
        goto label_39c234;
    }
    ctx->pc = 0x39C22Cu;
    SET_GPR_U32(ctx, 31, 0x39C234u);
    ctx->pc = 0x39C230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C22Cu;
    // 0x39c230: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x39C22Cu, 0x39C234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C234u;
label_39c234:
    // 0x39c234: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39c234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_39c238:
    // 0x39c238: 0xc0e8b88  jal         func_3A2E20
label_39c23c:
    if (ctx->pc == 0x39C23Cu) {
        ctx->pc = 0x39C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C238u;
        // 0x39c23c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C240u;
        goto label_39c240;
    }
    ctx->pc = 0x39C238u;
    SET_GPR_U32(ctx, 31, 0x39C240u);
    ctx->pc = 0x39C23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C238u;
    // 0x39c23c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E20u, 0x39C238u, 0x39C240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C240u;
label_39c240:
    // 0x39c240: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39c240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_39c244:
    // 0x39c244: 0xc0e8b50  jal         func_3A2D40
label_39c248:
    if (ctx->pc == 0x39C248u) {
        ctx->pc = 0x39C248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C244u;
        // 0x39c248: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C24Cu;
        goto label_39c24c;
    }
    ctx->pc = 0x39C244u;
    SET_GPR_U32(ctx, 31, 0x39C24Cu);
    ctx->pc = 0x39C248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C244u;
    // 0x39c248: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x39C244u, 0x39C24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C24Cu;
label_39c24c:
    // 0x39c24c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39c24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39c250:
    // 0x39c250: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x39c250u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_39c254:
    // 0x39c254: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x39c254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_39c258:
    // 0x39c258: 0x40f809  jalr        $v0
label_39c25c:
    if (ctx->pc == 0x39C25Cu) {
        ctx->pc = 0x39C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C258u;
        // 0x39c25c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C260u;
        goto label_39c260;
    }
    ctx->pc = 0x39C258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39C260u);
        ctx->pc = 0x39C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C258u;
        // 0x39c25c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C258u, 0x39C260u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C260u;
label_39c260:
    // 0x39c260: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x39c260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_39c264:
    // 0x39c264: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x39c264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_39c268:
    // 0x39c268: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x39c268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_39c26c:
    // 0x39c26c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x39c26cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_39c270:
    // 0x39c270: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x39c270u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_39c274:
    // 0x39c274: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x39c274u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_39c278:
    // 0x39c278: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x39c278u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_39c27c:
    // 0x39c27c: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x39c27cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39c280:
    // 0x39c280: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x39c280u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39c284:
    // 0x39c284: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x39c284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_39c288:
    // 0x39c288: 0x3e00008  jr          $ra
label_39c28c:
    if (ctx->pc == 0x39C28Cu) {
        ctx->pc = 0x39C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C288u;
        // 0x39c28c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C290u;
        goto label_fallthrough_0x39c288;
    }
    ctx->pc = 0x39C288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C288u;
        // 0x39c28c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39c288:
    ctx->pc = 0x39C290u;
}
