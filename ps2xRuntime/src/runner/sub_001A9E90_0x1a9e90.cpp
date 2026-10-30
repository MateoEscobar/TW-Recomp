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

// Function: sub_001A9E90
// Address: 0x1a9e90 - 0x1aa108
void sub_001A9E90_0x1a9e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9E90_0x1a9e90");
#endif

    switch (ctx->pc) {
        case 0x1a9e90u: goto label_1a9e90;
        case 0x1a9e94u: goto label_1a9e94;
        case 0x1a9e98u: goto label_1a9e98;
        case 0x1a9e9cu: goto label_1a9e9c;
        case 0x1a9ea0u: goto label_1a9ea0;
        case 0x1a9ea4u: goto label_1a9ea4;
        case 0x1a9ea8u: goto label_1a9ea8;
        case 0x1a9eacu: goto label_1a9eac;
        case 0x1a9eb0u: goto label_1a9eb0;
        case 0x1a9eb4u: goto label_1a9eb4;
        case 0x1a9eb8u: goto label_1a9eb8;
        case 0x1a9ebcu: goto label_1a9ebc;
        case 0x1a9ec0u: goto label_1a9ec0;
        case 0x1a9ec4u: goto label_1a9ec4;
        case 0x1a9ec8u: goto label_1a9ec8;
        case 0x1a9eccu: goto label_1a9ecc;
        case 0x1a9ed0u: goto label_1a9ed0;
        case 0x1a9ed4u: goto label_1a9ed4;
        case 0x1a9ed8u: goto label_1a9ed8;
        case 0x1a9edcu: goto label_1a9edc;
        case 0x1a9ee0u: goto label_1a9ee0;
        case 0x1a9ee4u: goto label_1a9ee4;
        case 0x1a9ee8u: goto label_1a9ee8;
        case 0x1a9eecu: goto label_1a9eec;
        case 0x1a9ef0u: goto label_1a9ef0;
        case 0x1a9ef4u: goto label_1a9ef4;
        case 0x1a9ef8u: goto label_1a9ef8;
        case 0x1a9efcu: goto label_1a9efc;
        case 0x1a9f00u: goto label_1a9f00;
        case 0x1a9f04u: goto label_1a9f04;
        case 0x1a9f08u: goto label_1a9f08;
        case 0x1a9f0cu: goto label_1a9f0c;
        case 0x1a9f10u: goto label_1a9f10;
        case 0x1a9f14u: goto label_1a9f14;
        case 0x1a9f18u: goto label_1a9f18;
        case 0x1a9f1cu: goto label_1a9f1c;
        case 0x1a9f20u: goto label_1a9f20;
        case 0x1a9f24u: goto label_1a9f24;
        case 0x1a9f28u: goto label_1a9f28;
        case 0x1a9f2cu: goto label_1a9f2c;
        case 0x1a9f30u: goto label_1a9f30;
        case 0x1a9f34u: goto label_1a9f34;
        case 0x1a9f38u: goto label_1a9f38;
        case 0x1a9f3cu: goto label_1a9f3c;
        case 0x1a9f40u: goto label_1a9f40;
        case 0x1a9f44u: goto label_1a9f44;
        case 0x1a9f48u: goto label_1a9f48;
        case 0x1a9f4cu: goto label_1a9f4c;
        case 0x1a9f50u: goto label_1a9f50;
        case 0x1a9f54u: goto label_1a9f54;
        case 0x1a9f58u: goto label_1a9f58;
        case 0x1a9f5cu: goto label_1a9f5c;
        case 0x1a9f60u: goto label_1a9f60;
        case 0x1a9f64u: goto label_1a9f64;
        case 0x1a9f68u: goto label_1a9f68;
        case 0x1a9f6cu: goto label_1a9f6c;
        case 0x1a9f70u: goto label_1a9f70;
        case 0x1a9f74u: goto label_1a9f74;
        case 0x1a9f78u: goto label_1a9f78;
        case 0x1a9f7cu: goto label_1a9f7c;
        case 0x1a9f80u: goto label_1a9f80;
        case 0x1a9f84u: goto label_1a9f84;
        case 0x1a9f88u: goto label_1a9f88;
        case 0x1a9f8cu: goto label_1a9f8c;
        case 0x1a9f90u: goto label_1a9f90;
        case 0x1a9f94u: goto label_1a9f94;
        case 0x1a9f98u: goto label_1a9f98;
        case 0x1a9f9cu: goto label_1a9f9c;
        case 0x1a9fa0u: goto label_1a9fa0;
        case 0x1a9fa4u: goto label_1a9fa4;
        case 0x1a9fa8u: goto label_1a9fa8;
        case 0x1a9facu: goto label_1a9fac;
        case 0x1a9fb0u: goto label_1a9fb0;
        case 0x1a9fb4u: goto label_1a9fb4;
        case 0x1a9fb8u: goto label_1a9fb8;
        case 0x1a9fbcu: goto label_1a9fbc;
        case 0x1a9fc0u: goto label_1a9fc0;
        case 0x1a9fc4u: goto label_1a9fc4;
        case 0x1a9fc8u: goto label_1a9fc8;
        case 0x1a9fccu: goto label_1a9fcc;
        case 0x1a9fd0u: goto label_1a9fd0;
        case 0x1a9fd4u: goto label_1a9fd4;
        case 0x1a9fd8u: goto label_1a9fd8;
        case 0x1a9fdcu: goto label_1a9fdc;
        case 0x1a9fe0u: goto label_1a9fe0;
        case 0x1a9fe4u: goto label_1a9fe4;
        case 0x1a9fe8u: goto label_1a9fe8;
        case 0x1a9fecu: goto label_1a9fec;
        case 0x1a9ff0u: goto label_1a9ff0;
        case 0x1a9ff4u: goto label_1a9ff4;
        case 0x1a9ff8u: goto label_1a9ff8;
        case 0x1a9ffcu: goto label_1a9ffc;
        case 0x1aa000u: goto label_1aa000;
        case 0x1aa004u: goto label_1aa004;
        case 0x1aa008u: goto label_1aa008;
        case 0x1aa00cu: goto label_1aa00c;
        case 0x1aa010u: goto label_1aa010;
        case 0x1aa014u: goto label_1aa014;
        case 0x1aa018u: goto label_1aa018;
        case 0x1aa01cu: goto label_1aa01c;
        case 0x1aa020u: goto label_1aa020;
        case 0x1aa024u: goto label_1aa024;
        case 0x1aa028u: goto label_1aa028;
        case 0x1aa02cu: goto label_1aa02c;
        case 0x1aa030u: goto label_1aa030;
        case 0x1aa034u: goto label_1aa034;
        case 0x1aa038u: goto label_1aa038;
        case 0x1aa03cu: goto label_1aa03c;
        case 0x1aa040u: goto label_1aa040;
        case 0x1aa044u: goto label_1aa044;
        case 0x1aa048u: goto label_1aa048;
        case 0x1aa04cu: goto label_1aa04c;
        case 0x1aa050u: goto label_1aa050;
        case 0x1aa054u: goto label_1aa054;
        case 0x1aa058u: goto label_1aa058;
        case 0x1aa05cu: goto label_1aa05c;
        case 0x1aa060u: goto label_1aa060;
        case 0x1aa064u: goto label_1aa064;
        case 0x1aa068u: goto label_1aa068;
        case 0x1aa06cu: goto label_1aa06c;
        case 0x1aa070u: goto label_1aa070;
        case 0x1aa074u: goto label_1aa074;
        case 0x1aa078u: goto label_1aa078;
        case 0x1aa07cu: goto label_1aa07c;
        case 0x1aa080u: goto label_1aa080;
        case 0x1aa084u: goto label_1aa084;
        case 0x1aa088u: goto label_1aa088;
        case 0x1aa08cu: goto label_1aa08c;
        case 0x1aa090u: goto label_1aa090;
        case 0x1aa094u: goto label_1aa094;
        case 0x1aa098u: goto label_1aa098;
        case 0x1aa09cu: goto label_1aa09c;
        case 0x1aa0a0u: goto label_1aa0a0;
        case 0x1aa0a4u: goto label_1aa0a4;
        case 0x1aa0a8u: goto label_1aa0a8;
        case 0x1aa0acu: goto label_1aa0ac;
        case 0x1aa0b0u: goto label_1aa0b0;
        case 0x1aa0b4u: goto label_1aa0b4;
        case 0x1aa0b8u: goto label_1aa0b8;
        case 0x1aa0bcu: goto label_1aa0bc;
        case 0x1aa0c0u: goto label_1aa0c0;
        case 0x1aa0c4u: goto label_1aa0c4;
        case 0x1aa0c8u: goto label_1aa0c8;
        case 0x1aa0ccu: goto label_1aa0cc;
        case 0x1aa0d0u: goto label_1aa0d0;
        case 0x1aa0d4u: goto label_1aa0d4;
        case 0x1aa0d8u: goto label_1aa0d8;
        case 0x1aa0dcu: goto label_1aa0dc;
        case 0x1aa0e0u: goto label_1aa0e0;
        case 0x1aa0e4u: goto label_1aa0e4;
        case 0x1aa0e8u: goto label_1aa0e8;
        case 0x1aa0ecu: goto label_1aa0ec;
        case 0x1aa0f0u: goto label_1aa0f0;
        case 0x1aa0f4u: goto label_1aa0f4;
        case 0x1aa0f8u: goto label_1aa0f8;
        case 0x1aa0fcu: goto label_1aa0fc;
        case 0x1aa100u: goto label_1aa100;
        case 0x1aa104u: goto label_1aa104;
        default: break;
    }

    ctx->pc = 0x1a9e90u;

label_1a9e90:
    // 0x1a9e90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a9e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1a9e94:
    // 0x1a9e94: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1a9e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1a9e98:
    // 0x1a9e98: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1a9e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1a9e9c:
    // 0x1a9e9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a9e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ea0:
    // 0x1a9ea0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1a9ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1a9ea4:
    // 0x1a9ea4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a9ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1a9ea8:
    // 0x1a9ea8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1a9ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_1a9eac:
    // 0x1a9eac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a9eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a9eb0:
    // 0x1a9eb0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1a9eb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1a9eb4:
    // 0x1a9eb4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1a9eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1a9eb8:
    // 0x1a9eb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a9ebc:
    if (ctx->pc == 0x1A9EBCu) {
        ctx->pc = 0x1A9EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9EB8u;
        // 0x1a9ebc: 0x3c030063  lui         $v1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9EC0u;
        goto label_1a9ec0;
    }
    ctx->pc = 0x1A9EB8u;
    {
        const bool branch_taken_0x1a9eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9EB8u;
        // 0x1a9ebc: 0x3c030063  lui         $v1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9eb8) {
            ctx->pc = 0x1A9EC8u;
            goto label_1a9ec8;
        }
    }
    ctx->pc = 0x1A9EC0u;
label_1a9ec0:
    // 0x1a9ec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9ec4:
    // 0x1a9ec4: 0xac62083c  sw          $v0, 0x83C($v1)
    ctx->pc = 0x1a9ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2108), GPR_U32(ctx, 2));
label_1a9ec8:
    // 0x1a9ec8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a9ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a9ecc:
    // 0x1a9ecc: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1a9eccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1a9ed0:
    // 0x1a9ed0: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1a9ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1a9ed4:
    // 0x1a9ed4: 0x40f809  jalr        $v0
label_1a9ed8:
    if (ctx->pc == 0x1A9ED8u) {
        ctx->pc = 0x1A9ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9ED4u;
        // 0x1a9ed8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9EDCu;
        goto label_1a9edc;
    }
    ctx->pc = 0x1A9ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9EDCu);
        ctx->pc = 0x1A9ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9ED4u;
        // 0x1a9ed8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9ED4u, 0x1A9EDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9EDCu;
label_1a9edc:
    // 0x1a9edc: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
label_1a9ee0:
    if (ctx->pc == 0x1A9EE0u) {
        ctx->pc = 0x1A9EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9EDCu;
        // 0x1a9ee0: 0x26340048  addiu       $s4, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9EE4u;
        goto label_1a9ee4;
    }
    ctx->pc = 0x1A9EDCu;
    {
        const bool branch_taken_0x1a9edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9EDCu;
        // 0x1a9ee0: 0x26340048  addiu       $s4, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9edc) {
            ctx->pc = 0x1AA0E4u;
            goto label_1aa0e4;
        }
    }
    ctx->pc = 0x1A9EE4u;
label_1a9ee4:
    // 0x1a9ee4: 0xc6220178  lwc1        $f2, 0x178($s1)
    ctx->pc = 0x1a9ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a9ee8:
    // 0x1a9ee8: 0xc6200174  lwc1        $f0, 0x174($s1)
    ctx->pc = 0x1a9ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a9eec:
    // 0x1a9eec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a9ef0:
    // 0x1a9ef0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a9ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a9ef4:
    // 0x1a9ef4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1a9ef4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a9ef8:
    // 0x1a9ef8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a9ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a9efc:
    // 0x1a9efc: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1a9efcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1a9f00:
    // 0x1a9f00: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1a9f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1a9f04:
    // 0x1a9f04: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x1a9f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1a9f08:
    // 0x1a9f08: 0x8e320160  lw          $s2, 0x160($s1)
    ctx->pc = 0x1a9f08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_1a9f0c:
    // 0x1a9f0c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1a9f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a9f10:
    // 0x1a9f10: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1a9f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1a9f14:
    // 0x1a9f14: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1a9f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a9f18:
    // 0x1a9f18: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1a9f18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1a9f1c:
    // 0x1a9f1c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1a9f1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a9f20:
    // 0x1a9f20: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_1a9f24:
    if (ctx->pc == 0x1A9F24u) {
        ctx->pc = 0x1A9F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F20u;
        // 0x1a9f24: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9F28u;
        goto label_1a9f28;
    }
    ctx->pc = 0x1A9F20u;
    {
        const bool branch_taken_0x1a9f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F20u;
        // 0x1a9f24: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f20) {
            ctx->pc = 0x1AA044u;
            goto label_1aa044;
        }
    }
    ctx->pc = 0x1A9F28u;
label_1a9f28:
    // 0x1a9f28: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a9f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a9f2c:
    // 0x1a9f2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a9f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a9f30:
    // 0x1a9f30: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x1a9f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1a9f34:
    // 0x1a9f34: 0x0  nop
    ctx->pc = 0x1a9f34u;
    // NOP
label_1a9f38:
    // 0x1a9f38: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x1a9f38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1a9f3c:
    // 0x1a9f3c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a9f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a9f40:
    // 0x1a9f40: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a9f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a9f44:
    // 0x1a9f44: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1a9f44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a9f48:
    // 0x1a9f48: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1a9f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a9f4c:
    // 0x1a9f4c: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_1a9f50:
    if (ctx->pc == 0x1A9F50u) {
        ctx->pc = 0x1A9F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F4Cu;
        // 0x1a9f50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9F54u;
        goto label_1a9f54;
    }
    ctx->pc = 0x1A9F4Cu;
    {
        const bool branch_taken_0x1a9f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F4Cu;
        // 0x1a9f50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f4c) {
            ctx->pc = 0x1A9FA4u;
            goto label_1a9fa4;
        }
    }
    ctx->pc = 0x1A9F54u;
label_1a9f54:
    // 0x1a9f54: 0xc06a582  jal         func_1A9608
label_1a9f58:
    if (ctx->pc == 0x1A9F58u) {
        ctx->pc = 0x1A9F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F54u;
        // 0x1a9f58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9F5Cu;
        goto label_1a9f5c;
    }
    ctx->pc = 0x1A9F54u;
    SET_GPR_U32(ctx, 31, 0x1A9F5Cu);
    ctx->pc = 0x1A9F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F54u;
    // 0x1a9f58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9608u, 0x1A9F54u, 0x1A9F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9F5Cu;
label_1a9f5c:
    // 0x1a9f5c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a9f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1a9f60:
    // 0x1a9f60: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
label_1a9f64:
    if (ctx->pc == 0x1A9F64u) {
        ctx->pc = 0x1A9F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F60u;
        // 0x1a9f64: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9F68u;
        goto label_1a9f68;
    }
    ctx->pc = 0x1A9F60u;
    {
        const bool branch_taken_0x1a9f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9f60) {
            ctx->pc = 0x1A9F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9F60u;
            // 0x1a9f64: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA048u;
            goto label_1aa048;
        }
    }
    ctx->pc = 0x1A9F68u;
label_1a9f68:
    // 0x1a9f68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9f6c:
    // 0x1a9f6c: 0xc06a658  jal         func_1A9960
label_1a9f70:
    if (ctx->pc == 0x1A9F70u) {
        ctx->pc = 0x1A9F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F6Cu;
        // 0x1a9f70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9F74u;
        goto label_1a9f74;
    }
    ctx->pc = 0x1A9F6Cu;
    SET_GPR_U32(ctx, 31, 0x1A9F74u);
    ctx->pc = 0x1A9F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F6Cu;
    // 0x1a9f70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9960u, 0x1A9F6Cu, 0x1A9F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9F74u;
label_1a9f74:
    // 0x1a9f74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9f78:
    // 0x1a9f78: 0xc06a722  jal         func_1A9C88
label_1a9f7c:
    if (ctx->pc == 0x1A9F7Cu) {
        ctx->pc = 0x1A9F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F78u;
        // 0x1a9f7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9F80u;
        goto label_1a9f80;
    }
    ctx->pc = 0x1A9F78u;
    SET_GPR_U32(ctx, 31, 0x1A9F80u);
    ctx->pc = 0x1A9F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F78u;
    // 0x1a9f7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9C88u, 0x1A9F78u, 0x1A9F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9F80u;
label_1a9f80:
    // 0x1a9f80: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x1a9f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a9f84:
    // 0x1a9f84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9f88:
    // 0x1a9f88: 0xc06a69e  jal         func_1A9A78
label_1a9f8c:
    if (ctx->pc == 0x1A9F8Cu) {
        ctx->pc = 0x1A9F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F88u;
        // 0x1a9f8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9F90u;
        goto label_1a9f90;
    }
    ctx->pc = 0x1A9F88u;
    SET_GPR_U32(ctx, 31, 0x1A9F90u);
    ctx->pc = 0x1A9F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F88u;
    // 0x1a9f8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9A78u, 0x1A9F88u, 0x1A9F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9F90u;
label_1a9f90:
    // 0x1a9f90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9f94:
    // 0x1a9f94: 0xc06a75e  jal         func_1A9D78
label_1a9f98:
    if (ctx->pc == 0x1A9F98u) {
        ctx->pc = 0x1A9F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F94u;
        // 0x1a9f98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9F9Cu;
        goto label_1a9f9c;
    }
    ctx->pc = 0x1A9F94u;
    SET_GPR_U32(ctx, 31, 0x1A9F9Cu);
    ctx->pc = 0x1A9F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F94u;
    // 0x1a9f98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9D78u, 0x1A9F94u, 0x1A9F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9F9Cu;
label_1a9f9c:
    // 0x1a9f9c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a9fa0:
    if (ctx->pc == 0x1A9FA0u) {
        ctx->pc = 0x1A9FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F9Cu;
        // 0x1a9fa0: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9FA4u;
        goto label_1a9fa4;
    }
    ctx->pc = 0x1A9F9Cu;
    {
        const bool branch_taken_0x1a9f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F9Cu;
        // 0x1a9fa0: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f9c) {
            ctx->pc = 0x1A9FC0u;
            goto label_1a9fc0;
        }
    }
    ctx->pc = 0x1A9FA4u;
label_1a9fa4:
    // 0x1a9fa4: 0xc06a722  jal         func_1A9C88
label_1a9fa8:
    if (ctx->pc == 0x1A9FA8u) {
        ctx->pc = 0x1A9FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FA4u;
        // 0x1a9fa8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9FACu;
        goto label_1a9fac;
    }
    ctx->pc = 0x1A9FA4u;
    SET_GPR_U32(ctx, 31, 0x1A9FACu);
    ctx->pc = 0x1A9FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9FA4u;
    // 0x1a9fa8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9C88u, 0x1A9FA4u, 0x1A9FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9FACu;
label_1a9fac:
    // 0x1a9fac: 0xc62c0180  lwc1        $f12, 0x180($s1)
    ctx->pc = 0x1a9facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a9fb0:
    // 0x1a9fb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9fb4:
    // 0x1a9fb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a9fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a9fb8:
    // 0x1a9fb8: 0xc06a6dc  jal         func_1A9B70
label_1a9fbc:
    if (ctx->pc == 0x1A9FBCu) {
        ctx->pc = 0x1A9FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FB8u;
        // 0x1a9fbc: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9FC0u;
        goto label_1a9fc0;
    }
    ctx->pc = 0x1A9FB8u;
    SET_GPR_U32(ctx, 31, 0x1A9FC0u);
    ctx->pc = 0x1A9FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9FB8u;
    // 0x1a9fbc: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9B70u, 0x1A9FB8u, 0x1A9FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9FC0u;
label_1a9fc0:
    // 0x1a9fc0: 0x1653000b  bne         $s2, $s3, . + 4 + (0xB << 2)
label_1a9fc4:
    if (ctx->pc == 0x1A9FC4u) {
        ctx->pc = 0x1A9FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FC0u;
        // 0x1a9fc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9FC8u;
        goto label_1a9fc8;
    }
    ctx->pc = 0x1A9FC0u;
    {
        const bool branch_taken_0x1a9fc0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1A9FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FC0u;
        // 0x1a9fc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9fc0) {
            ctx->pc = 0x1A9FF0u;
            goto label_1a9ff0;
        }
    }
    ctx->pc = 0x1A9FC8u;
label_1a9fc8:
    // 0x1a9fc8: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1a9fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a9fcc:
    // 0x1a9fcc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a9fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a9fd0:
    // 0x1a9fd0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1a9fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a9fd4:
    // 0x1a9fd4: 0x84450018  lh          $a1, 0x18($v0)
    ctx->pc = 0x1a9fd4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1a9fd8:
    // 0x1a9fd8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1a9fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1a9fdc:
    // 0x1a9fdc: 0x60f809  jalr        $v1
label_1a9fe0:
    if (ctx->pc == 0x1A9FE0u) {
        ctx->pc = 0x1A9FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FDCu;
        // 0x1a9fe0: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9FE4u;
        goto label_1a9fe4;
    }
    ctx->pc = 0x1A9FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A9FE4u);
        ctx->pc = 0x1A9FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FDCu;
        // 0x1a9fe0: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9FDCu, 0x1A9FE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9FE4u;
label_1a9fe4:
    // 0x1a9fe4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1a9fe4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a9fe8:
    // 0x1a9fe8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1a9fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1a9fec:
    // 0x1a9fec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ff0:
    // 0x1a9ff0: 0xc06a712  jal         func_1A9C48
label_1a9ff4:
    if (ctx->pc == 0x1A9FF4u) {
        ctx->pc = 0x1A9FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FF0u;
        // 0x1a9ff4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9FF8u;
        goto label_1a9ff8;
    }
    ctx->pc = 0x1A9FF0u;
    SET_GPR_U32(ctx, 31, 0x1A9FF8u);
    ctx->pc = 0x1A9FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9FF0u;
    // 0x1a9ff4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9C48u, 0x1A9FF0u, 0x1A9FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9FF8u;
label_1a9ff8:
    // 0x1a9ff8: 0x16530002  bne         $s2, $s3, . + 4 + (0x2 << 2)
label_1a9ffc:
    if (ctx->pc == 0x1A9FFCu) {
        ctx->pc = 0x1A9FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FF8u;
        // 0x1a9ffc: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA000u;
        goto label_1aa000;
    }
    ctx->pc = 0x1A9FF8u;
    {
        const bool branch_taken_0x1a9ff8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1A9FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FF8u;
        // 0x1a9ffc: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ff8) {
            ctx->pc = 0x1AA004u;
            goto label_1aa004;
        }
    }
    ctx->pc = 0x1AA000u;
label_1aa000:
    // 0x1aa000: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1aa000u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1aa004:
    // 0x1aa004: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1aa004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aa008:
    // 0x1aa008: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aa008u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1aa00c:
    // 0x1aa00c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1aa00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1aa010:
    // 0x1aa010: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1aa010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa014:
    // 0x1aa014: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1aa014u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1aa018:
    // 0x1aa018: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1aa018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aa01c:
    // 0x1aa01c: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x1aa01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1aa020:
    // 0x1aa020: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aa020u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1aa024:
    // 0x1aa024: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1aa024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1aa028:
    // 0x1aa028: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1aa028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1aa02c:
    // 0x1aa02c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1aa02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1aa030:
    // 0x1aa030: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1aa030u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aa034:
    // 0x1aa034: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1aa034u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1aa038:
    // 0x1aa038: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1aa038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1aa03c:
    // 0x1aa03c: 0x5440ffbe  bnel        $v0, $zero, . + 4 + (-0x42 << 2)
label_1aa040:
    if (ctx->pc == 0x1AA040u) {
        ctx->pc = 0x1AA040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA03Cu;
        // 0x1aa040: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA044u;
        goto label_1aa044;
    }
    ctx->pc = 0x1AA03Cu;
    {
        const bool branch_taken_0x1aa03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa03c) {
            ctx->pc = 0x1AA040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA03Cu;
            // 0x1aa040: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9f38;
        }
    }
    ctx->pc = 0x1AA044u;
label_1aa044:
    // 0x1aa044: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1aa044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1aa048:
    // 0x1aa048: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1aa048u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa04c:
    // 0x1aa04c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1aa04cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa050:
    // 0x1aa050: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1aa050u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa054:
    // 0x1aa054: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1aa054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aa058:
    // 0x1aa058: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1aa058u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1aa05c:
    // 0x1aa05c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1aa05cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1aa060:
    // 0x1aa060: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1aa060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1aa064:
    // 0x1aa064: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1aa064u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1aa068:
    // 0x1aa068: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1aa068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1aa06c:
    // 0x1aa06c: 0x40f809  jalr        $v0
label_1aa070:
    if (ctx->pc == 0x1AA070u) {
        ctx->pc = 0x1AA070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA06Cu;
        // 0x1aa070: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA074u;
        goto label_1aa074;
    }
    ctx->pc = 0x1AA06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AA074u);
        ctx->pc = 0x1AA070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA06Cu;
        // 0x1aa070: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA06Cu, 0x1AA074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA074u;
label_1aa074:
    // 0x1aa074: 0x282980b  movn        $s3, $s4, $v0
    ctx->pc = 0x1aa074u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 20));
label_1aa078:
    // 0x1aa078: 0x2e420046  sltiu       $v0, $s2, 0x46
    ctx->pc = 0x1aa078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)70) ? 1 : 0);
label_1aa07c:
    // 0x1aa07c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_1aa080:
    if (ctx->pc == 0x1AA080u) {
        ctx->pc = 0x1AA080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA07Cu;
        // 0x1aa080: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA084u;
        goto label_1aa084;
    }
    ctx->pc = 0x1AA07Cu;
    {
        const bool branch_taken_0x1aa07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa07c) {
            ctx->pc = 0x1AA080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA07Cu;
            // 0x1aa080: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa058;
        }
    }
    ctx->pc = 0x1AA084u;
label_1aa084:
    // 0x1aa084: 0x16600018  bnez        $s3, . + 4 + (0x18 << 2)
label_1aa088:
    if (ctx->pc == 0x1AA088u) {
        ctx->pc = 0x1AA088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA084u;
        // 0x1aa088: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA08Cu;
        goto label_1aa08c;
    }
    ctx->pc = 0x1AA084u;
    {
        const bool branch_taken_0x1aa084 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA084u;
        // 0x1aa088: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa084) {
            ctx->pc = 0x1AA0E8u;
            goto label_1aa0e8;
        }
    }
    ctx->pc = 0x1AA08Cu;
label_1aa08c:
    // 0x1aa08c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1aa08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1aa090:
    // 0x1aa090: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1aa090u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1aa094:
    // 0x1aa094: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1aa094u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1aa098:
    // 0x1aa098: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1aa098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1aa09c:
    // 0x1aa09c: 0x60f809  jalr        $v1
label_1aa0a0:
    if (ctx->pc == 0x1AA0A0u) {
        ctx->pc = 0x1AA0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA09Cu;
        // 0x1aa0a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA0A4u;
        goto label_1aa0a4;
    }
    ctx->pc = 0x1AA09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AA0A4u);
        ctx->pc = 0x1AA0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA09Cu;
        // 0x1aa0a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA09Cu, 0x1AA0A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA0A4u;
label_1aa0a4:
    // 0x1aa0a4: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x1aa0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_1aa0a8:
    // 0x1aa0a8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1aa0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1aa0ac:
    // 0x1aa0ac: 0x24a54158  addiu       $a1, $a1, 0x4158
    ctx->pc = 0x1aa0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16728));
label_1aa0b0:
    // 0x1aa0b0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1aa0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1aa0b4:
    // 0x1aa0b4: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1aa0b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1aa0b8:
    // 0x1aa0b8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1aa0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1aa0bc:
    // 0x1aa0bc: 0x40f809  jalr        $v0
label_1aa0c0:
    if (ctx->pc == 0x1AA0C0u) {
        ctx->pc = 0x1AA0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0BCu;
        // 0x1aa0c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA0C4u;
        goto label_1aa0c4;
    }
    ctx->pc = 0x1AA0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AA0C4u);
        ctx->pc = 0x1AA0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0BCu;
        // 0x1aa0c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA0BCu, 0x1AA0C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA0C4u;
label_1aa0c4:
    // 0x1aa0c4: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x1aa0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_1aa0c8:
    // 0x1aa0c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa0cc:
    // 0x1aa0cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aa0ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa0d0:
    // 0x1aa0d0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1aa0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1aa0d4:
    // 0x1aa0d4: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1aa0d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_1aa0d8:
    // 0x1aa0d8: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x1aa0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_1aa0dc:
    // 0x1aa0dc: 0x60f809  jalr        $v1
label_1aa0e0:
    if (ctx->pc == 0x1AA0E0u) {
        ctx->pc = 0x1AA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0DCu;
        // 0x1aa0e0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA0E4u;
        goto label_1aa0e4;
    }
    ctx->pc = 0x1AA0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AA0E4u);
        ctx->pc = 0x1AA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0DCu;
        // 0x1aa0e0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA0DCu, 0x1AA0E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA0E4u;
label_1aa0e4:
    // 0x1aa0e4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1aa0e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1aa0e8:
    // 0x1aa0e8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1aa0e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1aa0ec:
    // 0x1aa0ec: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1aa0ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1aa0f0:
    // 0x1aa0f0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1aa0f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1aa0f4:
    // 0x1aa0f4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1aa0f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1aa0f8:
    // 0x1aa0f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aa0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1aa0fc:
    // 0x1aa0fc: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1aa0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1aa100:
    // 0x1aa100: 0x3e00008  jr          $ra
label_1aa104:
    if (ctx->pc == 0x1AA104u) {
        ctx->pc = 0x1AA104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA100u;
        // 0x1aa104: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA108u;
        goto label_fallthrough_0x1aa100;
    }
    ctx->pc = 0x1AA100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA100u;
        // 0x1aa104: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1aa100:
    ctx->pc = 0x1AA108u;
}
