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

// Function: sub_003A61D8
// Address: 0x3a61d8 - 0x3a65a8
void sub_003A61D8_0x3a61d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A61D8_0x3a61d8");
#endif

    switch (ctx->pc) {
        case 0x3a62c8u: goto label_3a62c8;
        case 0x3a62f0u: goto label_3a62f0;
        case 0x3a6308u: goto label_3a6308;
        case 0x3a6310u: goto label_3a6310;
        case 0x3a6324u: goto label_3a6324;
        case 0x3a6338u: goto label_3a6338;
        case 0x3a634cu: goto label_3a634c;
        case 0x3a6370u: goto label_3a6370;
        case 0x3a637cu: goto label_3a637c;
        case 0x3a6388u: goto label_3a6388;
        case 0x3a6394u: goto label_3a6394;
        case 0x3a63a0u: goto label_3a63a0;
        case 0x3a63acu: goto label_3a63ac;
        case 0x3a63b8u: goto label_3a63b8;
        case 0x3a63c4u: goto label_3a63c4;
        case 0x3a63ccu: goto label_3a63cc;
        case 0x3a63f0u: goto label_3a63f0;
        case 0x3a6420u: goto label_3a6420;
        case 0x3a6428u: goto label_3a6428;
        case 0x3a6440u: goto label_3a6440;
        case 0x3a6458u: goto label_3a6458;
        case 0x3a646cu: goto label_3a646c;
        case 0x3a6490u: goto label_3a6490;
        case 0x3a64a0u: goto label_3a64a0;
        case 0x3a64bcu: goto label_3a64bc;
        case 0x3a64c8u: goto label_3a64c8;
        case 0x3a64d4u: goto label_3a64d4;
        case 0x3a64e0u: goto label_3a64e0;
        case 0x3a64f4u: goto label_3a64f4;
        case 0x3a6500u: goto label_3a6500;
        case 0x3a650cu: goto label_3a650c;
        case 0x3a6518u: goto label_3a6518;
        case 0x3a6524u: goto label_3a6524;
        case 0x3a653cu: goto label_3a653c;
        case 0x3a654cu: goto label_3a654c;
        case 0x3a6554u: goto label_3a6554;
        default: break;
    }

    ctx->pc = 0x3a61d8u;

    // 0x3a61d8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3a61d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x3a61dc: 0x3c028f79  lui         $v0, 0x8F79
    ctx->pc = 0x3a61dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36729 << 16));
    // 0x3a61e0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3a61e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x3a61e4: 0x344261e0  ori         $v0, $v0, 0x61E0
    ctx->pc = 0x3a61e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25056);
    // 0x3a61e8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3a61e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x3a61ec: 0x3c03725d  lui         $v1, 0x725D
    ctx->pc = 0x3a61ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29277 << 16));
    // 0x3a61f0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3a61f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x3a61f4: 0x34634ee0  ori         $v1, $v1, 0x4EE0
    ctx->pc = 0x3a61f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20192);
    // 0x3a61f8: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3a61f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x3a61fc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3a61fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6200: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3a6200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x3a6204: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a6204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6208: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x3a6208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x3a620c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3a620cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x3a6210: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3a6210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3a6214: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x3a6214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x3a6218: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3a6218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3a621c: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x3a621cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x3a6220: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x3a6220u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x3a6224: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x3a6224u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x3a6228: 0x78c70000  lq          $a3, 0x0($a2)
    ctx->pc = 0x3a6228u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a622c: 0x3c069d91  lui         $a2, 0x9D91
    ctx->pc = 0x3a622cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40337 << 16));
    // 0x3a6230: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3a6230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x3a6234: 0x34c67ee0  ori         $a2, $a2, 0x7EE0
    ctx->pc = 0x3a6234u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32480);
    // 0x3a6238: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x3a6238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
    // 0x3a623c: 0xafbd0040  sw          $sp, 0x40($sp)
    ctx->pc = 0x3a623cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 29));
    // 0x3a6240: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a6240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a6244: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x3a6244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x3a6248: 0x1502000a  bne         $t0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A6248u;
    {
        const bool branch_taken_0x3a6248 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6248u;
        // 0x3a624c: 0xafa60018  sw          $a2, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6248) {
            ctx->pc = 0x3A6274u;
            goto label_3a6274;
        }
    }
    ctx->pc = 0x3A6250u;
    // 0x3a6250: 0x3c02264b  lui         $v0, 0x264B
    ctx->pc = 0x3a6250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9803 << 16));
    // 0x3a6254: 0x3c037894  lui         $v1, 0x7894
    ctx->pc = 0x3a6254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30868 << 16));
    // 0x3a6258: 0x3c047691  lui         $a0, 0x7691
    ctx->pc = 0x3a6258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30353 << 16));
    // 0x3a625c: 0x344258e0  ori         $v0, $v0, 0x58E0
    ctx->pc = 0x3a625cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22752);
    // 0x3a6260: 0x34639be0  ori         $v1, $v1, 0x9BE0
    ctx->pc = 0x3a6260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39904);
    // 0x3a6264: 0x348497e0  ori         $a0, $a0, 0x97E0
    ctx->pc = 0x3a6264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)38880);
    // 0x3a6268: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3a6268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x3a626c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x3a626cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x3a6270: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3a6270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_3a6274:
    // 0x3a6274: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a6274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a6278: 0x5502000b  bnel        $t0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A6278u;
    {
        const bool branch_taken_0x3a6278 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a6278) {
            ctx->pc = 0x3A627Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6278u;
            // 0x3a627c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A62A8u;
            goto label_3a62a8;
        }
    }
    ctx->pc = 0x3A6280u;
    // 0x3a6280: 0x3c02aaa0  lui         $v0, 0xAAA0
    ctx->pc = 0x3a6280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43680 << 16));
    // 0x3a6284: 0x3c03ccc9  lui         $v1, 0xCCC9
    ctx->pc = 0x3a6284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52425 << 16));
    // 0x3a6288: 0x3c04ecdf  lui         $a0, 0xECDF
    ctx->pc = 0x3a6288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60639 << 16));
    // 0x3a628c: 0x344294e0  ori         $v0, $v0, 0x94E0
    ctx->pc = 0x3a628cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38112);
    // 0x3a6290: 0x3463c4e0  ori         $v1, $v1, 0xC4E0
    ctx->pc = 0x3a6290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)50400);
    // 0x3a6294: 0x3484d7e0  ori         $a0, $a0, 0xD7E0
    ctx->pc = 0x3a6294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55264);
    // 0x3a6298: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3a6298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x3a629c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x3a629cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x3a62a0: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3a62a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x3a62a4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3a62a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3a62a8:
    // 0x3a62a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3a62a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a62ac: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3a62acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    // 0x3a62b0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3a62b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3a62b4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3a62b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3a62b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a62b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a62bc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3a62bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3a62c0: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x3A62C0u;
    SET_GPR_U32(ctx, 31, 0x3A62C8u);
    ctx->pc = 0x3A62C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A62C0u;
    // 0x3a62c4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3A62C0u, 0x3A62C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A62C8u;
label_3a62c8:
    // 0x3a62c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a62c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a62cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a62ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a62d0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3a62d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a62d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a62d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a62d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3a62d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a62dc: 0x8c750000  lw          $s5, 0x0($v1)
    ctx->pc = 0x3a62dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a62e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a62e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a62e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3a62e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a62e8: 0xc0e97e0  jal         func_3A5F80
    ctx->pc = 0x3A62E8u;
    SET_GPR_U32(ctx, 31, 0x3A62F0u);
    ctx->pc = 0x3A62ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A62E8u;
    // 0x3a62ec: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5F80u, 0x3A62E8u, 0x3A62F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A62F0u;
label_3a62f0:
    // 0x3a62f0: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x3a62f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
    // 0x3a62f4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3a62f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3a62f8: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x3a62f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
    // 0x3a62fc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3a62fcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5116C0u));
    // 0x3a6300: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3a6300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x3a6304: 0x0  nop
    ctx->pc = 0x3a6304u;
    // NOP
label_3a6308:
    // 0x3a6308: 0xc0e9694  jal         func_3A5A50
    ctx->pc = 0x3A6308u;
    SET_GPR_U32(ctx, 31, 0x3A6310u);
    ctx->pc = 0x3A630Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6308u;
    // 0x3a630c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3A6308u, 0x3A6310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6310u;
label_3a6310:
    // 0x3a6310: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3A6310u;
    {
        const bool branch_taken_0x3a6310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6310u;
        // 0x3a6314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6310) {
            ctx->pc = 0x3A63CCu;
            goto label_3a63cc;
        }
    }
    ctx->pc = 0x3A6318u;
    // 0x3a6318: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a6318u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a631c: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A631Cu;
    SET_GPR_U32(ctx, 31, 0x3A6324u);
    ctx->pc = 0x3A6320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A631Cu;
    // 0x3a6320: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A631Cu, 0x3A6324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6324u;
label_3a6324:
    // 0x3a6324: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3a6324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3a6328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a6328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a632c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a632cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a6330: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A6330u;
    SET_GPR_U32(ctx, 31, 0x3A6338u);
    ctx->pc = 0x3A6334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6330u;
    // 0x3a6334: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A6330u, 0x3A6338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6338u;
label_3a6338:
    // 0x3a6338: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3a6338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3a633c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a633cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6340: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a6340u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a6344: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A6344u;
    SET_GPR_U32(ctx, 31, 0x3A634Cu);
    ctx->pc = 0x3A6348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6344u;
    // 0x3a6348: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A6344u, 0x3A634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A634Cu;
label_3a634c:
    // 0x3a634c: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x3a634cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x3a6350: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x3a6350u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x3a6354: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a6354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a6358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a6358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a635c: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x3a635cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x3a6360: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3a6360u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x3a6364: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a6364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a6368: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A6368u;
    SET_GPR_U32(ctx, 31, 0x3A6370u);
    ctx->pc = 0x3A636Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6368u;
    // 0x3a636c: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A6368u, 0x3A6370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6370u;
label_3a6370:
    // 0x3a6370: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a6370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a6374: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3A6374u;
    SET_GPR_U32(ctx, 31, 0x3A637Cu);
    ctx->pc = 0x3A6378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6374u;
    // 0x3a6378: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3A6374u, 0x3A637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A637Cu;
label_3a637c:
    // 0x3a637c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x3a637cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a6380: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3A6380u;
    SET_GPR_U32(ctx, 31, 0x3A6388u);
    ctx->pc = 0x3A6384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6380u;
    // 0x3a6384: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3A6380u, 0x3A6388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6388u;
label_3a6388:
    // 0x3a6388: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a6388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a638c: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3A638Cu;
    SET_GPR_U32(ctx, 31, 0x3A6394u);
    ctx->pc = 0x3A6390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A638Cu;
    // 0x3a6390: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3A638Cu, 0x3A6394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6394u;
label_3a6394:
    // 0x3a6394: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a6394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a6398: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A6398u;
    SET_GPR_U32(ctx, 31, 0x3A63A0u);
    ctx->pc = 0x3A639Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6398u;
    // 0x3a639c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A6398u, 0x3A63A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A63A0u;
label_3a63a0:
    // 0x3a63a0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a63a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a63a4: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3A63A4u;
    SET_GPR_U32(ctx, 31, 0x3A63ACu);
    ctx->pc = 0x3A63A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A63A4u;
    // 0x3a63a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3A63A4u, 0x3A63ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A63ACu;
label_3a63ac:
    // 0x3a63ac: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a63acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a63b0: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A63B0u;
    SET_GPR_U32(ctx, 31, 0x3A63B8u);
    ctx->pc = 0x3A63B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A63B0u;
    // 0x3a63b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A63B0u, 0x3A63B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A63B8u;
label_3a63b8:
    // 0x3a63b8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a63b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a63bc: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x3A63BCu;
    SET_GPR_U32(ctx, 31, 0x3A63C4u);
    ctx->pc = 0x3A63C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A63BCu;
    // 0x3a63c0: 0x26451ab0  addiu       $a1, $s2, 0x1AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3A63BCu, 0x3A63C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A63C4u;
label_3a63c4:
    // 0x3a63c4: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3A63C4u;
    SET_GPR_U32(ctx, 31, 0x3A63CCu);
    ctx->pc = 0x3A63C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A63C4u;
    // 0x3a63c8: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3A63C4u, 0x3A63CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A63CCu;
label_3a63cc:
    // 0x3a63cc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3a63ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3a63d0: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x3a63d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a63d4: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x3A63D4u;
    {
        const bool branch_taken_0x3a63d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A63D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A63D4u;
        // 0x3a63d8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a63d4) {
            ctx->pc = 0x3A6308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6308;
        }
    }
    ctx->pc = 0x3A63DCu;
    // 0x3a63dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a63dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a63e0: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x3a63e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x3a63e4: 0x241e0010  addiu       $fp, $zero, 0x10
    ctx->pc = 0x3a63e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3a63e8: 0xc1073cc  jal         func_41CF30
    ctx->pc = 0x3A63E8u;
    SET_GPR_U32(ctx, 31, 0x3A63F0u);
    ctx->pc = 0x3A63ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A63E8u;
    // 0x3a63ec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3A63E8u, 0x3A63F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A63F0u;
label_3a63f0:
    // 0x3a63f0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3a63f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3a63f4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3a63f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3a63f8: 0x62f00b  movn        $fp, $v1, $v0
    ctx->pc = 0x3a63f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 3));
    // 0x3a63fc: 0x13c00059  beqz        $fp, . + 4 + (0x59 << 2)
    ctx->pc = 0x3A63FCu;
    {
        const bool branch_taken_0x3a63fc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A63FCu;
        // 0x3a6400: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a63fc) {
            ctx->pc = 0x3A6564u;
            goto label_3a6564;
        }
    }
    ctx->pc = 0x3A6404u;
    // 0x3a6404: 0x3c160001  lui         $s6, 0x1
    ctx->pc = 0x3a6404u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)1 << 16));
    // 0x3a6408: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3a6408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3a640c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3a640cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3a6410: 0x2452b8b8  addiu       $s2, $v0, -0x4748
    ctx->pc = 0x3a6410u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
    // 0x3a6414: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a6414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a6418: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3a6418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3a641c: 0x36d6000c  ori         $s6, $s6, 0xC
    ctx->pc = 0x3a641cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)12);
label_3a6420:
    // 0x3a6420: 0xc0e9694  jal         func_3A5A50
    ctx->pc = 0x3A6420u;
    SET_GPR_U32(ctx, 31, 0x3A6428u);
    ctx->pc = 0x3A6424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6420u;
    // 0x3a6424: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3A6420u, 0x3A6428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6428u;
label_3a6428:
    // 0x3a6428: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x3A6428u;
    {
        const bool branch_taken_0x3a6428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6428u;
        // 0x3a642c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6428) {
            ctx->pc = 0x3A6554u;
            goto label_3a6554;
        }
    }
    ctx->pc = 0x3A6430u;
    // 0x3a6430: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a6430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6434: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3a6434u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x3a6438: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A6438u;
    SET_GPR_U32(ctx, 31, 0x3A6440u);
    ctx->pc = 0x3A643Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6438u;
    // 0x3a643c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A6438u, 0x3A6440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6440u;
label_3a6440:
    // 0x3a6440: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x3a6440u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a6444: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3a6444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3a6448: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a6448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a644c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a644cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a6450: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A6450u;
    SET_GPR_U32(ctx, 31, 0x3A6458u);
    ctx->pc = 0x3A6454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6450u;
    // 0x3a6454: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A6450u, 0x3A6458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6458u;
label_3a6458:
    // 0x3a6458: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3a6458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3a645c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a645cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6460: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a6460u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a6464: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A6464u;
    SET_GPR_U32(ctx, 31, 0x3A646Cu);
    ctx->pc = 0x3A6468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6464u;
    // 0x3a6468: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A6464u, 0x3A646Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A646Cu;
label_3a646c:
    // 0x3a646c: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x3a646cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
    // 0x3a6470: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3a6470u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3a6474: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a6474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a6478: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a6478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a647c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3a647cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x3a6480: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3a6480u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x3a6484: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a6484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a6488: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A6488u;
    SET_GPR_U32(ctx, 31, 0x3A6490u);
    ctx->pc = 0x3A648Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6488u;
    // 0x3a648c: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A6488u, 0x3A6490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6490u;
label_3a6490:
    // 0x3a6490: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3a6490u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3a6494: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a6494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6498: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x3A6498u;
    SET_GPR_U32(ctx, 31, 0x3A64A0u);
    ctx->pc = 0x3A649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6498u;
    // 0x3a649c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3A6498u, 0x3A64A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A64A0u;
label_3a64a0:
    // 0x3a64a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a64a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a64a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3a64a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a64a8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3a64a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3a64ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a64acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a64b0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3a64b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3a64b4: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x3A64B4u;
    SET_GPR_U32(ctx, 31, 0x3A64BCu);
    ctx->pc = 0x3A64B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A64B4u;
    // 0x3a64b8: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3A64B4u, 0x3A64BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A64BCu;
label_3a64bc:
    // 0x3a64bc: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a64bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a64c0: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3A64C0u;
    SET_GPR_U32(ctx, 31, 0x3A64C8u);
    ctx->pc = 0x3A64C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A64C0u;
    // 0x3a64c4: 0x568021  addu        $s0, $v0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3A64C0u, 0x3A64C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A64C8u;
label_3a64c8:
    // 0x3a64c8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x3a64c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a64cc: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3A64CCu;
    SET_GPR_U32(ctx, 31, 0x3A64D4u);
    ctx->pc = 0x3A64D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A64CCu;
    // 0x3a64d0: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3A64CCu, 0x3A64D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A64D4u;
label_3a64d4:
    // 0x3a64d4: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a64d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a64d8: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3A64D8u;
    SET_GPR_U32(ctx, 31, 0x3A64E0u);
    ctx->pc = 0x3A64DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A64D8u;
    // 0x3a64dc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3A64D8u, 0x3A64E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A64E0u;
label_3a64e0:
    // 0x3a64e0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3a64e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x3a64e4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3a64e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x3a64e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a64e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a64ec: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3A64ECu;
    SET_GPR_U32(ctx, 31, 0x3A64F4u);
    ctx->pc = 0x3A64F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A64ECu;
    // 0x3a64f0: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3A64ECu, 0x3A64F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A64F4u;
label_3a64f4:
    // 0x3a64f4: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a64f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a64f8: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A64F8u;
    SET_GPR_U32(ctx, 31, 0x3A6500u);
    ctx->pc = 0x3A64FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A64F8u;
    // 0x3a64fc: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A64F8u, 0x3A6500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6500u;
label_3a6500:
    // 0x3a6500: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a6500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a6504: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3A6504u;
    SET_GPR_U32(ctx, 31, 0x3A650Cu);
    ctx->pc = 0x3A6508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6504u;
    // 0x3a6508: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3A6504u, 0x3A650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A650Cu;
label_3a650c:
    // 0x3a650c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a650cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a6510: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A6510u;
    SET_GPR_U32(ctx, 31, 0x3A6518u);
    ctx->pc = 0x3A6514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6510u;
    // 0x3a6514: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A6510u, 0x3A6518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6518u;
label_3a6518:
    // 0x3a6518: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a6518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a651c: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A651Cu;
    SET_GPR_U32(ctx, 31, 0x3A6524u);
    ctx->pc = 0x3A6520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A651Cu;
    // 0x3a6520: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A651Cu, 0x3A6524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6524u;
label_3a6524:
    // 0x3a6524: 0x2e620004  sltiu       $v0, $s3, 0x4
    ctx->pc = 0x3a6524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3a6528: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3A6528u;
    {
        const bool branch_taken_0x3a6528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6528) {
            ctx->pc = 0x3A652Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6528u;
            // 0x3a652c: 0x8e970000  lw          $s7, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6530u;
            goto label_3a6530;
        }
    }
    ctx->pc = 0x3A6530u;
label_3a6530:
    // 0x3a6530: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a6530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a6534: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A6534u;
    SET_GPR_U32(ctx, 31, 0x3A653Cu);
    ctx->pc = 0x3A6538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6534u;
    // 0x3a6538: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A6534u, 0x3A653Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A653Cu;
label_3a653c:
    // 0x3a653c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a653cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a6540: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3a6540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x3a6544: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x3A6544u;
    SET_GPR_U32(ctx, 31, 0x3A654Cu);
    ctx->pc = 0x3A6548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6544u;
    // 0x3a6548: 0x24451ac0  addiu       $a1, $v0, 0x1AC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3A6544u, 0x3A654Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A654Cu;
label_3a654c:
    // 0x3a654c: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3A654Cu;
    SET_GPR_U32(ctx, 31, 0x3A6554u);
    ctx->pc = 0x3A6550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A654Cu;
    // 0x3a6550: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3A654Cu, 0x3A6554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6554u;
label_3a6554:
    // 0x3a6554: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3a6554u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3a6558: 0x27e102b  sltu        $v0, $s3, $fp
    ctx->pc = 0x3a6558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x3a655c: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x3A655Cu;
    {
        const bool branch_taken_0x3a655c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A655Cu;
        // 0x3a6560: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a655c) {
            ctx->pc = 0x3A6420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6420;
        }
    }
    ctx->pc = 0x3A6564u;
label_3a6564:
    // 0x3a6564: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3a6564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3a6568: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a6568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a656c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3a656cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3a6570: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3a6570u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3a6574: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3a6574u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3a6578: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3a6578u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3a657c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x3a657cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3a6580: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3a6580u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a6584: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3a6584u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a6588: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x3a6588u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a658c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3a658cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a6590: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x3a6590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3a6594: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x3a6594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3a6598: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x3a6598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a659c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A659Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A65A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A659Cu;
        // 0x3a65a0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A659Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A65A4u;
    // 0x3a65a4: 0x0  nop
    ctx->pc = 0x3a65a4u;
    // NOP
    ctx->pc = 0x3a65a8u;
}
