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

// Function: sub_004C6240
// Address: 0x4c6240 - 0x4c6528
void sub_004C6240_0x4c6240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C6240_0x4c6240");
#endif

    switch (ctx->pc) {
        case 0x4c6370u: goto label_4c6370;
        case 0x4c64dcu: goto label_4c64dc;
        default: break;
    }

    ctx->pc = 0x4c6240u;

    // 0x4c6240: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4c6240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4c6244: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4c6244u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6248: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c6248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4c624c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4c624cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4c6250: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4c6250u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6254: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c6254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c6258: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c6258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c625c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c625cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c6260: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c6260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c6264: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4c6264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4c6268: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4c6268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4c626c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4c626cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c6270: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x4c6270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x4c6274: 0x146200a2  bne         $v1, $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x4C6274u;
    {
        const bool branch_taken_0x4c6274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4C6278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6274u;
        // 0x4c6278: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6274) {
            ctx->pc = 0x4C6500u;
            goto label_4c6500;
        }
    }
    ctx->pc = 0x4C627Cu;
    // 0x4c627c: 0x8eb00008  lw          $s0, 0x8($s5)
    ctx->pc = 0x4c627cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x4c6280: 0x8d270028  lw          $a3, 0x28($t1)
    ctx->pc = 0x4c6280u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x4c6284: 0x8eb20004  lw          $s2, 0x4($s5)
    ctx->pc = 0x4c6284u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x4c6288: 0x207102b  sltu        $v0, $s0, $a3
    ctx->pc = 0x4c6288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4c628c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4C628Cu;
    {
        const bool branch_taken_0x4c628c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C628Cu;
        // 0x4c6290: 0x8eb10000  lw          $s1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c628c) {
            ctx->pc = 0x4C62B8u;
            goto label_4c62b8;
        }
    }
    ctx->pc = 0x4C6294u;
    // 0x4c6294: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4c6294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4c6298: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c6298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c629c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4c629cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4c62a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c62a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c62a4: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x4c62a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c62a8: 0x2078023  subu        $s0, $s0, $a3
    ctx->pc = 0x4c62a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x4c62ac: 0x2224024  and         $t0, $s1, $v0
    ctx->pc = 0x4c62acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x4c62b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4C62B0u;
    {
        const bool branch_taken_0x4c62b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C62B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C62B0u;
        // 0x4c62b4: 0xf18806  srlv        $s1, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c62b0) {
            ctx->pc = 0x4C62F0u;
            goto label_4c62f0;
        }
    }
    ctx->pc = 0x4C62B8u;
label_4c62b8:
    // 0x4c62b8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4c62b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c62bc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4c62bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4c62c0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c62c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c62c4: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4c62c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4c62c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c62c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c62cc: 0x2062004  sllv        $a0, $a2, $s0
    ctx->pc = 0x4c62ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 16) & 0x1F));
    // 0x4c62d0: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x4c62d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c62d4: 0x2242025  or          $a0, $s1, $a0
    ctx->pc = 0x4c62d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x4c62d8: 0xf01823  subu        $v1, $a3, $s0
    ctx->pc = 0x4c62d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x4c62dc: 0x24e5ffe0  addiu       $a1, $a3, -0x20
    ctx->pc = 0x4c62dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
    // 0x4c62e0: 0x824024  and         $t0, $a0, $v0
    ctx->pc = 0x4c62e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c62e4: 0x668806  srlv        $s1, $a2, $v1
    ctx->pc = 0x4c62e4u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x4c62e8: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x4c62e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x4c62ec: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4c62ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4c62f0:
    // 0x4c62f0: 0x1100007c  beqz        $t0, . + 4 + (0x7C << 2)
    ctx->pc = 0x4C62F0u;
    {
        const bool branch_taken_0x4c62f0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C62F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C62F0u;
        // 0x4c62f4: 0x252f0010  addiu       $t7, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c62f0) {
            ctx->pc = 0x4C64E4u;
            goto label_4c64e4;
        }
    }
    ctx->pc = 0x4C62F8u;
    // 0x4c62f8: 0x8d22002c  lw          $v0, 0x2C($t1)
    ctx->pc = 0x4c62f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x4c62fc: 0x8d380020  lw          $t8, 0x20($t1)
    ctx->pc = 0x4c62fcu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x4c6300: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x4c6300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4c6304: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x4c6304u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6308: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x4c6308u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
    // 0x4c630c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4c630cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4c6310: 0x8d2e0024  lw          $t6, 0x24($t1)
    ctx->pc = 0x4c6310u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
    // 0x4c6314: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4C6314u;
    {
        const bool branch_taken_0x4c6314 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6314u;
        // 0x4c6318: 0x8e870180  lw          $a3, 0x180($s4) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6314) {
            ctx->pc = 0x4C6334u;
            goto label_4c6334;
        }
    }
    ctx->pc = 0x4C631Cu;
    // 0x4c631c: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x4c631cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x4c6320: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4c6320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x4c6324: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C6324u;
    {
        const bool branch_taken_0x4c6324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6324u;
        // 0x4c6328: 0x118842  srl         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6324) {
            ctx->pc = 0x4C634Cu;
            goto label_4c634c;
        }
    }
    ctx->pc = 0x4C632Cu;
    // 0x4c632c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4C632Cu;
    {
        const bool branch_taken_0x4c632c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C632Cu;
        // 0x4c6330: 0x24190020  addiu       $t9, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c632c) {
            ctx->pc = 0x4C6358u;
            goto label_4c6358;
        }
    }
    ctx->pc = 0x4C6334u;
label_4c6334:
    // 0x4c6334: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4c6334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c6338: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x4c6338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4c633c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4c633cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4c6340: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4c6340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4c6344: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C6344u;
    {
        const bool branch_taken_0x4c6344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6344u;
        // 0x4c6348: 0x38842  srl         $s1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6344) {
            ctx->pc = 0x4C6354u;
            goto label_4c6354;
        }
    }
    ctx->pc = 0x4C634Cu;
label_4c634c:
    // 0x4c634c: 0x81023  negu        $v0, $t0
    ctx->pc = 0x4c634cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
    // 0x4c6350: 0x2448ffec  addiu       $t0, $v0, -0x14
    ctx->pc = 0x4c6350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
label_4c6354:
    // 0x4c6354: 0x24190020  addiu       $t9, $zero, 0x20
    ctx->pc = 0x4c6354u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4c6358:
    // 0x4c6358: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4c6358u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4c635c: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4c635cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4c6360: 0x3381023  subu        $v0, $t9, $t8
    ctx->pc = 0x4c6360u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 24)));
    // 0x4c6364: 0x4a6806  srlv        $t5, $t2, $v0
    ctx->pc = 0x4c6364u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 2) & 0x1F));
    // 0x4c6368: 0x26960100  addiu       $s6, $s4, 0x100
    ctx->pc = 0x4c6368u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
    // 0x4c636c: 0x268c0140  addiu       $t4, $s4, 0x140
    ctx->pc = 0x4c636cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
label_4c6370:
    // 0x4c6370: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x4c6370u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4c6374: 0x2c41021  addu        $v0, $s6, $a0
    ctx->pc = 0x4c6374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x4c6378: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4c6378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c637c: 0x202182b  sltu        $v1, $s0, $v0
    ctx->pc = 0x4c637cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4c6380: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x4C6380u;
    {
        const bool branch_taken_0x4c6380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6380u;
        // 0x4c6384: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6380) {
            ctx->pc = 0x4C63C8u;
            goto label_4c63c8;
        }
    }
    ctx->pc = 0x4C6388u;
    // 0x4c6388: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x4c6388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x4c638c: 0x3221023  subu        $v0, $t9, $v0
    ctx->pc = 0x4c638cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x4c6390: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c6390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c6394: 0x4a1006  srlv        $v0, $t2, $v0
    ctx->pc = 0x4c6394u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 2) & 0x1F));
    // 0x4c6398: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x4c6398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x4c639c: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x4c639cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x4c63a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c63a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c63a4: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x4c63a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c63a8: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x4c63a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x4c63ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4c63acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4c63b0: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x4c63b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x4c63b4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4c63b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x4c63b8: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x4c63b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x4c63bc: 0x90530000  lbu         $s3, 0x0($v0)
    ctx->pc = 0x4c63bcu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c63c0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x4C63C0u;
    {
        const bool branch_taken_0x4c63c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C63C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C63C0u;
        // 0x4c63c4: 0xb18806  srlv        $s1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c63c0) {
            ctx->pc = 0x4C6430u;
            goto label_4c6430;
        }
    }
    ctx->pc = 0x4C63C8u;
label_4c63c8:
    // 0x4c63c8: 0x1841821  addu        $v1, $t4, $a0
    ctx->pc = 0x4c63c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x4c63cc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4c63ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c63d0: 0x3222023  subu        $a0, $t9, $v0
    ctx->pc = 0x4c63d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x4c63d4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x4c63d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c63d8: 0x2061004  sllv        $v0, $a2, $s0
    ctx->pc = 0x4c63d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 16) & 0x1F));
    // 0x4c63dc: 0x8a2006  srlv        $a0, $t2, $a0
    ctx->pc = 0x4c63dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 4) & 0x1F));
    // 0x4c63e0: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x4c63e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x4c63e4: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x4c63e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x4c63e8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4c63e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4c63ec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4c63ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4c63f0: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x4c63f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c63f4: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x4c63f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x4c63f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c63f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c63fc: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x4c63fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x4c6400: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4c6400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x4c6404: 0x205182b  sltu        $v1, $s0, $a1
    ctx->pc = 0x4c6404u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4c6408: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C6408u;
    {
        const bool branch_taken_0x4c6408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6408u;
        // 0x4c640c: 0x90530000  lbu         $s3, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6408) {
            ctx->pc = 0x4C641Cu;
            goto label_4c641c;
        }
    }
    ctx->pc = 0x4C6410u;
    // 0x4c6410: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x4c6410u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x4c6414: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4C6414u;
    {
        const bool branch_taken_0x4c6414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6414u;
        // 0x4c6418: 0xb18806  srlv        $s1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6414) {
            ctx->pc = 0x4C6430u;
            goto label_4c6430;
        }
    }
    ctx->pc = 0x4C641Cu;
label_4c641c:
    // 0x4c641c: 0xb01023  subu        $v0, $a1, $s0
    ctx->pc = 0x4c641cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x4c6420: 0x24a3ffe0  addiu       $v1, $a1, -0x20
    ctx->pc = 0x4c6420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x4c6424: 0x468806  srlv        $s1, $a2, $v0
    ctx->pc = 0x4c6424u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x4c6428: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x4c6428u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x4c642c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4c642cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4c6430:
    // 0x4c6430: 0x218102b  sltu        $v0, $s0, $t8
    ctx->pc = 0x4c6430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x4c6434: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C6434u;
    {
        const bool branch_taken_0x4c6434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6434u;
        // 0x4c6438: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6434) {
            ctx->pc = 0x4C645Cu;
            goto label_4c645c;
        }
    }
    ctx->pc = 0x4C643Cu;
    // 0x4c643c: 0x22d1024  and         $v0, $s1, $t5
    ctx->pc = 0x4c643cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 13));
    // 0x4c6440: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x4c6440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x4c6444: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x4c6444u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c6448: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x4c6448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x4c644c: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x4c644cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x4c6450: 0x1e31821  addu        $v1, $t7, $v1
    ctx->pc = 0x4c6450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x4c6454: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4C6454u;
    {
        const bool branch_taken_0x4c6454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6454u;
        // 0x4c6458: 0x90660000  lbu         $a2, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6454) {
            ctx->pc = 0x4C648Cu;
            goto label_4c648c;
        }
    }
    ctx->pc = 0x4C645Cu;
label_4c645c:
    // 0x4c645c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4c645cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4c6460: 0x2051004  sllv        $v0, $a1, $s0
    ctx->pc = 0x4c6460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
    // 0x4c6464: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x4c6464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x4c6468: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x4c6468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x4c646c: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x4c646cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x4c6470: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x4c6470u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c6474: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x4c6474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x4c6478: 0x1e31821  addu        $v1, $t7, $v1
    ctx->pc = 0x4c6478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x4c647c: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x4c647cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x4c6480: 0x204102b  sltu        $v0, $s0, $a0
    ctx->pc = 0x4c6480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4c6484: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C6484u;
    {
        const bool branch_taken_0x4c6484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C6488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6484u;
        // 0x4c6488: 0x90660000  lbu         $a2, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6484) {
            ctx->pc = 0x4C6498u;
            goto label_4c6498;
        }
    }
    ctx->pc = 0x4C648Cu;
label_4c648c:
    // 0x4c648c: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x4c648cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x4c6490: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4C6490u;
    {
        const bool branch_taken_0x4c6490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6490u;
        // 0x4c6494: 0x918806  srlv        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6490) {
            ctx->pc = 0x4C64ACu;
            goto label_4c64ac;
        }
    }
    ctx->pc = 0x4C6498u;
label_4c6498:
    // 0x4c6498: 0x901023  subu        $v0, $a0, $s0
    ctx->pc = 0x4c6498u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x4c649c: 0x2483ffe0  addiu       $v1, $a0, -0x20
    ctx->pc = 0x4c649cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x4c64a0: 0x458806  srlv        $s1, $a1, $v0
    ctx->pc = 0x4c64a0u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x4c64a4: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x4c64a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x4c64a8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4c64a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4c64ac:
    // 0x4c64ac: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x4c64acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x4c64b0: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x4c64b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x4c64b4: 0xa1620000  sb          $v0, 0x0($t3)
    ctx->pc = 0x4c64b4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4c64b8: 0x1d00ffad  bgtz        $t0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x4C64B8u;
    {
        const bool branch_taken_0x4c64b8 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x4C64BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C64B8u;
        // 0x4c64bc: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c64b8) {
            ctx->pc = 0x4C6370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c6370;
        }
    }
    ctx->pc = 0x4C64C0u;
    // 0x4c64c0: 0x2902ffea  slti        $v0, $t0, -0x16
    ctx->pc = 0x4c64c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4294967274) ? 1 : 0);
    // 0x4c64c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C64C4u;
    {
        const bool branch_taken_0x4c64c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C64C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C64C4u;
        // 0x4c64c8: 0x25060015  addiu       $a2, $t0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c64c4) {
            ctx->pc = 0x4C64DCu;
            goto label_4c64dc;
        }
    }
    ctx->pc = 0x4C64CCu;
    // 0x4c64cc: 0x8d24002c  lw          $a0, 0x2C($t1)
    ctx->pc = 0x4c64ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x4c64d0: 0x63023  negu        $a2, $a2
    ctx->pc = 0x4c64d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x4c64d4: 0xc13372a  jal         func_4CDCA8
    ctx->pc = 0x4C64D4u;
    SET_GPR_U32(ctx, 31, 0x4C64DCu);
    ctx->pc = 0x4C64D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C64D4u;
    // 0x4c64d8: 0x90850000  lbu         $a1, 0x0($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CDCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CDCA8u, 0x4C64D4u, 0x4C64DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C64DCu;
label_4c64dc:
    // 0x4c64dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4C64DCu;
    {
        const bool branch_taken_0x4c64dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C64E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C64DCu;
        // 0x4c64e0: 0xae930180  sw          $s3, 0x180($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 384), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c64dc) {
            ctx->pc = 0x4C64F4u;
            goto label_4c64f4;
        }
    }
    ctx->pc = 0x4C64E4u;
label_4c64e4:
    // 0x4c64e4: 0x8d22002c  lw          $v0, 0x2C($t1)
    ctx->pc = 0x4c64e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x4c64e8: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x4c64e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4c64ec: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x4c64ecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x4c64f0: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4c64f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_4c64f4:
    // 0x4c64f4: 0xaeb00008  sw          $s0, 0x8($s5)
    ctx->pc = 0x4c64f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 16));
    // 0x4c64f8: 0xaeb20004  sw          $s2, 0x4($s5)
    ctx->pc = 0x4c64f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 18));
    // 0x4c64fc: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x4c64fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
label_4c6500:
    // 0x4c6500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c6500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c6504: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c6504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c6508: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c6508u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c650c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c650cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c6510: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c6510u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c6514: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c6514u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c6518: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4c6518u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c651c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4c651cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c6520: 0x3e00008  jr          $ra
    ctx->pc = 0x4C6520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C6524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6520u;
        // 0x4c6524: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C6520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C6528u;
}
