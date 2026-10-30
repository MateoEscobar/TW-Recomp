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

// Function: sub_003200C8
// Address: 0x3200c8 - 0x320360
void sub_003200C8_0x3200c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003200C8_0x3200c8");
#endif

    switch (ctx->pc) {
        case 0x3200c8u: goto label_3200c8;
        case 0x3200ccu: goto label_3200cc;
        case 0x3200d0u: goto label_3200d0;
        case 0x3200d4u: goto label_3200d4;
        case 0x3200d8u: goto label_3200d8;
        case 0x3200dcu: goto label_3200dc;
        case 0x3200e0u: goto label_3200e0;
        case 0x3200e4u: goto label_3200e4;
        case 0x3200e8u: goto label_3200e8;
        case 0x3200ecu: goto label_3200ec;
        case 0x3200f0u: goto label_3200f0;
        case 0x3200f4u: goto label_3200f4;
        case 0x3200f8u: goto label_3200f8;
        case 0x3200fcu: goto label_3200fc;
        case 0x320100u: goto label_320100;
        case 0x320104u: goto label_320104;
        case 0x320108u: goto label_320108;
        case 0x32010cu: goto label_32010c;
        case 0x320110u: goto label_320110;
        case 0x320114u: goto label_320114;
        case 0x320118u: goto label_320118;
        case 0x32011cu: goto label_32011c;
        case 0x320120u: goto label_320120;
        case 0x320124u: goto label_320124;
        case 0x320128u: goto label_320128;
        case 0x32012cu: goto label_32012c;
        case 0x320130u: goto label_320130;
        case 0x320134u: goto label_320134;
        case 0x320138u: goto label_320138;
        case 0x32013cu: goto label_32013c;
        case 0x320140u: goto label_320140;
        case 0x320144u: goto label_320144;
        case 0x320148u: goto label_320148;
        case 0x32014cu: goto label_32014c;
        case 0x320150u: goto label_320150;
        case 0x320154u: goto label_320154;
        case 0x320158u: goto label_320158;
        case 0x32015cu: goto label_32015c;
        case 0x320160u: goto label_320160;
        case 0x320164u: goto label_320164;
        case 0x320168u: goto label_320168;
        case 0x32016cu: goto label_32016c;
        case 0x320170u: goto label_320170;
        case 0x320174u: goto label_320174;
        case 0x320178u: goto label_320178;
        case 0x32017cu: goto label_32017c;
        case 0x320180u: goto label_320180;
        case 0x320184u: goto label_320184;
        case 0x320188u: goto label_320188;
        case 0x32018cu: goto label_32018c;
        case 0x320190u: goto label_320190;
        case 0x320194u: goto label_320194;
        case 0x320198u: goto label_320198;
        case 0x32019cu: goto label_32019c;
        case 0x3201a0u: goto label_3201a0;
        case 0x3201a4u: goto label_3201a4;
        case 0x3201a8u: goto label_3201a8;
        case 0x3201acu: goto label_3201ac;
        case 0x3201b0u: goto label_3201b0;
        case 0x3201b4u: goto label_3201b4;
        case 0x3201b8u: goto label_3201b8;
        case 0x3201bcu: goto label_3201bc;
        case 0x3201c0u: goto label_3201c0;
        case 0x3201c4u: goto label_3201c4;
        case 0x3201c8u: goto label_3201c8;
        case 0x3201ccu: goto label_3201cc;
        case 0x3201d0u: goto label_3201d0;
        case 0x3201d4u: goto label_3201d4;
        case 0x3201d8u: goto label_3201d8;
        case 0x3201dcu: goto label_3201dc;
        case 0x3201e0u: goto label_3201e0;
        case 0x3201e4u: goto label_3201e4;
        case 0x3201e8u: goto label_3201e8;
        case 0x3201ecu: goto label_3201ec;
        case 0x3201f0u: goto label_3201f0;
        case 0x3201f4u: goto label_3201f4;
        case 0x3201f8u: goto label_3201f8;
        case 0x3201fcu: goto label_3201fc;
        case 0x320200u: goto label_320200;
        case 0x320204u: goto label_320204;
        case 0x320208u: goto label_320208;
        case 0x32020cu: goto label_32020c;
        case 0x320210u: goto label_320210;
        case 0x320214u: goto label_320214;
        case 0x320218u: goto label_320218;
        case 0x32021cu: goto label_32021c;
        case 0x320220u: goto label_320220;
        case 0x320224u: goto label_320224;
        case 0x320228u: goto label_320228;
        case 0x32022cu: goto label_32022c;
        case 0x320230u: goto label_320230;
        case 0x320234u: goto label_320234;
        case 0x320238u: goto label_320238;
        case 0x32023cu: goto label_32023c;
        case 0x320240u: goto label_320240;
        case 0x320244u: goto label_320244;
        case 0x320248u: goto label_320248;
        case 0x32024cu: goto label_32024c;
        case 0x320250u: goto label_320250;
        case 0x320254u: goto label_320254;
        case 0x320258u: goto label_320258;
        case 0x32025cu: goto label_32025c;
        case 0x320260u: goto label_320260;
        case 0x320264u: goto label_320264;
        case 0x320268u: goto label_320268;
        case 0x32026cu: goto label_32026c;
        case 0x320270u: goto label_320270;
        case 0x320274u: goto label_320274;
        case 0x320278u: goto label_320278;
        case 0x32027cu: goto label_32027c;
        case 0x320280u: goto label_320280;
        case 0x320284u: goto label_320284;
        case 0x320288u: goto label_320288;
        case 0x32028cu: goto label_32028c;
        case 0x320290u: goto label_320290;
        case 0x320294u: goto label_320294;
        case 0x320298u: goto label_320298;
        case 0x32029cu: goto label_32029c;
        case 0x3202a0u: goto label_3202a0;
        case 0x3202a4u: goto label_3202a4;
        case 0x3202a8u: goto label_3202a8;
        case 0x3202acu: goto label_3202ac;
        case 0x3202b0u: goto label_3202b0;
        case 0x3202b4u: goto label_3202b4;
        case 0x3202b8u: goto label_3202b8;
        case 0x3202bcu: goto label_3202bc;
        case 0x3202c0u: goto label_3202c0;
        case 0x3202c4u: goto label_3202c4;
        case 0x3202c8u: goto label_3202c8;
        case 0x3202ccu: goto label_3202cc;
        case 0x3202d0u: goto label_3202d0;
        case 0x3202d4u: goto label_3202d4;
        case 0x3202d8u: goto label_3202d8;
        case 0x3202dcu: goto label_3202dc;
        case 0x3202e0u: goto label_3202e0;
        case 0x3202e4u: goto label_3202e4;
        case 0x3202e8u: goto label_3202e8;
        case 0x3202ecu: goto label_3202ec;
        case 0x3202f0u: goto label_3202f0;
        case 0x3202f4u: goto label_3202f4;
        case 0x3202f8u: goto label_3202f8;
        case 0x3202fcu: goto label_3202fc;
        case 0x320300u: goto label_320300;
        case 0x320304u: goto label_320304;
        case 0x320308u: goto label_320308;
        case 0x32030cu: goto label_32030c;
        case 0x320310u: goto label_320310;
        case 0x320314u: goto label_320314;
        case 0x320318u: goto label_320318;
        case 0x32031cu: goto label_32031c;
        case 0x320320u: goto label_320320;
        case 0x320324u: goto label_320324;
        case 0x320328u: goto label_320328;
        case 0x32032cu: goto label_32032c;
        case 0x320330u: goto label_320330;
        case 0x320334u: goto label_320334;
        case 0x320338u: goto label_320338;
        case 0x32033cu: goto label_32033c;
        case 0x320340u: goto label_320340;
        case 0x320344u: goto label_320344;
        case 0x320348u: goto label_320348;
        case 0x32034cu: goto label_32034c;
        case 0x320350u: goto label_320350;
        case 0x320354u: goto label_320354;
        case 0x320358u: goto label_320358;
        case 0x32035cu: goto label_32035c;
        default: break;
    }

    ctx->pc = 0x3200c8u;

label_3200c8:
    // 0x3200c8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3200c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3200cc:
    // 0x3200cc: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x3200ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_3200d0:
    // 0x3200d0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x3200d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_3200d4:
    // 0x3200d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3200d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3200d8:
    // 0x3200d8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x3200d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_3200dc:
    // 0x3200dc: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x3200dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_3200e0:
    // 0x3200e0: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x3200e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_3200e4:
    // 0x3200e4: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x3200e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_3200e8:
    // 0x3200e8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3200e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3200ec:
    // 0x3200ec: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x3200ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_3200f0:
    // 0x3200f0: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x3200f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_3200f4:
    // 0x3200f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3200f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3200f8:
    // 0x3200f8: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x3200f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_3200fc:
    // 0x3200fc: 0xc05959e  jal         func_165678
label_320100:
    if (ctx->pc == 0x320100u) {
        ctx->pc = 0x320100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3200FCu;
        // 0x320100: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320104u;
        goto label_320104;
    }
    ctx->pc = 0x3200FCu;
    SET_GPR_U32(ctx, 31, 0x320104u);
    ctx->pc = 0x320100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3200FCu;
    // 0x320100: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x3200FCu, 0x320104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320104u;
label_320104:
    // 0x320104: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x320104u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320108:
    // 0x320108: 0x12800087  beqz        $s4, . + 4 + (0x87 << 2)
label_32010c:
    if (ctx->pc == 0x32010Cu) {
        ctx->pc = 0x32010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320108u;
        // 0x32010c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320110u;
        goto label_320110;
    }
    ctx->pc = 0x320108u;
    {
        const bool branch_taken_0x320108 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x32010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320108u;
        // 0x32010c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320108) {
            ctx->pc = 0x320328u;
            goto label_320328;
        }
    }
    ctx->pc = 0x320110u;
label_320110:
    // 0x320110: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x320110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_320114:
    // 0x320114: 0xc059856  jal         func_166158
label_320118:
    if (ctx->pc == 0x320118u) {
        ctx->pc = 0x320118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320114u;
        // 0x320118: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32011Cu;
        goto label_32011c;
    }
    ctx->pc = 0x320114u;
    SET_GPR_U32(ctx, 31, 0x32011Cu);
    ctx->pc = 0x320118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320114u;
    // 0x320118: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x320114u, 0x32011Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32011Cu;
label_32011c:
    // 0x32011c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x32011cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_320120:
    // 0x320120: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
label_320124:
    if (ctx->pc == 0x320124u) {
        ctx->pc = 0x320124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320120u;
        // 0x320124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320128u;
        goto label_320128;
    }
    ctx->pc = 0x320120u;
    {
        const bool branch_taken_0x320120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320120u;
        // 0x320124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320120) {
            ctx->pc = 0x320328u;
            goto label_320328;
        }
    }
    ctx->pc = 0x320128u;
label_320128:
    // 0x320128: 0x86840092  lh          $a0, 0x92($s4)
    ctx->pc = 0x320128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_32012c:
    // 0x32012c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x32012cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_320130:
    // 0x320130: 0x24554b00  addiu       $s5, $v0, 0x4B00
    ctx->pc = 0x320130u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_320134:
    // 0x320134: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x320134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_320138:
    // 0x320138: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x320138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_32013c:
    // 0x32013c: 0x24a833c8  addiu       $t0, $a1, 0x33C8
    ctx->pc = 0x32013cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 13256));
label_320140:
    // 0x320140: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x320140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_320144:
    // 0x320144: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x320144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_320148:
    // 0x320148: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x320148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_32014c:
    // 0x32014c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x32014cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_320150:
    // 0x320150: 0x2463f2b0  addiu       $v1, $v1, -0xD50
    ctx->pc = 0x320150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963888));
label_320154:
    // 0x320154: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x320154u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_320158:
    // 0x320158: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x320158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_32015c:
    // 0x32015c: 0x95b021  addu        $s6, $a0, $s5
    ctx->pc = 0x32015cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_320160:
    // 0x320160: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x320160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_320164:
    // 0x320164: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x320164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_320168:
    // 0x320168: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x320168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32016c:
    // 0x32016c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32016cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320170:
    // 0x320170: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x320170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_320174:
    // 0x320174: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x320174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320178:
    // 0x320178: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x320178u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32017c:
    // 0x32017c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32017cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320180:
    // 0x320180: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x320180u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320184:
    // 0x320184: 0x6bab0017  ldl         $t3, 0x17($sp)
    ctx->pc = 0x320184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_320188:
    // 0x320188: 0x6fab0010  ldr         $t3, 0x10($sp)
    ctx->pc = 0x320188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_32018c:
    // 0x32018c: 0xb3ab000b  sdl         $t3, 0xB($sp)
    ctx->pc = 0x32018cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_320190:
    // 0x320190: 0xb7ab0004  sdr         $t3, 0x4($sp)
    ctx->pc = 0x320190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_320194:
    // 0x320194: 0xc0a757c  jal         func_29D5F0
label_320198:
    if (ctx->pc == 0x320198u) {
        ctx->pc = 0x320198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320194u;
        // 0x320198: 0x3c100054  lui         $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32019Cu;
        goto label_32019c;
    }
    ctx->pc = 0x320194u;
    SET_GPR_U32(ctx, 31, 0x32019Cu);
    ctx->pc = 0x320198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320194u;
    // 0x320198: 0x3c100054  lui         $s0, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)84 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D5F0u, 0x320194u, 0x32019Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32019Cu;
label_32019c:
    // 0x32019c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x32019cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3201a0:
    // 0x3201a0: 0x1260005d  beqz        $s3, . + 4 + (0x5D << 2)
label_3201a4:
    if (ctx->pc == 0x3201A4u) {
        ctx->pc = 0x3201A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201A0u;
        // 0x3201a4: 0x2611f2f0  addiu       $s1, $s0, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3201A8u;
        goto label_3201a8;
    }
    ctx->pc = 0x3201A0u;
    {
        const bool branch_taken_0x3201a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3201A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201A0u;
        // 0x3201a4: 0x2611f2f0  addiu       $s1, $s0, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3201a0) {
            ctx->pc = 0x320318u;
            goto label_320318;
        }
    }
    ctx->pc = 0x3201A8u;
label_3201a8:
    // 0x3201a8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3201a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3201ac:
    // 0x3201ac: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3201acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3201b0:
    // 0x3201b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3201b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3201b4:
    // 0x3201b4: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x3201b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_3201b8:
    // 0x3201b8: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x3201b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_3201bc:
    // 0x3201bc: 0x40f809  jalr        $v0
label_3201c0:
    if (ctx->pc == 0x3201C0u) {
        ctx->pc = 0x3201C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201BCu;
        // 0x3201c0: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3201C4u;
        goto label_3201c4;
    }
    ctx->pc = 0x3201BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3201C4u);
        ctx->pc = 0x3201C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201BCu;
        // 0x3201c0: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3201BCu, 0x3201C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3201C4u;
label_3201c4:
    // 0x3201c4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3201c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3201c8:
    // 0x3201c8: 0xc0594ba  jal         func_1652E8
label_3201cc:
    if (ctx->pc == 0x3201CCu) {
        ctx->pc = 0x3201CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201C8u;
        // 0x3201cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3201D0u;
        goto label_3201d0;
    }
    ctx->pc = 0x3201C8u;
    SET_GPR_U32(ctx, 31, 0x3201D0u);
    ctx->pc = 0x3201CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3201C8u;
    // 0x3201cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1652E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1652E8u, 0x3201C8u, 0x3201D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3201D0u;
label_3201d0:
    // 0x3201d0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3201d4:
    if (ctx->pc == 0x3201D4u) {
        ctx->pc = 0x3201D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201D0u;
        // 0x3201d4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3201D8u;
        goto label_3201d8;
    }
    ctx->pc = 0x3201D0u;
    {
        const bool branch_taken_0x3201d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3201d0) {
            ctx->pc = 0x3201D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3201D0u;
            // 0x3201d4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3201E4u;
            goto label_3201e4;
        }
    }
    ctx->pc = 0x3201D8u;
label_3201d8:
    // 0x3201d8: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x3201d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_3201dc:
    // 0x3201dc: 0x10000052  b           . + 4 + (0x52 << 2)
label_3201e0:
    if (ctx->pc == 0x3201E0u) {
        ctx->pc = 0x3201E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201DCu;
        // 0x3201e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3201E4u;
        goto label_3201e4;
    }
    ctx->pc = 0x3201DCu;
    {
        const bool branch_taken_0x3201dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3201E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201DCu;
        // 0x3201e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3201dc) {
            ctx->pc = 0x320328u;
            goto label_320328;
        }
    }
    ctx->pc = 0x3201E4u;
label_3201e4:
    // 0x3201e4: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x3201e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3201e8:
    // 0x3201e8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x3201e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_3201ec:
    // 0x3201ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3201ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3201f0:
    // 0x3201f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3201f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3201f4:
    // 0x3201f4: 0x24550048  addiu       $s5, $v0, 0x48
    ctx->pc = 0x3201f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_3201f8:
    // 0x3201f8: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x3201f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3201fc:
    // 0x3201fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3201fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_320200:
    // 0x320200: 0xc137826  jal         func_4DE098
label_320204:
    if (ctx->pc == 0x320204u) {
        ctx->pc = 0x320204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320200u;
        // 0x320204: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320208u;
        goto label_320208;
    }
    ctx->pc = 0x320200u;
    SET_GPR_U32(ctx, 31, 0x320208u);
    ctx->pc = 0x320204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320200u;
    // 0x320204: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x320200u, 0x320208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320208u;
label_320208:
    // 0x320208: 0xc0e409a  jal         func_390268
label_32020c:
    if (ctx->pc == 0x32020Cu) {
        ctx->pc = 0x32020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320208u;
        // 0x32020c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320210u;
        goto label_320210;
    }
    ctx->pc = 0x320208u;
    SET_GPR_U32(ctx, 31, 0x320210u);
    ctx->pc = 0x32020Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320208u;
    // 0x32020c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x320208u, 0x320210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320210u;
label_320210:
    // 0x320210: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x320210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320214:
    // 0x320214: 0x5220003d  beql        $s1, $zero, . + 4 + (0x3D << 2)
label_320218:
    if (ctx->pc == 0x320218u) {
        ctx->pc = 0x320218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320214u;
        // 0x320218: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32021Cu;
        goto label_32021c;
    }
    ctx->pc = 0x320214u;
    {
        const bool branch_taken_0x320214 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x320214) {
            ctx->pc = 0x320218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320214u;
            // 0x320218: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32030Cu;
            goto label_32030c;
        }
    }
    ctx->pc = 0x32021Cu;
label_32021c:
    // 0x32021c: 0x5234003b  beql        $s1, $s4, . + 4 + (0x3B << 2)
label_320220:
    if (ctx->pc == 0x320220u) {
        ctx->pc = 0x320220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32021Cu;
        // 0x320220: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320224u;
        goto label_320224;
    }
    ctx->pc = 0x32021Cu;
    {
        const bool branch_taken_0x32021c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x32021c) {
            ctx->pc = 0x320220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32021Cu;
            // 0x320220: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32030Cu;
            goto label_32030c;
        }
    }
    ctx->pc = 0x320224u;
label_320224:
    // 0x320224: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x320224u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_320228:
    // 0x320228: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x320228u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_32022c:
    // 0x32022c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x32022cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_320230:
    // 0x320230: 0x50570036  beql        $v0, $s7, . + 4 + (0x36 << 2)
label_320234:
    if (ctx->pc == 0x320234u) {
        ctx->pc = 0x320234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320230u;
        // 0x320234: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320238u;
        goto label_320238;
    }
    ctx->pc = 0x320230u;
    {
        const bool branch_taken_0x320230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x320230) {
            ctx->pc = 0x320234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320230u;
            // 0x320234: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32030Cu;
            goto label_32030c;
        }
    }
    ctx->pc = 0x320238u;
label_320238:
    // 0x320238: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x320238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_32023c:
    // 0x32023c: 0x52220033  beql        $s1, $v0, . + 4 + (0x33 << 2)
label_320240:
    if (ctx->pc == 0x320240u) {
        ctx->pc = 0x320240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32023Cu;
        // 0x320240: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320244u;
        goto label_320244;
    }
    ctx->pc = 0x32023Cu;
    {
        const bool branch_taken_0x32023c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x32023c) {
            ctx->pc = 0x320240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32023Cu;
            // 0x320240: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32030Cu;
            goto label_32030c;
        }
    }
    ctx->pc = 0x320244u;
label_320244:
    // 0x320244: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x320244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_320248:
    // 0x320248: 0x1222002f  beq         $s1, $v0, . + 4 + (0x2F << 2)
label_32024c:
    if (ctx->pc == 0x32024Cu) {
        ctx->pc = 0x32024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320248u;
        // 0x32024c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320250u;
        goto label_320250;
    }
    ctx->pc = 0x320248u;
    {
        const bool branch_taken_0x320248 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x32024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320248u;
        // 0x32024c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320248) {
            ctx->pc = 0x320308u;
            goto label_320308;
        }
    }
    ctx->pc = 0x320250u;
label_320250:
    // 0x320250: 0xc0c7ec6  jal         func_31FB18
label_320254:
    if (ctx->pc == 0x320254u) {
        ctx->pc = 0x320254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320250u;
        // 0x320254: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320258u;
        goto label_320258;
    }
    ctx->pc = 0x320250u;
    SET_GPR_U32(ctx, 31, 0x320258u);
    ctx->pc = 0x320254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320250u;
    // 0x320254: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB18u, 0x320250u, 0x320258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320258u;
label_320258:
    // 0x320258: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_32025c:
    if (ctx->pc == 0x32025Cu) {
        ctx->pc = 0x32025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320258u;
        // 0x32025c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320260u;
        goto label_320260;
    }
    ctx->pc = 0x320258u;
    {
        const bool branch_taken_0x320258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320258u;
        // 0x32025c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320258) {
            ctx->pc = 0x320308u;
            goto label_320308;
        }
    }
    ctx->pc = 0x320260u;
label_320260:
    // 0x320260: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x320260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_320264:
    // 0x320264: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x320264u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_320268:
    // 0x320268: 0xc0cdb38  jal         func_336CE0
label_32026c:
    if (ctx->pc == 0x32026Cu) {
        ctx->pc = 0x32026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320268u;
        // 0x32026c: 0x9e2021  addu        $a0, $a0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320270u;
        goto label_320270;
    }
    ctx->pc = 0x320268u;
    SET_GPR_U32(ctx, 31, 0x320270u);
    ctx->pc = 0x32026Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320268u;
    // 0x32026c: 0x9e2021  addu        $a0, $a0, $fp (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x320268u, 0x320270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320270u;
label_320270:
    // 0x320270: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x320270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_320274:
    // 0x320274: 0x0  nop
    ctx->pc = 0x320274u;
    // NOP
label_320278:
    // 0x320278: 0x45010024  bc1t        . + 4 + (0x24 << 2)
label_32027c:
    if (ctx->pc == 0x32027Cu) {
        ctx->pc = 0x32027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320278u;
        // 0x32027c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320280u;
        goto label_320280;
    }
    ctx->pc = 0x320278u;
    {
        const bool branch_taken_0x320278 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x32027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320278u;
        // 0x32027c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320278) {
            ctx->pc = 0x32030Cu;
            goto label_32030c;
        }
    }
    ctx->pc = 0x320280u;
label_320280:
    // 0x320280: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x320280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_320284:
    // 0x320284: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x320284u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_320288:
    // 0x320288: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x320288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_32028c:
    // 0x32028c: 0x40f809  jalr        $v0
label_320290:
    if (ctx->pc == 0x320290u) {
        ctx->pc = 0x320290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32028Cu;
        // 0x320290: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320294u;
        goto label_320294;
    }
    ctx->pc = 0x32028Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320294u);
        ctx->pc = 0x320290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32028Cu;
        // 0x320290: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32028Cu, 0x320294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320294u;
label_320294:
    // 0x320294: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x320294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_320298:
    // 0x320298: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x320298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32029c:
    // 0x32029c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x32029cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3202a0:
    // 0x3202a0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3202a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3202a4:
    // 0x3202a4: 0x40f809  jalr        $v0
label_3202a8:
    if (ctx->pc == 0x3202A8u) {
        ctx->pc = 0x3202A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3202A4u;
        // 0x3202a8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3202ACu;
        goto label_3202ac;
    }
    ctx->pc = 0x3202A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3202ACu);
        ctx->pc = 0x3202A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3202A4u;
        // 0x3202a8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3202A4u, 0x3202ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3202ACu;
label_3202ac:
    // 0x3202ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3202acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3202b0:
    // 0x3202b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3202b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3202b4:
    // 0x3202b4: 0xc0b71c2  jal         func_2DC708
label_3202b8:
    if (ctx->pc == 0x3202B8u) {
        ctx->pc = 0x3202B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3202B4u;
        // 0x3202b8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3202BCu;
        goto label_3202bc;
    }
    ctx->pc = 0x3202B4u;
    SET_GPR_U32(ctx, 31, 0x3202BCu);
    ctx->pc = 0x3202B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3202B4u;
    // 0x3202b8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC708u, 0x3202B4u, 0x3202BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3202BCu;
label_3202bc:
    // 0x3202bc: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x3202bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_3202c0:
    // 0x3202c0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3202c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_3202c4:
    // 0x3202c4: 0xc0cd4ee  jal         func_3353B8
label_3202c8:
    if (ctx->pc == 0x3202C8u) {
        ctx->pc = 0x3202C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3202C4u;
        // 0x3202c8: 0x24c4b8a0  addiu       $a0, $a2, -0x4760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3202CCu;
        goto label_3202cc;
    }
    ctx->pc = 0x3202C4u;
    SET_GPR_U32(ctx, 31, 0x3202CCu);
    ctx->pc = 0x3202C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3202C4u;
    // 0x3202c8: 0x24c4b8a0  addiu       $a0, $a2, -0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3202C4u, 0x3202CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3202CCu;
label_3202cc:
    // 0x3202cc: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x3202ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
label_3202d0:
    // 0x3202d0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3202d4:
    if (ctx->pc == 0x3202D4u) {
        ctx->pc = 0x3202D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3202D0u;
        // 0x3202d4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3202D8u;
        goto label_3202d8;
    }
    ctx->pc = 0x3202D0u;
    {
        const bool branch_taken_0x3202d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3202D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3202D0u;
        // 0x3202d4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3202d0) {
            ctx->pc = 0x320318u;
            goto label_320318;
        }
    }
    ctx->pc = 0x3202D8u;
label_3202d8:
    // 0x3202d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3202d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3202dc:
    // 0x3202dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3202dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3202e0:
    // 0x3202e0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x3202e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_3202e4:
    // 0x3202e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3202e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3202e8:
    // 0x3202e8: 0x24050059  addiu       $a1, $zero, 0x59
    ctx->pc = 0x3202e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
label_3202ec:
    // 0x3202ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3202ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3202f0:
    // 0x3202f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3202f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3202f4:
    // 0x3202f4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3202f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3202f8:
    // 0x3202f8: 0xc088178  jal         func_2205E0
label_3202fc:
    if (ctx->pc == 0x3202FCu) {
        ctx->pc = 0x3202FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3202F8u;
        // 0x3202fc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320300u;
        goto label_320300;
    }
    ctx->pc = 0x3202F8u;
    SET_GPR_U32(ctx, 31, 0x320300u);
    ctx->pc = 0x3202FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3202F8u;
    // 0x3202fc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x3202F8u, 0x320300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320300u;
label_320300:
    // 0x320300: 0x10000006  b           . + 4 + (0x6 << 2)
label_320304:
    if (ctx->pc == 0x320304u) {
        ctx->pc = 0x320304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320300u;
        // 0x320304: 0x3c070054  lui         $a3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320308u;
        goto label_320308;
    }
    ctx->pc = 0x320300u;
    {
        const bool branch_taken_0x320300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320300u;
        // 0x320304: 0x3c070054  lui         $a3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320300) {
            ctx->pc = 0x32031Cu;
            goto label_32031c;
        }
    }
    ctx->pc = 0x320308u;
label_320308:
    // 0x320308: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x320308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_32030c:
    // 0x32030c: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x32030cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_320310:
    // 0x320310: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
label_320314:
    if (ctx->pc == 0x320314u) {
        ctx->pc = 0x320314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320310u;
        // 0x320314: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320318u;
        goto label_320318;
    }
    ctx->pc = 0x320310u;
    {
        const bool branch_taken_0x320310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320310u;
        // 0x320314: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320310) {
            ctx->pc = 0x320200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320200;
        }
    }
    ctx->pc = 0x320318u;
label_320318:
    // 0x320318: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x320318u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_32031c:
    // 0x32031c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32031cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320320:
    // 0x320320: 0x24e3f2f0  addiu       $v1, $a3, -0xD10
    ctx->pc = 0x320320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963952));
label_320324:
    // 0x320324: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x320324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_320328:
    // 0x320328: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x320328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_32032c:
    // 0x32032c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x32032cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_320330:
    // 0x320330: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x320330u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_320334:
    // 0x320334: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x320334u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_320338:
    // 0x320338: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x320338u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_32033c:
    // 0x32033c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x32033cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_320340:
    // 0x320340: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x320340u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_320344:
    // 0x320344: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x320344u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_320348:
    // 0x320348: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x320348u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_32034c:
    // 0x32034c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32034cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_320350:
    // 0x320350: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x320350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_320354:
    // 0x320354: 0x3e00008  jr          $ra
label_320358:
    if (ctx->pc == 0x320358u) {
        ctx->pc = 0x320358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320354u;
        // 0x320358: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32035Cu;
        goto label_32035c;
    }
    ctx->pc = 0x320354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320354u;
        // 0x320358: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32035Cu;
label_32035c:
    // 0x32035c: 0x0  nop
    ctx->pc = 0x32035cu;
    // NOP
    ctx->pc = 0x320360u;
}
