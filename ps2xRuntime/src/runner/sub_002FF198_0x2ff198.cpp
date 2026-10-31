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

// Function: sub_002FF198
// Address: 0x2ff198 - 0x2ff2b0
void sub_002FF198_0x2ff198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF198_0x2ff198");
#endif

    switch (ctx->pc) {
        case 0x2ff198u: goto label_2ff198;
        case 0x2ff19cu: goto label_2ff19c;
        case 0x2ff1a0u: goto label_2ff1a0;
        case 0x2ff1a4u: goto label_2ff1a4;
        case 0x2ff1a8u: goto label_2ff1a8;
        case 0x2ff1acu: goto label_2ff1ac;
        case 0x2ff1b0u: goto label_2ff1b0;
        case 0x2ff1b4u: goto label_2ff1b4;
        case 0x2ff1b8u: goto label_2ff1b8;
        case 0x2ff1bcu: goto label_2ff1bc;
        case 0x2ff1c0u: goto label_2ff1c0;
        case 0x2ff1c4u: goto label_2ff1c4;
        case 0x2ff1c8u: goto label_2ff1c8;
        case 0x2ff1ccu: goto label_2ff1cc;
        case 0x2ff1d0u: goto label_2ff1d0;
        case 0x2ff1d4u: goto label_2ff1d4;
        case 0x2ff1d8u: goto label_2ff1d8;
        case 0x2ff1dcu: goto label_2ff1dc;
        case 0x2ff1e0u: goto label_2ff1e0;
        case 0x2ff1e4u: goto label_2ff1e4;
        case 0x2ff1e8u: goto label_2ff1e8;
        case 0x2ff1ecu: goto label_2ff1ec;
        case 0x2ff1f0u: goto label_2ff1f0;
        case 0x2ff1f4u: goto label_2ff1f4;
        case 0x2ff1f8u: goto label_2ff1f8;
        case 0x2ff1fcu: goto label_2ff1fc;
        case 0x2ff200u: goto label_2ff200;
        case 0x2ff204u: goto label_2ff204;
        case 0x2ff208u: goto label_2ff208;
        case 0x2ff20cu: goto label_2ff20c;
        case 0x2ff210u: goto label_2ff210;
        case 0x2ff214u: goto label_2ff214;
        case 0x2ff218u: goto label_2ff218;
        case 0x2ff21cu: goto label_2ff21c;
        case 0x2ff220u: goto label_2ff220;
        case 0x2ff224u: goto label_2ff224;
        case 0x2ff228u: goto label_2ff228;
        case 0x2ff22cu: goto label_2ff22c;
        case 0x2ff230u: goto label_2ff230;
        case 0x2ff234u: goto label_2ff234;
        case 0x2ff238u: goto label_2ff238;
        case 0x2ff23cu: goto label_2ff23c;
        case 0x2ff240u: goto label_2ff240;
        case 0x2ff244u: goto label_2ff244;
        case 0x2ff248u: goto label_2ff248;
        case 0x2ff24cu: goto label_2ff24c;
        case 0x2ff250u: goto label_2ff250;
        case 0x2ff254u: goto label_2ff254;
        case 0x2ff258u: goto label_2ff258;
        case 0x2ff25cu: goto label_2ff25c;
        case 0x2ff260u: goto label_2ff260;
        case 0x2ff264u: goto label_2ff264;
        case 0x2ff268u: goto label_2ff268;
        case 0x2ff26cu: goto label_2ff26c;
        case 0x2ff270u: goto label_2ff270;
        case 0x2ff274u: goto label_2ff274;
        case 0x2ff278u: goto label_2ff278;
        case 0x2ff27cu: goto label_2ff27c;
        case 0x2ff280u: goto label_2ff280;
        case 0x2ff284u: goto label_2ff284;
        case 0x2ff288u: goto label_2ff288;
        case 0x2ff28cu: goto label_2ff28c;
        case 0x2ff290u: goto label_2ff290;
        case 0x2ff294u: goto label_2ff294;
        case 0x2ff298u: goto label_2ff298;
        case 0x2ff29cu: goto label_2ff29c;
        case 0x2ff2a0u: goto label_2ff2a0;
        case 0x2ff2a4u: goto label_2ff2a4;
        case 0x2ff2a8u: goto label_2ff2a8;
        case 0x2ff2acu: goto label_2ff2ac;
        default: break;
    }

    ctx->pc = 0x2ff198u;

label_2ff198:
    // 0x2ff198: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ff198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2ff19c:
    // 0x2ff19c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ff19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2ff1a0:
    // 0x2ff1a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ff1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ff1a4:
    // 0x2ff1a4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ff1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2ff1a8:
    // 0x2ff1a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ff1a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ff1ac:
    // 0x2ff1ac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2ff1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2ff1b0:
    // 0x2ff1b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ff1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ff1b4:
    // 0x2ff1b4: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x2ff1b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
label_2ff1b8:
    // 0x2ff1b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2ff1bc:
    if (ctx->pc == 0x2FF1BCu) {
        ctx->pc = 0x2FF1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF1B8u;
        // 0x2ff1bc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF1C0u;
        goto label_2ff1c0;
    }
    ctx->pc = 0x2FF1B8u;
    {
        const bool branch_taken_0x2ff1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF1B8u;
        // 0x2ff1bc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff1b8) {
            ctx->pc = 0x2FF1D0u;
            goto label_2ff1d0;
        }
    }
    ctx->pc = 0x2FF1C0u;
label_2ff1c0:
    // 0x2ff1c0: 0xc089f98  jal         func_227E60
label_2ff1c4:
    if (ctx->pc == 0x2FF1C4u) {
        ctx->pc = 0x2FF1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF1C0u;
        // 0x2ff1c4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF1C8u;
        goto label_2ff1c8;
    }
    ctx->pc = 0x2FF1C0u;
    SET_GPR_U32(ctx, 31, 0x2FF1C8u);
    ctx->pc = 0x2FF1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF1C0u;
    // 0x2ff1c4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2FF1C0u, 0x2FF1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF1C8u;
label_2ff1c8:
    // 0x2ff1c8: 0x54500003  bnel        $v0, $s0, . + 4 + (0x3 << 2)
label_2ff1cc:
    if (ctx->pc == 0x2FF1CCu) {
        ctx->pc = 0x2FF1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF1C8u;
        // 0x2ff1cc: 0x8242002c  lb          $v0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF1D0u;
        goto label_2ff1d0;
    }
    ctx->pc = 0x2FF1C8u;
    {
        const bool branch_taken_0x2ff1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ff1c8) {
            ctx->pc = 0x2FF1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF1C8u;
            // 0x2ff1cc: 0x8242002c  lb          $v0, 0x2C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF1D8u;
            goto label_2ff1d8;
        }
    }
    ctx->pc = 0x2FF1D0u;
label_2ff1d0:
    // 0x2ff1d0: 0x10000030  b           . + 4 + (0x30 << 2)
label_2ff1d4:
    if (ctx->pc == 0x2FF1D4u) {
        ctx->pc = 0x2FF1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF1D0u;
        // 0x2ff1d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF1D8u;
        goto label_2ff1d8;
    }
    ctx->pc = 0x2FF1D0u;
    {
        const bool branch_taken_0x2ff1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF1D0u;
        // 0x2ff1d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff1d0) {
            ctx->pc = 0x2FF294u;
            goto label_2ff294;
        }
    }
    ctx->pc = 0x2FF1D8u;
label_2ff1d8:
    // 0x2ff1d8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_2ff1dc:
    if (ctx->pc == 0x2FF1DCu) {
        ctx->pc = 0x2FF1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF1D8u;
        // 0x2ff1dc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF1E0u;
        goto label_2ff1e0;
    }
    ctx->pc = 0x2FF1D8u;
    {
        const bool branch_taken_0x2ff1d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FF1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF1D8u;
        // 0x2ff1dc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff1d8) {
            ctx->pc = 0x2FF1F0u;
            goto label_2ff1f0;
        }
    }
    ctx->pc = 0x2FF1E0u;
label_2ff1e0:
    // 0x2ff1e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ff1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ff1e4:
    // 0x2ff1e4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2ff1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2ff1e8:
    // 0x2ff1e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ff1ec:
    if (ctx->pc == 0x2FF1ECu) {
        ctx->pc = 0x2FF1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF1E8u;
        // 0x2ff1ec: 0x8c510040  lw          $s1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF1F0u;
        goto label_2ff1f0;
    }
    ctx->pc = 0x2FF1E8u;
    {
        const bool branch_taken_0x2ff1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF1E8u;
        // 0x2ff1ec: 0x8c510040  lw          $s1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff1e8) {
            ctx->pc = 0x2FF1F4u;
            goto label_2ff1f4;
        }
    }
    ctx->pc = 0x2FF1F0u;
label_2ff1f0:
    // 0x2ff1f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ff1f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff1f4:
    // 0x2ff1f4: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
label_2ff1f8:
    if (ctx->pc == 0x2FF1F8u) {
        ctx->pc = 0x2FF1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF1F4u;
        // 0x2ff1f8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF1FCu;
        goto label_2ff1fc;
    }
    ctx->pc = 0x2FF1F4u;
    {
        const bool branch_taken_0x2ff1f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF1F4u;
        // 0x2ff1f8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff1f4) {
            ctx->pc = 0x2FF294u;
            goto label_2ff294;
        }
    }
    ctx->pc = 0x2FF1FCu;
label_2ff1fc:
    // 0x2ff1fc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2ff1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2ff200:
    // 0x2ff200: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ff200u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff204:
    // 0x2ff204: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2ff204u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2ff208:
    // 0x2ff208: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2ff208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2ff20c:
    // 0x2ff20c: 0x40f809  jalr        $v0
label_2ff210:
    if (ctx->pc == 0x2FF210u) {
        ctx->pc = 0x2FF210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF20Cu;
        // 0x2ff210: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF214u;
        goto label_2ff214;
    }
    ctx->pc = 0x2FF20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FF214u);
        ctx->pc = 0x2FF210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF20Cu;
        // 0x2ff210: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF20Cu, 0x2FF214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF214u;
label_2ff214:
    // 0x2ff214: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ff214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff218:
    // 0x2ff218: 0x3a02006b  xori        $v0, $s0, 0x6B
    ctx->pc = 0x2ff218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)107);
label_2ff21c:
    // 0x2ff21c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2ff220:
    if (ctx->pc == 0x2FF220u) {
        ctx->pc = 0x2FF220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF21Cu;
        // 0x2ff220: 0x3a020002  xori        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF224u;
        goto label_2ff224;
    }
    ctx->pc = 0x2FF21Cu;
    {
        const bool branch_taken_0x2ff21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF21Cu;
        // 0x2ff220: 0x3a020002  xori        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff21c) {
            ctx->pc = 0x2FF278u;
            goto label_2ff278;
        }
    }
    ctx->pc = 0x2FF224u;
label_2ff224:
    // 0x2ff224: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2ff228:
    if (ctx->pc == 0x2FF228u) {
        ctx->pc = 0x2FF228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF224u;
        // 0x2ff228: 0x3a02006d  xori        $v0, $s0, 0x6D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)109);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF22Cu;
        goto label_2ff22c;
    }
    ctx->pc = 0x2FF224u;
    {
        const bool branch_taken_0x2ff224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF224u;
        // 0x2ff228: 0x3a02006d  xori        $v0, $s0, 0x6D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)109);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff224) {
            ctx->pc = 0x2FF278u;
            goto label_2ff278;
        }
    }
    ctx->pc = 0x2FF22Cu;
label_2ff22c:
    // 0x2ff22c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2ff230:
    if (ctx->pc == 0x2FF230u) {
        ctx->pc = 0x2FF230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF22Cu;
        // 0x2ff230: 0x3a02006e  xori        $v0, $s0, 0x6E (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)110);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF234u;
        goto label_2ff234;
    }
    ctx->pc = 0x2FF22Cu;
    {
        const bool branch_taken_0x2ff22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF22Cu;
        // 0x2ff230: 0x3a02006e  xori        $v0, $s0, 0x6E (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)110);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff22c) {
            ctx->pc = 0x2FF278u;
            goto label_2ff278;
        }
    }
    ctx->pc = 0x2FF234u;
label_2ff234:
    // 0x2ff234: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2ff238:
    if (ctx->pc == 0x2FF238u) {
        ctx->pc = 0x2FF238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF234u;
        // 0x2ff238: 0x3a02005d  xori        $v0, $s0, 0x5D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)93);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF23Cu;
        goto label_2ff23c;
    }
    ctx->pc = 0x2FF234u;
    {
        const bool branch_taken_0x2ff234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF234u;
        // 0x2ff238: 0x3a02005d  xori        $v0, $s0, 0x5D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)93);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff234) {
            ctx->pc = 0x2FF278u;
            goto label_2ff278;
        }
    }
    ctx->pc = 0x2FF23Cu;
label_2ff23c:
    // 0x2ff23c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2ff240:
    if (ctx->pc == 0x2FF240u) {
        ctx->pc = 0x2FF240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF23Cu;
        // 0x2ff240: 0x3a020011  xori        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)17);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF244u;
        goto label_2ff244;
    }
    ctx->pc = 0x2FF23Cu;
    {
        const bool branch_taken_0x2ff23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF23Cu;
        // 0x2ff240: 0x3a020011  xori        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)17);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff23c) {
            ctx->pc = 0x2FF278u;
            goto label_2ff278;
        }
    }
    ctx->pc = 0x2FF244u;
label_2ff244:
    // 0x2ff244: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2ff248:
    if (ctx->pc == 0x2FF248u) {
        ctx->pc = 0x2FF248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF244u;
        // 0x2ff248: 0x3a020050  xori        $v0, $s0, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)80);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF24Cu;
        goto label_2ff24c;
    }
    ctx->pc = 0x2FF244u;
    {
        const bool branch_taken_0x2ff244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF244u;
        // 0x2ff248: 0x3a020050  xori        $v0, $s0, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)80);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff244) {
            ctx->pc = 0x2FF278u;
            goto label_2ff278;
        }
    }
    ctx->pc = 0x2FF24Cu;
label_2ff24c:
    // 0x2ff24c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2ff250:
    if (ctx->pc == 0x2FF250u) {
        ctx->pc = 0x2FF250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF24Cu;
        // 0x2ff250: 0x3a02008c  xori        $v0, $s0, 0x8C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)140);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF254u;
        goto label_2ff254;
    }
    ctx->pc = 0x2FF24Cu;
    {
        const bool branch_taken_0x2ff24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF24Cu;
        // 0x2ff250: 0x3a02008c  xori        $v0, $s0, 0x8C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)140);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff24c) {
            ctx->pc = 0x2FF278u;
            goto label_2ff278;
        }
    }
    ctx->pc = 0x2FF254u;
label_2ff254:
    // 0x2ff254: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2ff258:
    if (ctx->pc == 0x2FF258u) {
        ctx->pc = 0x2FF258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF254u;
        // 0x2ff258: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF25Cu;
        goto label_2ff25c;
    }
    ctx->pc = 0x2FF254u;
    {
        const bool branch_taken_0x2ff254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF254u;
        // 0x2ff258: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff254) {
            ctx->pc = 0x2FF27Cu;
            goto label_2ff27c;
        }
    }
    ctx->pc = 0x2FF25Cu;
label_2ff25c:
    // 0x2ff25c: 0xc0a40d2  jal         func_290348
label_2ff260:
    if (ctx->pc == 0x2FF260u) {
        ctx->pc = 0x2FF260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF25Cu;
        // 0x2ff260: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF264u;
        goto label_2ff264;
    }
    ctx->pc = 0x2FF25Cu;
    SET_GPR_U32(ctx, 31, 0x2FF264u);
    ctx->pc = 0x2FF260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF25Cu;
    // 0x2ff260: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x2FF25Cu, 0x2FF264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF264u;
label_2ff264:
    // 0x2ff264: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2ff268:
    if (ctx->pc == 0x2FF268u) {
        ctx->pc = 0x2FF268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF264u;
        // 0x2ff268: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF26Cu;
        goto label_2ff26c;
    }
    ctx->pc = 0x2FF264u;
    {
        const bool branch_taken_0x2ff264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF264u;
        // 0x2ff268: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff264) {
            ctx->pc = 0x2FF27Cu;
            goto label_2ff27c;
        }
    }
    ctx->pc = 0x2FF26Cu;
label_2ff26c:
    // 0x2ff26c: 0x8e42020c  lw          $v0, 0x20C($s2)
    ctx->pc = 0x2ff26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
label_2ff270:
    // 0x2ff270: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x2ff270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2ff274:
    // 0x2ff274: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x2ff274u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2ff278:
    // 0x2ff278: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x2ff278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_2ff27c:
    // 0x2ff27c: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_2ff280:
    if (ctx->pc == 0x2FF280u) {
        ctx->pc = 0x2FF280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF27Cu;
        // 0x2ff280: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF284u;
        goto label_2ff284;
    }
    ctx->pc = 0x2FF27Cu;
    {
        const bool branch_taken_0x2ff27c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FF280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF27Cu;
        // 0x2ff280: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff27c) {
            ctx->pc = 0x2FF294u;
            goto label_2ff294;
        }
    }
    ctx->pc = 0x2FF284u;
label_2ff284:
    // 0x2ff284: 0xc0ab086  jal         func_2AC218
label_2ff288:
    if (ctx->pc == 0x2FF288u) {
        ctx->pc = 0x2FF288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF284u;
        // 0x2ff288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF28Cu;
        goto label_2ff28c;
    }
    ctx->pc = 0x2FF284u;
    SET_GPR_U32(ctx, 31, 0x2FF28Cu);
    ctx->pc = 0x2FF288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF284u;
    // 0x2ff288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC218u, 0x2FF284u, 0x2FF28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF28Cu;
label_2ff28c:
    // 0x2ff28c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ff28cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff290:
    // 0x2ff290: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2ff290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ff294:
    // 0x2ff294: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ff294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ff298:
    // 0x2ff298: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ff298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ff29c:
    // 0x2ff29c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ff29cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ff2a0:
    // 0x2ff2a0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2ff2a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ff2a4:
    // 0x2ff2a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ff2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff2a8:
    // 0x2ff2a8: 0x3e00008  jr          $ra
label_2ff2ac:
    if (ctx->pc == 0x2FF2ACu) {
        ctx->pc = 0x2FF2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF2A8u;
        // 0x2ff2ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF2B0u;
        goto label_fallthrough_0x2ff2a8;
    }
    ctx->pc = 0x2FF2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF2A8u;
        // 0x2ff2ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ff2a8:
    ctx->pc = 0x2FF2B0u;
}
