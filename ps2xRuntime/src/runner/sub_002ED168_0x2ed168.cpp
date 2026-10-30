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

// Function: sub_002ED168
// Address: 0x2ed168 - 0x2ed250
void sub_002ED168_0x2ed168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED168_0x2ed168");
#endif

    switch (ctx->pc) {
        case 0x2ed168u: goto label_2ed168;
        case 0x2ed16cu: goto label_2ed16c;
        case 0x2ed170u: goto label_2ed170;
        case 0x2ed174u: goto label_2ed174;
        case 0x2ed178u: goto label_2ed178;
        case 0x2ed17cu: goto label_2ed17c;
        case 0x2ed180u: goto label_2ed180;
        case 0x2ed184u: goto label_2ed184;
        case 0x2ed188u: goto label_2ed188;
        case 0x2ed18cu: goto label_2ed18c;
        case 0x2ed190u: goto label_2ed190;
        case 0x2ed194u: goto label_2ed194;
        case 0x2ed198u: goto label_2ed198;
        case 0x2ed19cu: goto label_2ed19c;
        case 0x2ed1a0u: goto label_2ed1a0;
        case 0x2ed1a4u: goto label_2ed1a4;
        case 0x2ed1a8u: goto label_2ed1a8;
        case 0x2ed1acu: goto label_2ed1ac;
        case 0x2ed1b0u: goto label_2ed1b0;
        case 0x2ed1b4u: goto label_2ed1b4;
        case 0x2ed1b8u: goto label_2ed1b8;
        case 0x2ed1bcu: goto label_2ed1bc;
        case 0x2ed1c0u: goto label_2ed1c0;
        case 0x2ed1c4u: goto label_2ed1c4;
        case 0x2ed1c8u: goto label_2ed1c8;
        case 0x2ed1ccu: goto label_2ed1cc;
        case 0x2ed1d0u: goto label_2ed1d0;
        case 0x2ed1d4u: goto label_2ed1d4;
        case 0x2ed1d8u: goto label_2ed1d8;
        case 0x2ed1dcu: goto label_2ed1dc;
        case 0x2ed1e0u: goto label_2ed1e0;
        case 0x2ed1e4u: goto label_2ed1e4;
        case 0x2ed1e8u: goto label_2ed1e8;
        case 0x2ed1ecu: goto label_2ed1ec;
        case 0x2ed1f0u: goto label_2ed1f0;
        case 0x2ed1f4u: goto label_2ed1f4;
        case 0x2ed1f8u: goto label_2ed1f8;
        case 0x2ed1fcu: goto label_2ed1fc;
        case 0x2ed200u: goto label_2ed200;
        case 0x2ed204u: goto label_2ed204;
        case 0x2ed208u: goto label_2ed208;
        case 0x2ed20cu: goto label_2ed20c;
        case 0x2ed210u: goto label_2ed210;
        case 0x2ed214u: goto label_2ed214;
        case 0x2ed218u: goto label_2ed218;
        case 0x2ed21cu: goto label_2ed21c;
        case 0x2ed220u: goto label_2ed220;
        case 0x2ed224u: goto label_2ed224;
        case 0x2ed228u: goto label_2ed228;
        case 0x2ed22cu: goto label_2ed22c;
        case 0x2ed230u: goto label_2ed230;
        case 0x2ed234u: goto label_2ed234;
        case 0x2ed238u: goto label_2ed238;
        case 0x2ed23cu: goto label_2ed23c;
        case 0x2ed240u: goto label_2ed240;
        case 0x2ed244u: goto label_2ed244;
        case 0x2ed248u: goto label_2ed248;
        case 0x2ed24cu: goto label_2ed24c;
        default: break;
    }

    ctx->pc = 0x2ed168u;

label_2ed168:
    // 0x2ed168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ed168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ed16c:
    // 0x2ed16c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2ed16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2ed170:
    // 0x2ed170: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2ed170u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2ed174:
    // 0x2ed174: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ed174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ed178:
    // 0x2ed178: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ed178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2ed17c:
    // 0x2ed17c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ed17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed180:
    // 0x2ed180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ed184:
    // 0x2ed184: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ed184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ed188:
    // 0x2ed188: 0xac60021c  sw          $zero, 0x21C($v1)
    ctx->pc = 0x2ed188u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 0));
label_2ed18c:
    // 0x2ed18c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2ed18cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ed190:
    // 0x2ed190: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ed190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ed194:
    // 0x2ed194: 0xa0400265  sb          $zero, 0x265($v0)
    ctx->pc = 0x2ed194u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 0));
label_2ed198:
    // 0x2ed198: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ed198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ed19c:
    // 0x2ed19c: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2ed19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
label_2ed1a0:
    // 0x2ed1a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ed1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ed1a4:
    // 0x2ed1a4: 0xa040011e  sb          $zero, 0x11E($v0)
    ctx->pc = 0x2ed1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 0));
label_2ed1a8:
    // 0x2ed1a8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2ed1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ed1ac:
    // 0x2ed1ac: 0xc0a22c6  jal         func_288B18
label_2ed1b0:
    if (ctx->pc == 0x2ED1B0u) {
        ctx->pc = 0x2ED1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED1ACu;
        // 0x2ed1b0: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED1B4u;
        goto label_2ed1b4;
    }
    ctx->pc = 0x2ED1ACu;
    SET_GPR_U32(ctx, 31, 0x2ED1B4u);
    ctx->pc = 0x2ED1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED1ACu;
    // 0x2ed1b0: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2ED1ACu, 0x2ED1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED1B4u;
label_2ed1b4:
    // 0x2ed1b4: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2ed1b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_2ed1b8:
    // 0x2ed1b8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2ed1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2ed1bc:
    // 0x2ed1bc: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2ed1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_2ed1c0:
    // 0x2ed1c0: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x2ed1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_2ed1c4:
    // 0x2ed1c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ed1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2ed1c8:
    // 0x2ed1c8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2ed1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2ed1cc:
    // 0x2ed1cc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2ed1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2ed1d0:
    // 0x2ed1d0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2ed1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2ed1d4:
    // 0x2ed1d4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2ed1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2ed1d8:
    // 0x2ed1d8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2ed1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2ed1dc:
    // 0x2ed1dc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2ed1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_2ed1e0:
    // 0x2ed1e0: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x2ed1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2ed1e4:
    // 0x2ed1e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ed1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2ed1e8:
    // 0x2ed1e8: 0x3c070004  lui         $a3, 0x4
    ctx->pc = 0x2ed1e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
label_2ed1ec:
    // 0x2ed1ec: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2ed1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2ed1f0:
    // 0x2ed1f0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2ed1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ed1f4:
    // 0x2ed1f4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2ed1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2ed1f8:
    // 0x2ed1f8: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2ed1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2ed1fc:
    // 0x2ed1fc: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2ed1fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2ed200:
    // 0x2ed200: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ed200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ed204:
    // 0x2ed204: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2ed204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_2ed208:
    // 0x2ed208: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2ed208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2ed20c:
    // 0x2ed20c: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x2ed20cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
label_2ed210:
    // 0x2ed210: 0x84c400e0  lh          $a0, 0xE0($a2)
    ctx->pc = 0x2ed210u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 224)));
label_2ed214:
    // 0x2ed214: 0x8cc300e4  lw          $v1, 0xE4($a2)
    ctx->pc = 0x2ed214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
label_2ed218:
    // 0x2ed218: 0x60f809  jalr        $v1
label_2ed21c:
    if (ctx->pc == 0x2ED21Cu) {
        ctx->pc = 0x2ED21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED218u;
        // 0x2ed21c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED220u;
        goto label_2ed220;
    }
    ctx->pc = 0x2ED218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2ED220u);
        ctx->pc = 0x2ED21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED218u;
        // 0x2ed21c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED218u, 0x2ED220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ED220u;
label_2ed220:
    // 0x2ed220: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x2ed220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_2ed224:
    // 0x2ed224: 0x38420077  xori        $v0, $v0, 0x77
    ctx->pc = 0x2ed224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)119);
label_2ed228:
    // 0x2ed228: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ed22c:
    if (ctx->pc == 0x2ED22Cu) {
        ctx->pc = 0x2ED22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED228u;
        // 0x2ed22c: 0x3c060056  lui         $a2, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED230u;
        goto label_2ed230;
    }
    ctx->pc = 0x2ED228u;
    {
        const bool branch_taken_0x2ed228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED228u;
        // 0x2ed22c: 0x3c060056  lui         $a2, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed228) {
            ctx->pc = 0x2ED240u;
            goto label_2ed240;
        }
    }
    ctx->pc = 0x2ED230u;
label_2ed230:
    // 0x2ed230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ed234:
    // 0x2ed234: 0x24c67a88  addiu       $a2, $a2, 0x7A88
    ctx->pc = 0x2ed234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31368));
label_2ed238:
    // 0x2ed238: 0xc0886a8  jal         func_221AA0
label_2ed23c:
    if (ctx->pc == 0x2ED23Cu) {
        ctx->pc = 0x2ED23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED238u;
        // 0x2ed23c: 0x24050225  addiu       $a1, $zero, 0x225 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED240u;
        goto label_2ed240;
    }
    ctx->pc = 0x2ED238u;
    SET_GPR_U32(ctx, 31, 0x2ED240u);
    ctx->pc = 0x2ED23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED238u;
    // 0x2ed23c: 0x24050225  addiu       $a1, $zero, 0x225 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2ED238u, 0x2ED240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED240u;
label_2ed240:
    // 0x2ed240: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ed240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ed244:
    // 0x2ed244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ed248:
    // 0x2ed248: 0x3e00008  jr          $ra
label_2ed24c:
    if (ctx->pc == 0x2ED24Cu) {
        ctx->pc = 0x2ED24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED248u;
        // 0x2ed24c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED250u;
        goto label_fallthrough_0x2ed248;
    }
    ctx->pc = 0x2ED248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED248u;
        // 0x2ed24c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ed248:
    ctx->pc = 0x2ED250u;
}
