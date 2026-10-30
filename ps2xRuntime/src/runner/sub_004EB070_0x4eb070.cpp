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

// Function: sub_004EB070
// Address: 0x4eb070 - 0x4eb210
void sub_004EB070_0x4eb070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EB070_0x4eb070");
#endif

    switch (ctx->pc) {
        case 0x4eb070u: goto label_4eb070;
        case 0x4eb074u: goto label_4eb074;
        case 0x4eb078u: goto label_4eb078;
        case 0x4eb07cu: goto label_4eb07c;
        case 0x4eb080u: goto label_4eb080;
        case 0x4eb084u: goto label_4eb084;
        case 0x4eb088u: goto label_4eb088;
        case 0x4eb08cu: goto label_4eb08c;
        case 0x4eb090u: goto label_4eb090;
        case 0x4eb094u: goto label_4eb094;
        case 0x4eb098u: goto label_4eb098;
        case 0x4eb09cu: goto label_4eb09c;
        case 0x4eb0a0u: goto label_4eb0a0;
        case 0x4eb0a4u: goto label_4eb0a4;
        case 0x4eb0a8u: goto label_4eb0a8;
        case 0x4eb0acu: goto label_4eb0ac;
        case 0x4eb0b0u: goto label_4eb0b0;
        case 0x4eb0b4u: goto label_4eb0b4;
        case 0x4eb0b8u: goto label_4eb0b8;
        case 0x4eb0bcu: goto label_4eb0bc;
        case 0x4eb0c0u: goto label_4eb0c0;
        case 0x4eb0c4u: goto label_4eb0c4;
        case 0x4eb0c8u: goto label_4eb0c8;
        case 0x4eb0ccu: goto label_4eb0cc;
        case 0x4eb0d0u: goto label_4eb0d0;
        case 0x4eb0d4u: goto label_4eb0d4;
        case 0x4eb0d8u: goto label_4eb0d8;
        case 0x4eb0dcu: goto label_4eb0dc;
        case 0x4eb0e0u: goto label_4eb0e0;
        case 0x4eb0e4u: goto label_4eb0e4;
        case 0x4eb0e8u: goto label_4eb0e8;
        case 0x4eb0ecu: goto label_4eb0ec;
        case 0x4eb0f0u: goto label_4eb0f0;
        case 0x4eb0f4u: goto label_4eb0f4;
        case 0x4eb0f8u: goto label_4eb0f8;
        case 0x4eb0fcu: goto label_4eb0fc;
        case 0x4eb100u: goto label_4eb100;
        case 0x4eb104u: goto label_4eb104;
        case 0x4eb108u: goto label_4eb108;
        case 0x4eb10cu: goto label_4eb10c;
        case 0x4eb110u: goto label_4eb110;
        case 0x4eb114u: goto label_4eb114;
        case 0x4eb118u: goto label_4eb118;
        case 0x4eb11cu: goto label_4eb11c;
        case 0x4eb120u: goto label_4eb120;
        case 0x4eb124u: goto label_4eb124;
        case 0x4eb128u: goto label_4eb128;
        case 0x4eb12cu: goto label_4eb12c;
        case 0x4eb130u: goto label_4eb130;
        case 0x4eb134u: goto label_4eb134;
        case 0x4eb138u: goto label_4eb138;
        case 0x4eb13cu: goto label_4eb13c;
        case 0x4eb140u: goto label_4eb140;
        case 0x4eb144u: goto label_4eb144;
        case 0x4eb148u: goto label_4eb148;
        case 0x4eb14cu: goto label_4eb14c;
        case 0x4eb150u: goto label_4eb150;
        case 0x4eb154u: goto label_4eb154;
        case 0x4eb158u: goto label_4eb158;
        case 0x4eb15cu: goto label_4eb15c;
        case 0x4eb160u: goto label_4eb160;
        case 0x4eb164u: goto label_4eb164;
        case 0x4eb168u: goto label_4eb168;
        case 0x4eb16cu: goto label_4eb16c;
        case 0x4eb170u: goto label_4eb170;
        case 0x4eb174u: goto label_4eb174;
        case 0x4eb178u: goto label_4eb178;
        case 0x4eb17cu: goto label_4eb17c;
        case 0x4eb180u: goto label_4eb180;
        case 0x4eb184u: goto label_4eb184;
        case 0x4eb188u: goto label_4eb188;
        case 0x4eb18cu: goto label_4eb18c;
        case 0x4eb190u: goto label_4eb190;
        case 0x4eb194u: goto label_4eb194;
        case 0x4eb198u: goto label_4eb198;
        case 0x4eb19cu: goto label_4eb19c;
        case 0x4eb1a0u: goto label_4eb1a0;
        case 0x4eb1a4u: goto label_4eb1a4;
        case 0x4eb1a8u: goto label_4eb1a8;
        case 0x4eb1acu: goto label_4eb1ac;
        case 0x4eb1b0u: goto label_4eb1b0;
        case 0x4eb1b4u: goto label_4eb1b4;
        case 0x4eb1b8u: goto label_4eb1b8;
        case 0x4eb1bcu: goto label_4eb1bc;
        case 0x4eb1c0u: goto label_4eb1c0;
        case 0x4eb1c4u: goto label_4eb1c4;
        case 0x4eb1c8u: goto label_4eb1c8;
        case 0x4eb1ccu: goto label_4eb1cc;
        case 0x4eb1d0u: goto label_4eb1d0;
        case 0x4eb1d4u: goto label_4eb1d4;
        case 0x4eb1d8u: goto label_4eb1d8;
        case 0x4eb1dcu: goto label_4eb1dc;
        case 0x4eb1e0u: goto label_4eb1e0;
        case 0x4eb1e4u: goto label_4eb1e4;
        case 0x4eb1e8u: goto label_4eb1e8;
        case 0x4eb1ecu: goto label_4eb1ec;
        case 0x4eb1f0u: goto label_4eb1f0;
        case 0x4eb1f4u: goto label_4eb1f4;
        case 0x4eb1f8u: goto label_4eb1f8;
        case 0x4eb1fcu: goto label_4eb1fc;
        case 0x4eb200u: goto label_4eb200;
        case 0x4eb204u: goto label_4eb204;
        case 0x4eb208u: goto label_4eb208;
        case 0x4eb20cu: goto label_4eb20c;
        default: break;
    }

    ctx->pc = 0x4eb070u;

label_4eb070:
    // 0x4eb070: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4eb070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4eb074:
    // 0x4eb074: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4eb074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4eb078:
    // 0x4eb078: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4eb078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4eb07c:
    // 0x4eb07c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4eb07cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4eb080:
    // 0x4eb080: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4eb080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4eb084:
    // 0x4eb084: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4eb084u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4eb088:
    // 0x4eb088: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4eb088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4eb08c:
    // 0x4eb08c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4eb08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4eb090:
    // 0x4eb090: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4eb090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4eb094:
    // 0x4eb094: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4eb094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4eb098:
    // 0x4eb098: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4eb098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4eb09c:
    // 0x4eb09c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4eb09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4eb0a0:
    // 0x4eb0a0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4eb0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4eb0a4:
    // 0x4eb0a4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4eb0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4eb0a8:
    // 0x4eb0a8: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_4eb0ac:
    if (ctx->pc == 0x4EB0ACu) {
        ctx->pc = 0x4EB0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB0A8u;
        // 0x4eb0ac: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EB0B0u;
        goto label_4eb0b0;
    }
    ctx->pc = 0x4EB0A8u;
    {
        const bool branch_taken_0x4eb0a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4EB0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB0A8u;
        // 0x4eb0ac: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb0a8) {
            ctx->pc = 0x4EB0F4u;
            goto label_4eb0f4;
        }
    }
    ctx->pc = 0x4EB0B0u;
label_4eb0b0:
    // 0x4eb0b0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4eb0b4:
    if (ctx->pc == 0x4EB0B4u) {
        ctx->pc = 0x4EB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB0B0u;
        // 0x4eb0b4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EB0B8u;
        goto label_4eb0b8;
    }
    ctx->pc = 0x4EB0B0u;
    {
        const bool branch_taken_0x4eb0b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eb0b0) {
            ctx->pc = 0x4EB0B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EB0B0u;
            // 0x4eb0b4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EB0C4u;
            goto label_4eb0c4;
        }
    }
    ctx->pc = 0x4EB0B8u;
label_4eb0b8:
    // 0x4eb0b8: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x4eb0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4eb0bc:
    // 0x4eb0bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4eb0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4eb0c0:
    // 0x4eb0c0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4eb0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4eb0c4:
    // 0x4eb0c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4eb0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4eb0c8:
    // 0x4eb0c8: 0x2486fffc  addiu       $a2, $a0, -0x4
    ctx->pc = 0x4eb0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_4eb0cc:
    // 0x4eb0cc: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x4eb0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4eb0d0:
    // 0x4eb0d0: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4eb0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4eb0d4:
    // 0x4eb0d4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4eb0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4eb0d8:
    // 0x4eb0d8: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4eb0d8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4eb0dc:
    // 0x4eb0dc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4eb0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4eb0e0:
    // 0x4eb0e0: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x4eb0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4eb0e4:
    // 0x4eb0e4: 0xc10c1bb  jal         func_4306EC
label_4eb0e8:
    if (ctx->pc == 0x4EB0E8u) {
        ctx->pc = 0x4EB0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB0E4u;
        // 0x4eb0e8: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EB0ECu;
        goto label_4eb0ec;
    }
    ctx->pc = 0x4EB0E4u;
    SET_GPR_U32(ctx, 31, 0x4EB0ECu);
    ctx->pc = 0x4EB0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB0E4u;
    // 0x4eb0e8: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4EB0E4u, 0x4EB0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB0ECu;
label_4eb0ec:
    // 0x4eb0ec: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4eb0f0:
    if (ctx->pc == 0x4EB0F0u) {
        ctx->pc = 0x4EB0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB0ECu;
        // 0x4eb0f0: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EB0F4u;
        goto label_4eb0f4;
    }
    ctx->pc = 0x4EB0ECu;
    {
        const bool branch_taken_0x4eb0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB0ECu;
        // 0x4eb0f0: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb0ec) {
            ctx->pc = 0x4EB1E4u;
            goto label_4eb1e4;
        }
    }
    ctx->pc = 0x4EB0F4u;
label_4eb0f4:
    // 0x4eb0f4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4eb0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4eb0f8:
    // 0x4eb0f8: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4eb0f8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4eb0fc:
    // 0x4eb0fc: 0x8ee7b9c0  lw          $a3, -0x4640($s7)
    ctx->pc = 0x4eb0fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4eb100:
    // 0x4eb100: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x4eb100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_4eb104:
    // 0x4eb104: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4eb104u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4eb108:
    // 0x4eb108: 0x249681a0  addiu       $s6, $a0, -0x7E60
    ctx->pc = 0x4eb108u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934944));
label_4eb10c:
    // 0x4eb10c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4eb10cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4eb110:
    // 0x4eb110: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4eb110u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4eb114:
    // 0x4eb114: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4eb114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4eb118:
    // 0x4eb118: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4eb118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4eb11c:
    // 0x4eb11c: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4eb11cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_4eb120:
    // 0x4eb120: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x4eb120u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_4eb124:
    // 0x4eb124: 0x5a080  sll         $s4, $a1, 2
    ctx->pc = 0x4eb124u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4eb128:
    // 0x4eb128: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4eb128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_4eb12c:
    // 0x4eb12c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4eb12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4eb130:
    // 0x4eb130: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x4eb130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_4eb134:
    // 0x4eb134: 0x3c0a0056  lui         $t2, 0x56
    ctx->pc = 0x4eb134u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)86 << 16));
label_4eb138:
    // 0x4eb138: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4eb138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4eb13c:
    // 0x4eb13c: 0x24a58198  addiu       $a1, $a1, -0x7E68
    ctx->pc = 0x4eb13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934936));
label_4eb140:
    // 0x4eb140: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4eb140u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4eb144:
    // 0x4eb144: 0x254a81c8  addiu       $t2, $t2, -0x7E38
    ctx->pc = 0x4eb144u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294934984));
label_4eb148:
    // 0x4eb148: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4eb148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4eb14c:
    // 0x4eb14c: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4eb14cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4eb150:
    // 0x4eb150: 0x40f809  jalr        $v0
label_4eb154:
    if (ctx->pc == 0x4EB154u) {
        ctx->pc = 0x4EB154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB150u;
        // 0x4eb154: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EB158u;
        goto label_4eb158;
    }
    ctx->pc = 0x4EB150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EB158u);
        ctx->pc = 0x4EB154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB150u;
        // 0x4eb154: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EB150u, 0x4EB158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EB158u;
label_4eb158:
    // 0x4eb158: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4eb158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4eb15c:
    // 0x4eb15c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4eb15cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4eb160:
    // 0x4eb160: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4eb160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4eb164:
    // 0x4eb164: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x4eb164u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4eb168:
    // 0x4eb168: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x4eb168u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_4eb16c:
    // 0x4eb16c: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x4eb16cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4eb170:
    // 0x4eb170: 0xc10c1bb  jal         func_4306EC
label_4eb174:
    if (ctx->pc == 0x4EB174u) {
        ctx->pc = 0x4EB174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB170u;
        // 0x4eb174: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EB178u;
        goto label_4eb178;
    }
    ctx->pc = 0x4EB170u;
    SET_GPR_U32(ctx, 31, 0x4EB178u);
    ctx->pc = 0x4EB174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB170u;
    // 0x4eb174: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4EB170u, 0x4EB178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB178u;
label_4eb178:
    // 0x4eb178: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_4eb17c:
    if (ctx->pc == 0x4EB17Cu) {
        ctx->pc = 0x4EB17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB178u;
        // 0x4eb17c: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EB180u;
        goto label_4eb180;
    }
    ctx->pc = 0x4EB178u;
    {
        const bool branch_taken_0x4eb178 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eb178) {
            ctx->pc = 0x4EB17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EB178u;
            // 0x4eb17c: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EB18Cu;
            goto label_4eb18c;
        }
    }
    ctx->pc = 0x4EB180u;
label_4eb180:
    // 0x4eb180: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4eb180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4eb184:
    // 0x4eb184: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4eb184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4eb188:
    // 0x4eb188: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4eb188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4eb18c:
    // 0x4eb18c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4eb18cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4eb190:
    // 0x4eb190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4eb190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4eb194:
    // 0x4eb194: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4eb194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4eb198:
    // 0x4eb198: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4eb198u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4eb19c:
    // 0x4eb19c: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x4eb19cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4eb1a0:
    // 0x4eb1a0: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4eb1a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4eb1a4:
    // 0x4eb1a4: 0xc10c1bb  jal         func_4306EC
label_4eb1a8:
    if (ctx->pc == 0x4EB1A8u) {
        ctx->pc = 0x4EB1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB1A4u;
        // 0x4eb1a8: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EB1ACu;
        goto label_4eb1ac;
    }
    ctx->pc = 0x4EB1A4u;
    SET_GPR_U32(ctx, 31, 0x4EB1ACu);
    ctx->pc = 0x4EB1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB1A4u;
    // 0x4eb1a8: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4EB1A4u, 0x4EB1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB1ACu;
label_4eb1ac:
    // 0x4eb1ac: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4eb1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4eb1b0:
    // 0x4eb1b0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4eb1b4:
    if (ctx->pc == 0x4EB1B4u) {
        ctx->pc = 0x4EB1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB1B0u;
        // 0x4eb1b4: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EB1B8u;
        goto label_4eb1b8;
    }
    ctx->pc = 0x4EB1B0u;
    {
        const bool branch_taken_0x4eb1b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB1B0u;
        // 0x4eb1b4: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb1b0) {
            ctx->pc = 0x4EB1D4u;
            goto label_4eb1d4;
        }
    }
    ctx->pc = 0x4EB1B8u;
label_4eb1b8:
    // 0x4eb1b8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4eb1b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4eb1bc:
    // 0x4eb1bc: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4eb1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4eb1c0:
    // 0x4eb1c0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4eb1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4eb1c4:
    // 0x4eb1c4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4eb1c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4eb1c8:
    // 0x4eb1c8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4eb1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4eb1cc:
    // 0x4eb1cc: 0x60f809  jalr        $v1
label_4eb1d0:
    if (ctx->pc == 0x4EB1D0u) {
        ctx->pc = 0x4EB1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB1CCu;
        // 0x4eb1d0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EB1D4u;
        goto label_4eb1d4;
    }
    ctx->pc = 0x4EB1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EB1D4u);
        ctx->pc = 0x4EB1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB1CCu;
        // 0x4eb1d0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EB1CCu, 0x4EB1D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EB1D4u;
label_4eb1d4:
    // 0x4eb1d4: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x4eb1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_4eb1d8:
    // 0x4eb1d8: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x4eb1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_4eb1dc:
    // 0x4eb1dc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4eb1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_4eb1e0:
    // 0x4eb1e0: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x4eb1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_4eb1e4:
    // 0x4eb1e4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4eb1e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4eb1e8:
    // 0x4eb1e8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4eb1e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4eb1ec:
    // 0x4eb1ec: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4eb1ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4eb1f0:
    // 0x4eb1f0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4eb1f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4eb1f4:
    // 0x4eb1f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4eb1f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4eb1f8:
    // 0x4eb1f8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4eb1f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4eb1fc:
    // 0x4eb1fc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4eb1fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4eb200:
    // 0x4eb200: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4eb200u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4eb204:
    // 0x4eb204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eb204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4eb208:
    // 0x4eb208: 0x3e00008  jr          $ra
label_4eb20c:
    if (ctx->pc == 0x4EB20Cu) {
        ctx->pc = 0x4EB20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB208u;
        // 0x4eb20c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EB210u;
        goto label_fallthrough_0x4eb208;
    }
    ctx->pc = 0x4EB208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EB20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB208u;
        // 0x4eb20c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EB208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4eb208:
    ctx->pc = 0x4EB210u;
}
