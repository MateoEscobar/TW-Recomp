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

// Function: sub_00171920
// Address: 0x171920 - 0x171a50
void sub_00171920_0x171920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171920_0x171920");
#endif

    switch (ctx->pc) {
        case 0x171920u: goto label_171920;
        case 0x171924u: goto label_171924;
        case 0x171928u: goto label_171928;
        case 0x17192cu: goto label_17192c;
        case 0x171930u: goto label_171930;
        case 0x171934u: goto label_171934;
        case 0x171938u: goto label_171938;
        case 0x17193cu: goto label_17193c;
        case 0x171940u: goto label_171940;
        case 0x171944u: goto label_171944;
        case 0x171948u: goto label_171948;
        case 0x17194cu: goto label_17194c;
        case 0x171950u: goto label_171950;
        case 0x171954u: goto label_171954;
        case 0x171958u: goto label_171958;
        case 0x17195cu: goto label_17195c;
        case 0x171960u: goto label_171960;
        case 0x171964u: goto label_171964;
        case 0x171968u: goto label_171968;
        case 0x17196cu: goto label_17196c;
        case 0x171970u: goto label_171970;
        case 0x171974u: goto label_171974;
        case 0x171978u: goto label_171978;
        case 0x17197cu: goto label_17197c;
        case 0x171980u: goto label_171980;
        case 0x171984u: goto label_171984;
        case 0x171988u: goto label_171988;
        case 0x17198cu: goto label_17198c;
        case 0x171990u: goto label_171990;
        case 0x171994u: goto label_171994;
        case 0x171998u: goto label_171998;
        case 0x17199cu: goto label_17199c;
        case 0x1719a0u: goto label_1719a0;
        case 0x1719a4u: goto label_1719a4;
        case 0x1719a8u: goto label_1719a8;
        case 0x1719acu: goto label_1719ac;
        case 0x1719b0u: goto label_1719b0;
        case 0x1719b4u: goto label_1719b4;
        case 0x1719b8u: goto label_1719b8;
        case 0x1719bcu: goto label_1719bc;
        case 0x1719c0u: goto label_1719c0;
        case 0x1719c4u: goto label_1719c4;
        case 0x1719c8u: goto label_1719c8;
        case 0x1719ccu: goto label_1719cc;
        case 0x1719d0u: goto label_1719d0;
        case 0x1719d4u: goto label_1719d4;
        case 0x1719d8u: goto label_1719d8;
        case 0x1719dcu: goto label_1719dc;
        case 0x1719e0u: goto label_1719e0;
        case 0x1719e4u: goto label_1719e4;
        case 0x1719e8u: goto label_1719e8;
        case 0x1719ecu: goto label_1719ec;
        case 0x1719f0u: goto label_1719f0;
        case 0x1719f4u: goto label_1719f4;
        case 0x1719f8u: goto label_1719f8;
        case 0x1719fcu: goto label_1719fc;
        case 0x171a00u: goto label_171a00;
        case 0x171a04u: goto label_171a04;
        case 0x171a08u: goto label_171a08;
        case 0x171a0cu: goto label_171a0c;
        case 0x171a10u: goto label_171a10;
        case 0x171a14u: goto label_171a14;
        case 0x171a18u: goto label_171a18;
        case 0x171a1cu: goto label_171a1c;
        case 0x171a20u: goto label_171a20;
        case 0x171a24u: goto label_171a24;
        case 0x171a28u: goto label_171a28;
        case 0x171a2cu: goto label_171a2c;
        case 0x171a30u: goto label_171a30;
        case 0x171a34u: goto label_171a34;
        case 0x171a38u: goto label_171a38;
        case 0x171a3cu: goto label_171a3c;
        case 0x171a40u: goto label_171a40;
        case 0x171a44u: goto label_171a44;
        case 0x171a48u: goto label_171a48;
        case 0x171a4cu: goto label_171a4c;
        default: break;
    }

    ctx->pc = 0x171920u;

label_171920:
    // 0x171920: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x171920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_171924:
    // 0x171924: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x171924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_171928:
    // 0x171928: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x171928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_17192c:
    // 0x17192c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17192cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_171930:
    // 0x171930: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x171930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_171934:
    // 0x171934: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x171934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_171938:
    // 0x171938: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x171938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_17193c:
    // 0x17193c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17193cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_171940:
    // 0x171940: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x171940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_171944:
    // 0x171944: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_171948:
    if (ctx->pc == 0x171948u) {
        ctx->pc = 0x171948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171944u;
        // 0x171948: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17194Cu;
        goto label_17194c;
    }
    ctx->pc = 0x171944u;
    {
        const bool branch_taken_0x171944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171944u;
        // 0x171948: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171944) {
            ctx->pc = 0x1719D0u;
            goto label_1719d0;
        }
    }
    ctx->pc = 0x17194Cu;
label_17194c:
    // 0x17194c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x17194cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_171950:
    // 0x171950: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x171950u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_171954:
    // 0x171954: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x171954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_171958:
    // 0x171958: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x171958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_17195c:
    // 0x17195c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x17195cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_171960:
    // 0x171960: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x171960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_171964:
    // 0x171964: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x171964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_171968:
    // 0x171968: 0x60f809  jalr        $v1
label_17196c:
    if (ctx->pc == 0x17196Cu) {
        ctx->pc = 0x17196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171968u;
        // 0x17196c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171970u;
        goto label_171970;
    }
    ctx->pc = 0x171968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x171970u);
        ctx->pc = 0x17196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171968u;
        // 0x17196c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171968u, 0x171970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x171970u;
label_171970:
    // 0x171970: 0x8e0c27e4  lw          $t4, 0x27E4($s0)
    ctx->pc = 0x171970u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_171974:
    // 0x171974: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x171974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_171978:
    // 0x171978: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x171978u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_17197c:
    // 0x17197c: 0x24060d80  addiu       $a2, $zero, 0xD80
    ctx->pc = 0x17197cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3456));
label_171980:
    // 0x171980: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x171980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_171984:
    // 0x171984: 0x24a51ad0  addiu       $a1, $a1, 0x1AD0
    ctx->pc = 0x171984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6864));
label_171988:
    // 0x171988: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x171988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_17198c:
    // 0x17198c: 0x2409008f  addiu       $t1, $zero, 0x8F
    ctx->pc = 0x17198cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_171990:
    // 0x171990: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x171990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_171994:
    // 0x171994: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x171994u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171998:
    // 0x171998: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x171998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_17199c:
    // 0x17199c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x17199cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1719a0:
    // 0x1719a0: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x1719a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_1719a4:
    // 0x1719a4: 0x40f809  jalr        $v0
label_1719a8:
    if (ctx->pc == 0x1719A8u) {
        ctx->pc = 0x1719A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1719A4u;
        // 0x1719a8: 0x25081aa0  addiu       $t0, $t0, 0x1AA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1719ACu;
        goto label_1719ac;
    }
    ctx->pc = 0x1719A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1719ACu);
        ctx->pc = 0x1719A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1719A4u;
        // 0x1719a8: 0x25081aa0  addiu       $t0, $t0, 0x1AA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1719A4u, 0x1719ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1719ACu;
label_1719ac:
    // 0x1719ac: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x1719acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_1719b0:
    // 0x1719b0: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x1719b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_1719b4:
    // 0x1719b4: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x1719b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_1719b8:
    // 0x1719b8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1719b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1719bc:
    // 0x1719bc: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1719bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1719c0:
    // 0x1719c0: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1719c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1719c4:
    // 0x1719c4: 0x60f809  jalr        $v1
label_1719c8:
    if (ctx->pc == 0x1719C8u) {
        ctx->pc = 0x1719C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1719C4u;
        // 0x1719c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1719CCu;
        goto label_1719cc;
    }
    ctx->pc = 0x1719C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1719CCu);
        ctx->pc = 0x1719C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1719C4u;
        // 0x1719c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1719C4u, 0x1719CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1719CCu;
label_1719cc:
    // 0x1719cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1719ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1719d0:
    // 0x1719d0: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x1719d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_1719d4:
    // 0x1719d4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1719d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1719d8:
    // 0x1719d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1719d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1719dc:
    // 0x1719dc: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x1719dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1719e0:
    // 0x1719e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1719e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1719e4:
    // 0x1719e4: 0x0  nop
    ctx->pc = 0x1719e4u;
    // NOP
label_1719e8:
    // 0x1719e8: 0x26530001  addiu       $s3, $s2, 0x1
    ctx->pc = 0x1719e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1719ec:
    // 0x1719ec: 0x0  nop
    ctx->pc = 0x1719ecu;
    // NOP
label_1719f0:
    // 0x1719f0: 0xa2110055  sb          $s1, 0x55($s0)
    ctx->pc = 0x1719f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 17));
label_1719f4:
    // 0x1719f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1719f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1719f8:
    // 0x1719f8: 0xa2120056  sb          $s2, 0x56($s0)
    ctx->pc = 0x1719f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 86), (uint8_t)GPR_U32(ctx, 18));
label_1719fc:
    // 0x1719fc: 0xc05c582  jal         func_171608
label_171a00:
    if (ctx->pc == 0x171A00u) {
        ctx->pc = 0x171A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1719FCu;
        // 0x171a00: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171A04u;
        goto label_171a04;
    }
    ctx->pc = 0x1719FCu;
    SET_GPR_U32(ctx, 31, 0x171A04u);
    ctx->pc = 0x171A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1719FCu;
    // 0x171a00: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171608u, 0x1719FCu, 0x171A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171A04u;
label_171a04:
    // 0x171a04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x171a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171a08:
    // 0x171a08: 0xc05c6c6  jal         func_171B18
label_171a0c:
    if (ctx->pc == 0x171A0Cu) {
        ctx->pc = 0x171A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A08u;
        // 0x171a0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171A10u;
        goto label_171a10;
    }
    ctx->pc = 0x171A08u;
    SET_GPR_U32(ctx, 31, 0x171A10u);
    ctx->pc = 0x171A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A08u;
    // 0x171a0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B18u, 0x171A08u, 0x171A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171A10u;
label_171a10:
    // 0x171a10: 0x2e220006  sltiu       $v0, $s1, 0x6
    ctx->pc = 0x171a10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_171a14:
    // 0x171a14: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_171a18:
    if (ctx->pc == 0x171A18u) {
        ctx->pc = 0x171A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A14u;
        // 0x171a18: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171A1Cu;
        goto label_171a1c;
    }
    ctx->pc = 0x171A14u;
    {
        const bool branch_taken_0x171a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A14u;
        // 0x171a18: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171a14) {
            ctx->pc = 0x1719F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1719f0;
        }
    }
    ctx->pc = 0x171A1Cu;
label_171a1c:
    // 0x171a1c: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x171a1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_171a20:
    // 0x171a20: 0x2e420006  sltiu       $v0, $s2, 0x6
    ctx->pc = 0x171a20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_171a24:
    // 0x171a24: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_171a28:
    if (ctx->pc == 0x171A28u) {
        ctx->pc = 0x171A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A24u;
        // 0x171a28: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171A2Cu;
        goto label_171a2c;
    }
    ctx->pc = 0x171A24u;
    {
        const bool branch_taken_0x171a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A24u;
        // 0x171a28: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171a24) {
            ctx->pc = 0x1719E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1719e8;
        }
    }
    ctx->pc = 0x171A2Cu;
label_171a2c:
    // 0x171a2c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x171a2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_171a30:
    // 0x171a30: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x171a30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_171a34:
    // 0x171a34: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x171a34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_171a38:
    // 0x171a38: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x171a38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_171a3c:
    // 0x171a3c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x171a3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_171a40:
    // 0x171a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_171a44:
    // 0x171a44: 0x3e00008  jr          $ra
label_171a48:
    if (ctx->pc == 0x171A48u) {
        ctx->pc = 0x171A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A44u;
        // 0x171a48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171A4Cu;
        goto label_171a4c;
    }
    ctx->pc = 0x171A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A44u;
        // 0x171a48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171A4Cu;
label_171a4c:
    // 0x171a4c: 0x0  nop
    ctx->pc = 0x171a4cu;
    // NOP
    ctx->pc = 0x171a50u;
}
